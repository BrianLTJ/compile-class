%option noyywrap
%{
#include <stdio.h>
enum yytokentype {
  NUMBER = 258,
  BOOL = 259,
  CHAR = 260,
  ADD = 271,
  SUB = 272,
  MUL = 273,
  DIV = 274,
  MOD = 275,
  OR = 276,
  ASG = 277,
  EQ = 278,
  GT = 279,
  GE = 280,
  LT = 281,
  LE = 282,
  NE = 283,
  EOL = 299
};
int yylval;
int line = 1;
%}

%%
"+" { return ADD; }
"-" { return SUB; }
"*" { return MUL; }
"/" { return DIV; }
"%" { return MOD; }
"||" { return OR; }
"=" { return ASG; }
"==" { return EQ; }
">" { return GT; }
">=" { return GE; }
"<" { return LT; }
"<=" { return LE; }
"!=" { return NE; }
"true" { yylval = 1; return BOOL; }
"false" { yylval = 0; return BOOL; }
[0-9]+ { yylval = atoi(yytext); return NUMBER;}
"/*" { /*Do Nothing*/ }
"*/" { /*Do Nothing*/ }
[ \t] { /*Do Nothing*/ }
\n { /*line++;*/ return EOL; }
. { /*Do Nothing*/ }

%%

main(int argc, char **argv){
  int tok;
  printf("START\n");
  if(argc > 1){
    if( !(yyin = fopen(argv[1], "r")) ){
      perror(argv[1]);
      printf("NO INPUT FILE\n");
      return 1;
    }
  }

  printf("START LEX\n");

  while( tok = yylex() ){
    printf("L%d (%d , ", line, tok);
    switch(tok){
      case ADD:
        printf("ADD");
        break;
      case SUB:
        printf("SUB");
        break;
      case MUL:
        printf("MUL");
        break;
      case DIV:
        printf("DIV");
        break;
      case MOD:
        printf("MOD");
        break;
      case OR:
        printf("OR");
        break;
      case ASG:
        printf("ASG");
        break;
      case EQ:
        printf("EQ");
        break;
      case GT:
        printf("GT");
        break;
      case GE:
        printf("GE");
        break;
      case LT:
        printf("LT");
        break;
      case LE:
        printf("LE");
        break;
      case NE:
        printf("NE");
        break;
      case NUMBER:
        printf("NUM %d", yylval);
        break;
      case EOL:
        printf("EOL");
        line ++;
        break;
      default:
        printf("UNKNOWN: %c", yytext);
        break;
    }
    printf(")\n");
  }

  printf("ANA ENDS AT L%d",line);
}
