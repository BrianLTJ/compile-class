
%{
    #include <stdio.h>
    int line=1;
    int ch=1;
%}

%token NUMBER INT DOUBLE BOOL CHAR
%token ADD SUB MUL DIV  MOD
%token ASG OP CP OSQ CSQ OC CC
%token IDENTIFIER VARTYPE
%token COMMA COLON SEMICO
%token INCLUDE INCLUDEFILE
%token EOL

%%
source:
 | source include { printf("source -> source include\n"); }
 | source var_def { printf("source -> source var_def\n"); }
;

include:
 | INCLUDE INCLUDEFILE { printf("include -> INCLUDE INCLUDEFILE\n"); }
;

var_def:
 | VARTYPE var_def_idseq SEMICO { printf("var_def -> VARTYPE var_def_idseq SEMICO\n"); }
;

var_def_idseq:
 | var_def_idseq IDENTIFIER { printf("var_def_idseq -> var_def_idseq IDENTIFIER\n"); }
 | var_def_idseq assignment { printf("var_def_idseq -> var_def_idseq assignment\n"); }
 | IDENTIFIER COMMA { printf("var_def_idseq -> IDENTIFIER COMMA\n"); }
 | assignment COMMA { printf("var_def_idseq -> assignment COMMA\n"); }
;

assignment:
 | IDENTIFIER ASG expression { printf("assignment -> IDENTIFIER ASG expression\n"); }
;

expression:
 | expression ADD term { printf("expression -> expression ADD term\n"); }
 | expression SUB term { printf("expression -> expression SUB term\n"); }
 | term { printf("expression -> term\n"); }
;

term:
 | term MUL factor { printf("term -> term MUL factor\n"); }
 | term DIV factor { printf("term -> term DIV factor\n"); }
 | term MOD factor { printf("term -> term MOD factor\n"); }
 | factor { printf("term -> factor\n"); }
;

factor:
 | OP expression CP { printf("factor -> OP expression CP\n"); }
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
