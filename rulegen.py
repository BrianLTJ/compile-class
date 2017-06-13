rules = [
    ['Source',[
        ['SourceStatementSeq']
    ]],
    ['SourceStatementSeq',[
        ['SourceStatementSeq','SourceStatement'],
        ['SourceStatement']
    ]],
    ['SourceStatement',[
        ['VarDec','SEMICO'],
        ['FuncDec'],
        ['FuncDef'],
        ['Include']
    ]],
    ['VarDec',[
        ['VARTYPE']
    ]],
    ['source',[
        ['source','include'],
        ['source','var_def'],
        ['include'],
        ['var_def']
    ]],

    ['Include',[
        ['INCLUDE','INCLUDEFILE']
    ]],

    ['var_def',[
        ['VARTYPE','var_def_idseq','SEMICO']
    ]],

    ['var_def_idseq',[
        ['var_def_idseq','IDENTIFIER'],
        ['var_def_idseq','assignment'],
        ['IDENTIFIER','COMMA'],
        ['assignment','COMMA'],
    ]],

    ['assignment',[
        ['IDENTIFIER','ASG','expression']
    ]],

    ['expression',[
        ['expression','ADD','term'],
        ['expression','SUB','term'],
        ['term']
    ]],

    ['term',[
        ['term','MUL','factor'],
        ['term','DIV','factor'],
        ['term','MOD','factor'],
        ['factor']
    ]],

    ['factor',[
        ['OP','expression','CP'],
        ['NUMBER'],
        ['INT'],
        ['DOUBLE'],
        ['BOOL']
    ]]
]

prt = ""
rule = ""
for i in rules:
    prt=""
    left = i[0]
    print(left+":")
    for j in i[1]:
        rule = ""
        prt=left + " ->"
        for k in j:
            prt=prt+" "+k
            rule=rule+" "+k
        print(" |"+rule+" { printf(\""+prt+"\\n\"); }")

    print(";\n")
