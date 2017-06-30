
%{
    #include <stdio.h>
    int line=1;
    int start_line=1;
    int ch=1;
%}
%error-verbose
%token NUMBER INT DOUBLE BOOL CHAR ARRAY STRING
%token ADD SUB MUL DIV  MOD NOT OR GT LT GE LE NE EQ AND INC DEC
%token ASG OP CP OSQ CSQ OC CC
%token COMMA SEMICO COLON
%token IDENTIFIER VARTYPE
%token INCLUDE INCLUDEFILE
%token IF ELSE ELSEIF
%token WHILE FOR
%token SWITCH CASE DEFAULT
%token CONTINUE RETURN BREAK
%token EOL


%left AND OR
%left NE EQ
%left LT GT GE LE
%left ADD SUB
%left MUL DIV
%left NOT
%left OP CP OSQ CSQ INC DEC

%%
/* Source Code Top Node */
source
: source source_statement { printf("source -> source source_statement\n");}
| source_statement { printf("source -> source_statement\n");}
;

/* Source statement */
source_statement
: func_def { printf("source_statement -> func_def\n");}
| INCLUDE INCLUDEFILE { printf("source_statement -> INCLUDE INCLUDEFILE\n");}
| INCLUDE STRING { printf("source_statement -> INCLUDE STRING\n");}
| var_def_statement { printf("source_statement -> var_def\n");}
;

/* Code block */
block
 : OC statementseq CC { printf("[BLOCK]block -> { seq }\n"); }
 | statementseq { printf("[BLOCK]block -> statementseq\n"); }
 | SEMICO { printf("block -> SEMICO\n");}
;

/* Statement Sequence */
statementseq
 : statementseq statement { printf("[STATEMENT SEQ]statementseq -> statementseq statement\n"); }
 | statement { printf("[STATEMENT SEQ]statementseq -> statement\n"); }
 ;

/* Statement */
/* All statements should be code block or ended with SEMICO */
statement
: var_def_statement { printf("[STATEMENT var_def_statement ]statement -> var_def_statement\n");}
| control { printf("[STATEMENT control %s]statement -> control\n",$1);}
| assignment_statement { printf("[STATEMENT assignment]statement -> assignment_statement\n"); }
| func_call {printf("[STATEMENT func_call]statement -> func_call\n");}
| func_def {printf("[STATEMENT func_def]statement -> func_def\n");}
;

/* Function Definition */
func_def
: VARTYPE id OP CP block { $$=$2; printf("[FUNC %s DEF]func_def -> VARTYPE id () <block>\n",$2); }
| VARTYPE id OP func_def_args_seq CP block { $$=$2; printf("[FUNC %s DEF]func_def -> VARTYPE id (args) <block>\n",$2); }
;

func_def_args_seq
: func_def_args_seq COMMA func_def_args
| func_def_args
;

func_def_args
: VARTYPE id
| VARTYPE id ASG expression
;

/* Function call */
func_call
: id OP CP SEMICO { printf("[FUNC %s CALLED]func_call -> id ();\n",$1);}
| id OP func_call_args_seq CP SEMICO { printf("[FUNC %s CALLED]func_call -> id ();\n",$1);}
;

/* Function call args*/
func_call_args_seq
: func_call_args_seq COMMA expression
| expression
;

/* Control Statements */
control
: if_block { $$="if"; printf("control->if_block\n"); }
| for_block { $$="for"; printf("control -> for_block\n"); }
| while_block { $$="while"; printf("control -> while_block\n"); }
| switch_block { $$="switch";printf("control -> switch_block\n"); }
| CONTINUE SEMICO { $$="continue"; printf("continue\n");}
| BREAK SEMICO {$$="break";}
| RETURN SEMICO {$$="return";}
| RETURN expression SEMICO {$$="return";}
;

/* Control - IF */
if_block
: if_ifheader ELSE block { printf("[IF]if_block -> if_ifheader ELSE block\n"); }
| if_ifheader { printf("[IF]if_block -> if_ifheader\n"); }
;

/* Control - IF - header*/
if_ifheader
: IF OP expression CP block  {printf("if_ifheader -> if () block\n");}
;

/* Control - While*/
while_block
: WHILE OP expression CP block {printf("[WHILE]while_block -> while(expression) block\n");}
| WHILE OP CP block {printf("[WHILE]while_block -> while() block\n");}
;

/* Control - For - var initialize */
for_init: /*NONE*/
| VARTYPE assignment {printf("for_init -> VARTYPE id = expression\n");}
| assignment {printf("for_init -> assignment\n");}
;

/* Control - For - loop condition */
for_condition: /*NONE*/
| expression {printf("for_condition -> expression\n");}
;

/* Control - For - Do after*/
for_after: /*NONE*/
| assignment {printf("for_after -> statement\n");}
;

/* Control - For statement*/
for_block
: FOR OP for_init SEMICO for_condition SEMICO for_after CP block {printf("[FOR]for_block -> for(e1;e2;e3) block\n");}
;

/* Control - Switch block */
switch_block
: SWITCH OP expression CP OC caseseq CC {printf("[SWITCH]switch_block -> switch(exp){case}\n");}
;

/* case block sequence*/
caseseq
: caseseq casestat {printf("caseseq -> caseseq casestat\n");}
| casestat {printf("caseseq -> casestat\n");}
;

/* case block*/
casestat
: CASE expression COLON statementseq {printf("casestat -> CASE expression COLON statementseq\n");}
| DEFAULT COLON statementseq {printf("casestat -> DEFAULT COLON statementseq\n");}
;

/* Variable definition statement, with ; at the end of statement */
var_def_statement
 : VARTYPE var_def_idseq SEMICO { printf("[VARDEF %s ]var_def -> VARTYPE var_def_idseq ;\n",$2); }
;

/* Variable definition sequence */
var_def_idseq
: var_def_idseq COMMA var_def { $$=strcat($$,","); $$=strcat($$,$3); printf("var_def_idseq -> var_def_id_idseq var_def\n"); }
| var_def { $$=$1; printf("var_def_idseq -> var_def\n"); }
;

/* Variable definition unit, like a=<exp> or a */
var_def
 : assignment { $$ = $1; printf("var_def -> assignment\n"); }
 | id { $$ = $1; printf("var_def -> id\n");}
 | array_def { $$ = $1; printf("var_def -> array_def\n");}
 | array_item {$$ = $1; printf("var_def -> array_item\n");}
;
/*assignment statement*/
assignment_statement
: assignment SEMICO { printf("assignment_statement -> assignment ;\n"); }
;

/*assignment unit*/
assignment
: id ASG expression { $$ = $1; printf("assignment -> id ASG expression\n"); }
| id INC
| id DEC
| INC id
| DEC id
;

/* expression */
expression
 : factor
 | OP expression CP
 | expression ADD expression
 | expression SUB expression
 | expression MUL expression
 | expression DIV expression
 | expression MOD expression
 | expression GT expression
 | expression LT expression
 | expression GE expression
 | expression LE expression
 | expression NE expression
 | expression EQ expression
 | expression OR expression
 | NOT expression
 | ADD expression
 | SUB expression
 ;

/* Factor */
factor
 : NUMBER /* { printf("factor -> NUMBER\n"); } */
 | INT /* { printf("factor -> INT\n"); } */
 | DOUBLE  /*{ printf("factor -> DOUBLE\n"); } */
 | BOOL  /*{ printf("factor -> BOOL\n"); } */
 | id  /*{$$=$1; printf("factor -> id\n");} */
 | STRING  /*{printf("factor -> STRING\n");} */
 | array_item /* { printf("factor -> array\n");} */
;

/* Array definition*/
array_def
 : id OSQ CSQ {$$ = strcat($1,"[]");  printf("array -> ID[]\n");}
;

/*Array item*/
array_item
 : id OSQ INT CSQ {$$ = strcat($1,"[]"); printf("array -> ID[n]\n");}
;

id: IDENTIFIER{ $$ = strdup(yytext); }
;
%%

int main(int argc, char **argv)
{
  if(argc > 1){
    if( !(yyin = fopen(argv[1], "r")) ){
      perror(argv[1]);
      printf("NO INPUT FILE\n");
      return 1;
    }
  }

  yyparse();
  return 0;
}

yyerror(char *s)
{
  printf("error: L%d, %s\n", line, s);
}
