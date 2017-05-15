%{
	int chars = 0;
	int words = 0;
	int lines = 1;
%}
%%
"+"   {printf("PLUS ");}
"-"   {printf("MINUS ");}
"*"   {printf("MULTIPLY ");}
"/"   {printf("DIVIDE ");}
"="   {printf("EQUAL ");}

"int" {printf("<Int> ");}
"bool"  {printf("<Boolean> ");}
"char"  {printf("<Char> ");}

[0-9] {printf("IntVar %s ",yytext);}
"\'"[a-zA-Z0-9]{1}"\'" {printf("CharVar: %s ",yytext);}

" " {chars++;}
";\n" {printf("\n");}
";"  {printf("\n");}

[a-zA-Z0-9]+ {printf("[Id %s ] ",yytext);}

\n  {lines++; chars=0;}
. {chars++;}
%%


main (int argc, char **argv){
	yylex();
	printf("Analysis Ends.");
}
int yywrap()
{
return 1;
}

