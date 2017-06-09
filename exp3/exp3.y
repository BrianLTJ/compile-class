
%{
    #include <stdio.h>
    int line=1;
    int ch=1;
%}

%token NUMBER
%token ADD SUB MUL DIV  MOD
%token ASG OP CP OSQ CSQ OC CC
%token IDENTIFIER VARTYPE
%token COMMA COLON SEMICO
%token INCLUDE INCLUDEFILE
%token EOL

%%
source:
includeseq body { printf("source -> includeseq body");}
| includeseq { printf("source -> includeseq");}
| body { printf("source -> body");}
;

includeseq: 
include includeseq { printf("includeseq -> include includeseq");}
|include { printf("includeseq -> include\n");}
;

include:
INCLUDE INCLUDEFILE
;

body:
statement
;


statement: 
IDENTIFIER ASG expression SEMICO statement { printf("L%d ", line); printf("statement -> ID = exp statement\n"); }
| IDENTIFIER ASG expression SEMICO { printf("L%d ", line); printf("statement -> ID = exp\n"); }
; 

expression: 
expression ADD term { printf("L%d ", line); printf("exp -> exp + term\n"); }
| term { printf("L%d ", line); printf("exp -> term\n");}
;

term: 
term MUL factor { printf("L%d ", line); printf("term -> term * factor\n"); }
| factor { printf("L%d ", line); printf("term -> factor\n"); }
;

factor:
OP expression CP { printf("L%d ", line); printf("factor -> ( exp )\n"); }
| NUMBER { printf("L%d ", line); printf("factor -> number\n");}
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
