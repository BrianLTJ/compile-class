
%{
    #include <stdio.h>
    int line=1;
    int ch=1;
%}
%error-verbose
%token NUMBER INT DOUBLE BOOL CHAR
%token ADD SUB MUL DIV  MOD GT LT GE LE NE EQ
%token ASG OP CP OSQ CSQ OC CC
%token COMMA SEMICO COLON
%token IDENTIFIER VARTYPE
%token INCLUDE INCLUDEFILE
%token IF ELSE ELSEIF
%token WHILE FOR
%token SWITCH CASE DEFAULT
%token CONTINUE RETURN BREAK
%token EOL

%%
source
: source source_statement { printf("source -> source source_statement\n");}
| source_statement { printf("source -> source_statement\n");}
;

source_statement
: func_def { printf("source_statement -> func_def\n");}
| INCLUDE INCLUDEFILE { printf("source_statement -> INCLUDE INCLUDEFILE\n");}
| var_def_statement { printf("source_statement -> var_def\n");}
;

block
 : OC statementseq CC { printf("[BLOCK]block -> { seq }\n"); }
 | statementseq { printf("[BLOCK]block -> statementseq\n"); }
 | SEMICO { printf("block -> SEMICO\n");}
;

statementseq
 : statementseq statement { printf("[STATEMENT SEQ]statementseq -> statementseq statement\n"); }
 | statement { printf("[STATEMENT SEQ]statementseq -> statement\n"); }
 ;

/* All statements should be code block or ended with SEMICO */
statement
: var_def_statement { printf("[STATEMENT]statement -> var_def_statement\n");}
| control { printf("[STATEMENT]statement -> control\n");}
| assignment_statement { printf("[STATEMENT]statement -> assignment\n"); }
;

func_def
: VARTYPE IDENTIFIER OP CP block { printf("func_def -> VARTYPE IDENTIFIER () <block>"); }
;

control
: if_block { printf("control->if_block\n"); }
| for_block {printf("control -> for_block\n"); }
| while_block { printf("control -> while_block\n"); }
| switch_block { printf("control -> switch_block\n"); }
| CONTINUE SEMICO {printf("continue\n");}
| BREAK SEMICO {printf("break\n");}
| RETURN SEMICO {printf("return ;\n");}
| RETURN expression SEMICO {printf("return exp;\n");}
;

if_block
: if_ifheader ELSE block { printf("if_block -> if_ifheader ELSE block\n"); }
| if_ifheader { printf("if_block -> if_ifheader\n"); }
;

if_ifheader
: IF OP expression CP block  {printf("if_ifheader -> if () block\n");}
;

while_block
: WHILE OP expression CP block {printf("while_block -> while(expression) block\n");}
| WHILE OP CP block {printf("while_block -> while() block\n");}
;


for_init: /*NONE*/
| VARTYPE assignment {printf("for_init -> VARTYPE IDENTIFIER = expression\n");}
| assignment {printf("for_init -> assignment\n");}
;

for_condition: /*NONE*/
| expression {printf("for_condition -> expression\n");}
;

for_after: /*NONE*/
| assignment {printf("for_after -> statement\n");}
;

for_block
: FOR OP for_init SEMICO for_condition SEMICO for_after CP block {printf("for_block -> for(e1;e2;e3) block\n");}
;

switch_block
: SWITCH OP expression CP OC caseseq CC {printf("switch_block -> switch(exp){case}\n");}
;

caseseq
: caseseq casestat {printf("caseseq -> caseseq casestat\n");}
| casestat {printf("caseseq -> casestat\n");}
;

casestat
: CASE expression COLON statementseq {printf("casestat -> CASE expression COLON statementseq\n");}
| DEFAULT COLON statementseq {printf("casestat -> DEFAULT COLON statementseq\n");}
;

/*Variable definition statement, with ; at the end of statement*/
var_def_statement
 : VARTYPE var_def_idseq SEMICO { printf("var_def -> VARTYPE var_def_idseq ;\n"); }
;

/*Variable definition sequence*/
var_def_idseq
: var_def_idseq COMMA var_def { printf("var_def_idseq -> var_def_id_idseq var_def\n"); }
| var_def { printf("var_def_idseq -> var_def\n"); }
;

/*Variable definition unit, like a=<exp> or a*/
var_def
 : assignment { printf("var_def -> assignment\n"); }
 | IDENTIFIER { printf("var_def -> IDENTIFIER\n");}
;
/*assignment statement*/
assignment_statement
: assignment SEMICO { printf("assignment_statement -> assignment ;\n"); }
;

/*assignment unit*/
assignment
: IDENTIFIER ASG expression { printf("assignment -> IDENTIFIER ASG expression\n"); }
;

expression
 : expression ADD term { printf("expression -> expression ADD term\n"); }
 | expression SUB term { printf("expression -> expression SUB term\n"); }
 | term { printf("expression -> term\n"); }
;

term
 : term MUL factor { printf("term -> term MUL factor\n"); }
 | term DIV factor { printf("term -> term DIV factor\n"); }
 | term MOD factor { printf("term -> term MOD factor\n"); }
 | term GT factor { printf("term -> term GT factor\n"); }
 | term LT factor { printf("term -> term LT factor\n"); }
 | term GE factor { printf("term -> term GE factor\n"); }
 | term LE factor { printf("term -> term LE factor\n"); }
 | term NE factor { printf("term -> term NE factor\n"); }
 | term EQ factor { printf("term -> term EQ factor\n"); }
 | factor { printf("term -> factor\n"); }
;

factor
 : OP expression CP { printf("factor -> OP expression CP\n"); }
 | NUMBER { printf("factor -> NUMBER\n"); }
 | INT { printf("factor -> INT\n"); }
 | DOUBLE { printf("factor -> DOUBLE\n"); }
 | BOOL { printf("factor -> BOOL\n"); }
 | IDENTIFIER { printf("factor -> IDENTIFIER\n");}
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
