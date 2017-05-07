%{
	int chars = 0;
	int words = 0;
	int lines = 1;
%}
%%
"int" {printf("Int variable definition at Line %d, Position: %d\n",lines,chars); chars++;}
" " {chars++;}
[a-zA-Z0-9]+ {chars++;}
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

