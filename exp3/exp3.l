/* EX3 */
%{
    #include <stdio.h>
    #include "exp3.tab.c"
%}

%%
"+" { return ADD; }
"-" { return SUB; }
"*" { return MUL; }
"/" { return DIV; }
"%" { return MOD; }
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
"//".+[^\n] {/* comment */ line++; printf("L%d \n",line);}

int|bool|char|double|void { return VARTYPE;}

"#include" { return INCLUDE; }
"<"[^\n]+">" {return INCLUDEFILE;}
"\""[^\n]+"\"" {return INCLUDEFILE;}
[0-9]+ { return INT; }

[^\\]\'(\\\'|[^\'])[^\\]\' {return CHAR;}
[0-9]+\.[0-9]+ { return DOUBLE;}

"true" { return BOOL; }
"false" { return BOOL; }

[\_a-zA-Z]{1}[\_0-9a-zA-Z]* { return IDENTIFIER; }
\n { line++;}

[ \t] { /*blank*/ }
. { /*Do nothing*/ }
%%
