
%{
    #include <stdio.h>
    int line=1;
    int ch=1;
%}

%token NUMBER INT DOUBLE BOOL CHAR
%token ADD SUB MUL DIV  MOD
%token ASG OP CP OSQ CSQ OC CC
%token COMMA SEMICO COLON
%token IDENTIFIER VARTYPE
%token INCLUDE INCLUDEFILE
%token IF ELSE ELSEIF
%token EOL

%%
block
 : OC statementseq CC { printf("{ seq }\n");}
 | statementseq { printf("block -> statementseq\n");}
;

statementseq
 : statementseq statement { printf("statementseq -> statementseq statement\n");}
 | statement { printf("statementseq -> statement\n"); }
 ;

statement
: var_def { printf("statement->var_def\n");}
| if_block { printf("statement->if_block\n");}
;

if_block
: if_ifheader ELSE block { printf("if_block -> if_ifheader ELSE block\n"); }
| if_ifheader { printf("if_block -> if_ifheader\n"); }
;

if_ifheader
: IF OP expression CP block  {printf("if_ifheader -> if () block\n");}
;

var_def
 : VARTYPE var_def_idseq SEMICO { printf("VARTYPE -> var_def_idseq ;\n"); }
;

var_def_idseq
 : assignment { printf("var_def_idseq -> assignment\n"); }
;

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
 | factor { printf("term -> factor\n"); }
;

factor
 : OP expression CP { printf("factor -> OP expression CP\n"); }
 | NUMBER { printf("factor -> NUMBER\n"); }
 | INT { printf("factor -> INT\n"); }
 | DOUBLE { printf("factor -> DOUBLE\n"); }
 | BOOL { printf("factor -> BOOL\n"); }
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
