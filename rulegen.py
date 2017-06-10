rules1 = [
    ['source',[
        ['includeseq','body'],
        ['body'],
    ]],
    ['body',[
        ['func_dec','body'],
        ['func_def','body'],
        ['var_def','body'],
        ['func_def']
    ]],
    ['includeseq',[
        ['include','includeseq'],
        ['include']
    ]],
    ['include',[
        ['INCLUDE','INCLUDEFILE']
    ]],
    ['func_header',[
        ['VARTYPE','IDENTIFIER','OP','idseq','CP'],
        ['VARTYPE','IDENTIFIER','OP','CP']
    ]],
    ['func_dec',[
        ['func_header','SEMICO']
    ]],
    ['func_def',[
        ['func_header','block']
    ]],
    ['var_def',[
        ['VARTYPE','idseq','SEMICO']
    ]],
    ['idseq',[
        ['idexp','idseq'],
        ['idexp']
    ]],
    ['idexp',[
        ['IDENTIFIER','ASG','expression'],
        ['IDENTIFIER']
    ]],
    ['block',[
        ['OC','statseq','CC'],
        ['statement']
    ]],
    ['statseq',[
        ['statement','statseq'],
        ['statement']
    ]],
    ['statement',[
        ['var_def']
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

rules = [
    ['source',[
        ['includeseq','body'],
        ['body'],
    ]],
    ['includeseq',[
        ['include','includeseq'],
        ['include']
    ]],
    ['include',[
        ['INCLUDE','INCLUDEFILE']
    ]],
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