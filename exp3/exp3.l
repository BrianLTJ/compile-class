/* EX3 */
%option noyywrap
%{
    #include "exp3.tab.c"
%}

%%
"+" { return ADD; }
"-" { return SUB; }
"*" { return MUL; }
"/" { return DIV; }
"%" { return MOD; }

"!" { return NOT;}
"||" {return OR;}
"&&" {return AND;}

">" { return GT;}
"<" { return LT;}
">=" { return GE;}
"<=" { return LE;}
"!=" { return NE;}
"==" { return EQ;}

"++" { return INC;}
"--" { return DEC;}

"=" { return ASG; }
"(" { return OP; }
")" { return CP; }
"[" { return OSQ; }
"]" { return CSQ; }
"{" { return OC; }
"}" { return CC; }
"," { return COMMA; }
":" { return COLON; }
";" { return SEMICO; }


"/*".+"*/" {/* comment */}
"//"[^\n]+ {/* comment */}

"int"|"bool"|"char"|"double"|"void" { return VARTYPE;}
"else if" {return ELSEIF;}
"if" {return IF;}
"else" {return ELSE;}

"switch" {return SWITCH;}
"case" {return CASE;}

"default" {return DEFAULT;}

"while" {start_line=line;return WHILE; start_line=line;}
"for" {start_line=line;return FOR;}

"continue" {return CONTINUE;}
"return" {return RETURN;}
"break" { return BREAK;}

"true" { return BOOL; }
"false" { return BOOL; }

"#include" { return INCLUDE; }
"<"[^\n]+">" {return INCLUDEFILE;}

[0-9]+ { return INT; }

\"[^\n\"]*\" {return STRING;}
[^\\]\'(\\\'|[^\'])[^\\]\' {return CHAR;}

[0-9]+\.[0-9]+ { return DOUBLE;}

[\_a-zA-Z]{1}[\_0-9a-zA-Z]* { return IDENTIFIER; }

\n { line++;}

[ \t] { /*blank*/ }
. { /*Do nothing*/ }
%%
