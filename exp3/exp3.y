
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
 | includeseq body { printf("source -> includeseq body\n"); }
 | body { printf("source -> body\n"); }
;

includeseq:
 | includeseq include { printf("includeseq -> includeseq include\n"); }
 | include { printf("includeseq -> include '\n'\n"); }
;

include:
 | INCLUDE INCLUDEFILE { printf("include -> INCLUDE INCLUDEFILE\n"); }
;

body:
 | VARTYPE IDENTIFIER OP CP block { printf("body -> VARTYPE IDENTIFIER OP CP block\n"); }
;

block:
 | OC CC { printf("block -> OC CC\n"); }
 | OC statementseq CC { printf("block -> OC statementseq CC\n"); }
 | OC statement CC { printf("block -> OC statementseq CC\n"); }
 | statement { printf("block -> statementseq\n"); }
 | SEMICO { printf("block -> SEMICO\n"); }
;

statementseq:
 | statementseq statement  { printf("statementseq -> statement statementseq\n"); }
 | statement statement { printf("statementseq -> statement CC\n"); }
;

statement:
 | assignment { printf("statement -> assignment\n"); }
;

assignment:
 | IDENTIFIER ASG expression SEMICO { printf("assignment -> IDENTIFIER ASG expression SEMICO\n"); }
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
