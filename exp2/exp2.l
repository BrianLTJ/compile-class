%option noyywrap
%{
#include <stdio.h>
#include <string.h>
enum yytokentype {
  NUMBER = 258,
  INT = 259,
  DOUBLE = 260,
  BOOL = 261,
  CHAR = 262,
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
  NOT = 284,

  /*Reserved words*/
  REW = 301,
  DELIM = 302,
  INCLUDE=303,
  INCLUDEFILE=304,
  IDENTIFIER = 310,

  EOL = 399
};
int yylval;
int line = 1;
char yyidentifier[100];
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
"!" {return NOT;}
"true" { yylval = 1; return BOOL; }
"false" { yylval = 0; return BOOL; }
","|";"|":"|"{"|"}"|"("|")"|"["|"]" {return DELIM;}

"#include" { return INCLUDE; }
"<"[^\n]+">" {return INCLUDEFILE;}
"\""[^\n]+"\"" {return INCLUDEFILE;}
int|bool|char|double|float|const|while|for|if|then|true|false|break|continue|public|private|struct|define|include|switch|case|default|do|loop { return REW; }
\'.{1}\' {return CHAR;}
\'\\.{1}\' {return CHAR;}
[\_a-zA-Z]{1}[\_0-9a-zA-Z]* { /*yyidentifier=yytext;*/ return IDENTIFIER; }
[-|+]{0,1}[0-9]+\.[0-9]+ { return DOUBLE;}
[-|+]{0,1}[0-9]+ { yylval = atoi(yytext); return INT;}
"/*".*"*/" { /*Comment Do Nothing*/ }
"//".*[^\n] { /*Comment Do Nothing*/ }
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
      case NOT:
        printf("NOT");
        break;
      case INCLUDE:
        printf("INCLUDE");
        break;
      case INCLUDEFILE:
        printf("INCLUDEFILE");
        break;
      case DELIM:
        printf("DELIM %s", yytext);
        break;
      case INT:
        printf("NUM INT %d", yylval);
        break;
      case DOUBLE:
        printf("NUM DOUBLE %f", atof(yytext));
        break;
      case BOOL:
        printf("BOOL %d",yylval);
        break;
      case CHAR:
        printf("CHAR %s", yytext);
        break;
      case IDENTIFIER:
        printf("IDENTIFIER %s", yytext);
        break;
      case REW:
        printf("RESERVED WORD %s", yytext);
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
