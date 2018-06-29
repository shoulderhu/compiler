package compiler;

import java.util.Stack;

public class Parser {

    private int errCount;
    private Scanner scanner;
    private Symbol token;
    private Stack<Integer> stack;
    private Stack<Identifer> id;

    public Parser(Scanner scanner) {

        errCount = 0;
        //stack = new Stack<>();
        id = new Stack<>();
        this.scanner = scanner;
        token = scanner.nextToken();
    }

    public void parse() {

        translationUnit();
    }

    /* Syntax rule #1 <translation-unit> */
    private void translationUnit() {

        int count = errCount;

        while(count == errCount) {

            externalDeclaration();
        }

        restore();
    }

    /*Syntax rule #2 <external-declaration>*/
    private void externalDeclaration() {

        int count = errCount;

        functionDefinition();
        if(!restore(count)) { return; }

        declaration();
        if(count != errCount) { error(Err.EXTERNAL_DECLARATION); }
    }

    /*Syntax rule #3 <function-definition>*/
    private void functionDefinition() {

        int count = errCount;

        while(count == errCount) {

            declarationSpecifier();
        }

        restore();
        declarator();

        while(count == errCount) {

            declaration();
        }

        restore();
        compoundStatement();
    }

    /*Syntax rule #4 <declaration-specifier>*/
    private void declarationSpecifier() {

        //int count = errCount;

        //storageClassSpecifier();
        //if(!restore(count)) { return; }

        typeSpecifier();
        //if(!restore(count)) { return; }

        //typeQualifier();
        //if(count != errCount) { error(Err.DECLARATION_SPECIFIER); }
    }

    /*Syntax rule #5 <storage-class-specifier>*/
    private void storageClassSpecifier() {
        /*
        switch (token.getSym()) {

            case AUTO:
                match(Sym.AUTO);
                break;
            case REGISTER:
                match(Sym.REGISTER);
                break;
            case STATIC:
                match(Sym.STATIC);
                break;
            case EXTERN:
                match(Sym.EXTERN);
                break;
            case TYPEDEF:
                match(Sym.TYPEDEF);
                break;
            default:
                error(Err.STORAGE_CLASS_SPECIFIER);
        }*/
    }

    /*Syntax rule #6 <type-specifier>*/
    private void typeSpecifier() {

        //int count = errCount;

        //structOrUnionSpecifier();
        //if(!restore(count)) { return; }

        //enumSpecifier();
        //if(!restore(count)) { return; }

        //typedefName();
        //if(!restore(count)) { return; }

        switch(token.getSym()) {

            case VOID:
                match(Sym.VOID);
                break;
            case CHAR:
                match(Sym.CHAR);
                break;
            case SHORT:
                match(Sym.SHORT);
                break;
            case INT:
                match(Sym.INT);
                break;
            case LONG:
                match(Sym.LONG);
                break;
            case FLOAT:
                match(Sym.FLOAT);
                break;
            case DOUBLE:
                match(Sym.DOUBLE);
                break;
            case SIGNED:
                match(Sym.SIGNED);
                break;
            case UNSIGNED:
                match(Sym.UNSIGNED);
                break;
            default:
                error(Err.TYPE_SPECIFIER);
        }
    }

    /*Syntax rule #7 <struct-or-uniion-specifier>*/
    private void structOrUnionSpecifier() {
        /*
        int count = errCount;
        boolean in = false;

        structOrUnion();

        switch (token.getSym()) {

            case IDENTIFIER:
                match(Sym.IDENTIFIER);

                if(token.getSym() == Sym.LPAREN) {

                    match(Sym.LPAREN);
                    structDeclaration();
                    while(count == errCount) {

                        structDeclaration();
                        in = true;
                    }
                    if(in) { restore(); }
                    match(Sym.RPAREN);
                }
                break;
            case LPAREN:
                match(Sym.LPAREN);
                structDeclaration();
                while(count == errCount) {

                    structDeclaration();
                    in = true;
                }
                if(in) { restore(); }
                break;
            default:
                error(Err.STRUCT_OR_UNION_SPECIFIER);
        }*/
    }

    /*Syntax rule #8 <struct-or-union>*/
    private void structOrUnion() {
        /*
        switch (token.getSym()) {

            case STRUCT:
                match(Sym.STRUCT);
                break;
            case UNION:
                match(Sym.UNION);
                break;
            default:
                error(Err.STRUCT_OR_UNION);
        }*/
    }

    /*Syntax rule #9 <struct-declaration>*/
    private void structDeclaration() {
        /*
        int count = errCount;

        while(count == errCount) {

            specifierQualifier();
        }

        restore();
        structDeclaratorList();*/
    }

    /*Syntax rule #10 <specifier-qualifier>*/
    private void specifierQualifier() {

        int count = errCount;

        typeSpecifier();
        //if(!restore(count)) { return; }

        //typeQualifier();
        if(count != errCount) { error(Err.SPECIFIER_QUALIFIER); }
    }

    /*Syntax rule #11 <struct-declarator-list>*/
    private void structDeclaratorList() {
        /*
        int count = errCount;

        structDeclarator();
        if(!restore(count)) { return; }

        structDeclaratorList();

        if(count == errCount) {

            match(Sym.COMMA);
            structDeclarator();
        }
        else { error(Err.STRUCT_DECLARATOR_LIST); }*/
    }

    /*Syntax rule #12 <struct-declarator>*/
    private void structDeclarator() {
        /*
        if(token.getSym() == Sym.COLON) {

            match(Sym.COLON);
            constantExpression();
            return;
        }

        int count = errCount;
        declarator();

        if(count == errCount) {

            if(token.getSym() == Sym.COLON) {

                match(Sym.COLON);
                constantExpression();
            }
        }
        else { error(Err.STRUCT_DECLARATOR); }*/
    }

    /*Syntax rule #13 <declarator>*/
    private void declarator() {

        //int count = errCount;
        //pointer();
        //restore(count);
        directDeclarator();
    }

    /*Syntax rule #14 <pointer>*/
    private void pointer() {
        /*
        int count = errCount;
        match(Sym.MUL);

        while(count == errCount) {

            typeQualifier();
        }

        restore();
        pointer();
        restore(count);*/
    }

    /*Syntax rule #15 <type-qualifier>*/
    private void typeQualifier() {
        /*
        switch (token.getSym()) {

            case CONST:
                match(Sym.CONST);
                break;
            case VOLATILE:
                match(Sym.VOLATILE);
                break;
            default:
                error(Err.TYPE_QUALIFIER);
        }*/
    }

    /*Syntax rule #16 <direct-declarator>*/
    private void directDeclarator() {

        switch (token.getSym()) {

            case IDENTIFIER:
                match(Sym.IDENTIFIER);
                return;
            case LPAREN:
                match(Sym.LPAREN);
                declarator();
                match(Sym.RPAREN);
                return;
        }

        /* ¥ª»¼°j
        int count = errCount;

        directDecator();

        if(count == errCount) {

            switch (token.getSym()) {

                case LSBRACKET:
                    match(Sym.LSBRACKET);
                    constantExpression();
                    restore(count);
                    match(Sym.RSBEACKET);
                    break;
                case LPAREN:
                    match(Sym.LPAREN);
                    parameterTypeList();
                    if(!restore(count)) {

                        match(Sym.RPAREN);
                        return;
                    }
                    while(count == errCount) {

                        match(Sym.IDENTIFIER);
                    }
                    restore();
                    match(Sym.RPAREN);
                    break;
                default:
                    error(16);
            }
        }
        else { error(16); }
        */
    }

    /*Syntax rule #17 <constant-expression>*/
    private void constantExpression() {

        conditionalExpression();
    }

    /*Syntax rule #18 <conditional-expression>*/
    private void conditionalExpression() {

        logicalOrExpression();

        if (token.getSym() == Sym.QUES) {

            match(Sym.QUES);
            expression();
            match(Sym.COLON);
            conditionalExpression();
        }
    }

    /*Syntax rule #19 <logical-or-expression>*/
    private void logicalOrExpression() {

        int count = errCount;

        logicalAndExpression();
        if(!restore(count)) { return; }

        logicalOrExpression();

        if(count == errCount) {

            match(Sym.OR);
            logicalAndExpression();
        }
        else { error(Err.LOGICAL_OR_EXPRESSION); }
    }

    /*Syntax rule #20 <logical-and-expression>*/
    private void logicalAndExpression() {

        int count = errCount;
        inclusiveOrExpression();
        if(!restore(count)) { return; }

        logicalAndExpression();

        if(count == errCount) {

            match(Sym.AND);
            inclusiveOrExpression();
        }
        else { error(Err.LOGICAL_AND_EXPRESSION); }
    }

    /*Syntax rule #21 <inclusive-or-expression>*/
    private void inclusiveOrExpression() {

        int count = errCount;
        exclusiveOrExpression();
        if(!restore(count)) { return; }

        inclusiveOrExpression();

        if(count == errCount) {

            match(Sym.BOR);
            exclusiveOrExpression();
        }
        else { error(Err.INCLUSIVE_OR_EXPRESSION); }
    }

    /*Syntax rule #22 <exclusive-or-expression>*/
    private void exclusiveOrExpression() {

        int count = errCount;
        andExpression();
        if(!restore(count)) { return; }

        exclusiveOrExpression();

        if(count == errCount) {

            match(Sym.CARET);
            andExpression();
        }
        else { error(Err.EXCLUSIVE_OR_EXPRESSION); }
    }

    /*Syntax rule #23 <and-expression>*/
    private void andExpression() {

        int count = errCount;

        equalityExpression();
        if(!restore(count)) { return; }

        andExpression();

        if(count == errCount) {

            match(Sym.BAND);
            equalityExpression();
        }
        else { error(Err.AND_EXPRESSION); }
    }

    /*Syntax rule #24 <equality-expression>*/
    private void equalityExpression() {

        int count = errCount;

        relationalExpression();
        if(!restore(count)) { return; }

        equalityExpression();

        if(count == errCount) {

            switch (token.getSym()) {

                case EQ:
                    match(Sym.EQ);
                    relationalExpression();
                    break;
                case NEQ:
                    match(Sym.NEQ);
                    relationalExpression();
                    break;
                default:
                    error(Err.EQUALITY_ERROR);
            }
        }
        else { error(Err.EQUALITY_EXPRESSION); }
    }

    /*Syntax rule #25 <relational-expression>*/
    private void relationalExpression() {

        int count = errCount;

        shiftExpression();
        if(!restore(count)) { return; }

        relationalExpression();

        if(count == errCount) {

            switch (token.getSym()) {

                case LESS:
                    match(Sym.LESS);
                    shiftExpression();
                    break;
                case GREATER:
                    match(Sym.GREATER);
                    shiftExpression();
                    break;
                case LEQ:
                    match(Sym.LEQ);
                    shiftExpression();
                    break;
                case GEQ:
                    match(Sym.GEQ);
                    shiftExpression();
                    break;
                default:
                    error(Err.RELATIONAL_ERROR);
            }
        }
        else { error(Err.RELATIONAL_EXPRESSION); }
    }

    /*Syntax rule #26 <shift-expression>*/
    private void shiftExpression() {

        int count = errCount;

        additiveExpression();
        if(!restore(count)) { return; }

        shiftExpression();

        if(count == errCount) {

            switch (token.getSym()) {

                case SHL:
                    match(Sym.SHL);
                    additiveExpression();
                    break;
                case SHR:
                    match(Sym.SHR);
                    additiveExpression();
                    break;
                default:
                    error(Err.SHIFT_ERROR);
            }
        }
        else { error(Err.SHIFT_EXPRESSION); }
    }

    /*Syntax rule #27 <additive-expression>*/
    private void additiveExpression() {

        int count = errCount;

        multiplicativeExpression();
        if(!restore(count)) { return; }

        additiveExpression();

        if(count == errCount) {

            switch (token.getSym()) {

                case PLUS:
                    match(Sym.PLUS);
                    multiplicativeExpression();
                    break;
                case MINUS:
                    match(Sym.MINUS);
                    multiplicativeExpression();
                    break;
                default:
                    error(Err.ADDITIVE_ERROR);
            }
        }
        else { error(Err.ADDITIVE_EXPRESSION); }
    }

    /*Syntax rule #28 <multiplicative-expression>*/
    private void multiplicativeExpression() {

        int count = errCount;

        castExpression();
        if(!restore(count)) { return; }

        multiplicativeExpression();

        if(count == errCount) {

            switch(token.getSym()) {

                case MUL:
                    match(Sym.MUL);
                    castExpression();
                    break;
                case DIV:
                    match(Sym.DIV);
                    castExpression();
                    break;
                case MOD:
                    match(Sym.MOD);
                    castExpression();
                    break;
                default:
                    error(Err.MULTIPLICATIVE_ERROR);
            }
        }
        else { error(Err.MULTIPLICATIVE_EXPRESSION); }
    }

    /*Syntax rule #29 <cast-expression>*/
    private void castExpression() {

        int count = errCount;

        unaryExpression();
        if(!restore(count)) { return; }

        if(token.getSym() == Sym.LPAREN) {

            match(Sym.LPAREN);
            typeName();
            match(Sym.RPAREN);
            castExpression();
        }
        else { error(Err.CAST_EXPRESSION); }
    }

    /*Syntax rule #30 <unary-expression>*/
    private void unaryExpression() {

        int count = errCount;

        postfixExpression();
        if(!restore(count)) { return; }

        /*unaryOperator();
        if(!restore(count)) {

            castExpression();
            return;
        }*/
        /*
        switch(token.getSym()) {

            case DPLUS:
                //match(Sym.DPLUS);
                //unaryExpression();
                //break;
            case DMINUS:
                match(Sym.DMINUS);
                unaryExpression();
                break;
            case SIZEOF:
                match(Sym.SIZEOF);
                unaryExpression();
                if(!restore(count)) { return; }
                typeName();
                if(count != errCount) { error(Err.SIZEOF_ERROR); }
                break;
            default:
                error(Err.UNARY_EXPRESSION);
        }*/
    }

    /*Syntax rule #31 <postfix-expression>*/
    private void postfixExpression() {

        //int count = errCount;

        primaryExpression();/*
        if(!restore(count)) { return; }

        postfixExpression();

        if(count == errCount) {

            switch (token.getSym()) {

                case LSBRACKET:
                    match(Sym.LSBRACKET);
                    expression();
                    match(Sym.RSBEACKET);
                    break;
                case LPAREN:
                    match(Sym.LPAREN);
                    while(count == errCount) {

                        assignmentExpression();
                    }
                    restore();
                    match(Sym.RPAREN);
                    break;
                case PERIOD:
                    match(Sym.PERIOD);
                    match(Sym.IDENTIFIER);
                    break;
                case PTR:
                    match(Sym.PTR);
                    match(Sym.IDENTIFIER);
                    break;
                case DPLUS:
                    match(Sym.DPLUS);
                    break;
                case DMINUS:
                    match(Sym.DMINUS);
                    break;
                default:
                    error(31);
            }
        }
        else { error(31); }*/
    }

    /*Syntax rule #32 <primary-expression>*/
    private void primaryExpression() {

        int count = errCount;

        constant();
        if(!restore(count)) { return; }

        switch(token.getSym()) {

            case IDENTIFIER:
                match(Sym.IDENTIFIER);
                break;
            case STRING:
                match(Sym.STRING);
                break;
            case LCBRACKET:
                match(Sym.LCBRACKET);
                expression();
                match(Sym.RCBRACKET);
                break;
            default:
                error(32);
        }
    }

    /*Syntax rule #33 <constant>*/
    private void constant() {

        switch (token.getSym()) {

            case NUMBER:
                match(Sym.NUMBER);
                break;
            case CHARACTER:
                match(Sym.CHARACTER);
                break;
            default:
                error(33);
        }
    }

    /*Syntax rule #34 <expression>*/
    private void expression() {

        int count = errCount;

        assignmentExpression();
        if(!restore(count)) { return; }

        expression();

        if(count == errCount) {

            match(Sym.COMMA);
            assignmentExpression();
        }
        else { error(34); }
    }

    /*Syntax rule #35 <assignment-expression>*/
    private void assignmentExpression() {

        int count = errCount;

        conditionalExpression();
        if(!restore(count)) { return; }

        unaryExpression();

        if(count == errCount) {

            assignmentOperator();
            assignmentExpression();
        }
        else { error(35); }
    }

    /*Syntax rule #36 <assignment-operator>*/
    private void assignmentOperator() {

        switch (token.getSym()) {

            case ASSIGN: // =
                match(Sym.ASSIGN);
                break;
            case MULEQ: // *=
                match(Sym.MULEQ);
                break;
            case DIVEQ: // /=
                match(Sym.DIVEQ);
                break;
            case MODEQ: // %=
                match(Sym.MODEQ);
                break;
            case PLUSEQ: // +=
                match(Sym.PLUSEQ);
                break;
            case MINUSEQ: // -=
                match(Sym.MINUSEQ);
                break;
            case SHLEQ: // <<=
                match(Sym.SHLEQ);
                break;
            case SHREQ: // >>=
                match(Sym.SHREQ);
                break;
            case ANDEQ: // &=
                match(Sym.ANDEQ);
                break;
            case CARETEQ: // ^=
                match(Sym.CARETEQ);
                break;
            case OREQ:  // |=
                match(Sym.OREQ);
                break;
            default:
                error(36);
        }
    }

    /*Syntax rule #37 <unary-operator>*/
    private void unaryOperator() {
        /*
        switch (token.getSym()) {
            case BAND:  // &
                match(Sym.BAND);
                break;
            case MUL:   // *
                match(Sym.MUL);
                break;
            case PLUS:  // +
                match(Sym.PLUS);
                break;
            case MINUS: // -
                match(Sym.MINUS);
                break;
            case COMPL: // ~
                match(Sym.COMPL);
                break;
            case NOT:   // !
                match(Sym.NOT);
                break;
            default:
                error(37);
        }*/
    }

    /*Syntax rule #38 <type-name>*/
    private void typeName() {

        int count = errCount;
        boolean in = false;

        specifierQualifier();

        while(count == errCount) {

            specifierQualifier();
            in = true;
        }

        if(in) { restore(); }

        abstractDeclaractor();
        restore(count);
    }

    /*Syntax rule #39 <parameter-type-list>*/
    private void parameterTypeList() {

        parameterList();

        if(token.getSym() == Sym.COMMA) {

            match(Sym.COMMA);
            //parameterDeclaration();
        }
    }

    /*Syntax rule #40 <parameter-list>*/
    private void parameterList() {

        int count = errCount;

        parameterDeclaration();
        if(!restore(count)) { return; }

        parameterList();

        if(count == errCount) {

            match(Sym.COMMA);
            parameterDeclaration();
        }
        else { error(40); }
    }

    /*Syntax rule #41 <parameter-declaration>*/
    private void parameterDeclaration() {

        int count = errCount;
        boolean in = false;

        declarationSpecifier();

        while(count == errCount) {

            declarationSpecifier();
            in = true;
        }

        if(in) { restore(); }

        declarator();
        if(!restore(count)) { return; }

        abstractDeclaractor();
        restore(count);
    }

    /*Syntax rule #42 <abstract-declarator>*/
    private void abstractDeclaractor() {

        int count = errCount;

        directAbstractDeclaractor();
        if(!restore(count)) { return; }

        //pointer();

        if(count == errCount) {

            directAbstractDeclaractor();
            restore(count);
        }
        else { error(42); }
    }

    /*Syntax rule #43 <direct-abstract-declaractor>*/
    private void directAbstractDeclaractor() {

        if(token.getSym() == Sym.LPAREN) {

            match(Sym.LPAREN);
            abstractDeclaractor();
            match(Sym.RPAREN);
            return;
        }

        int count = errCount;

        directAbstractDeclaractor();
        restore(count);

        switch(token.getSym()) {

            case LSBRACKET:
                match(Sym.LSBRACKET);
                constantExpression();
                restore(count);
                match(Sym.RSBEACKET);
            case LPAREN:
                match(Sym.LPAREN);
                parameterTypeList();
                restore(count);
                match(Sym.RPAREN);
            default:
                error(43);
        }
    }

    /*Syntax rule #44 <enum-specifier>*/
    private void enumSpecifier() {
        /*
        match(Sym.ENUM);

        switch (token.getSym()) {

            case IDENTIFIER:
                match(Sym.IDENTIFIER);
                if(token.getSym() == Sym.LCBRACKET) {

                    match(Sym.LCBRACKET);
                    enumatorList();
                    match(Sym.RCBRACKET);
                }
                break;
            case LCBRACKET:
                match(Sym.LCBRACKET);
                enumatorList();
                match(Sym.RCBRACKET);
                break;
            default:
                error(44);
        }*/
    }

    /*Syntax rule #45 <enumerator-list>*/
    private void enumatorList() {
        /*
        int count = errCount;

        enumerator();
        if(!restore(count)) { return; }

        enumatorList();

        if(count == errCount) {

            match(Sym.COMMA);
            enumerator();
        }
        else { error(45); }*/
    }

    /*Syntax rule #46 <enumerator>*/
    private void enumerator() {
        /*
        match(Sym.IDENTIFIER);

        if(token.getSym() == Sym.ASSIGN) {

            match(Sym.ASSIGN);
            constantExpression();
        }*/
    }

    /*Syntax rule #47 <typedef-name>*/
    private void typedefName() {

        //match(Sym.IDENTIFIER);
    }

    /*Syntax rule #48 <declaration>*/
    private void declaration() {

        int count = errCount;
        boolean in = false;

        declarationSpecifier();

        while(count == errCount) {

            declarationSpecifier();
            in = true;
        }

        if(in) { restore(); }


        while(count == errCount) {

            initDeclarator();
        }

        restore();
        match(Sym.SEMI);
    }

    /*Syntax rule #49 <init-declarator>*/
    private void initDeclarator() {

        declarator();

        if(token.getSym() == Sym.ASSIGN) {

            match(Sym.ASSIGN);
            initializer();
        }
    }

    /*Syntax rule #50 <initializer>*/
    private void initializer() {

        //int count = errCount;

        assignmentExpression();
        //if(!restore(count)) { return; }
        /*
        if (token.getSym() == Sym.LCBRACKET) {

            match(Sym.LCBRACKET);
            initializerList();

            if(token.getSym() == Sym.COMMA) {

                match(Sym.COMMA);
            }

            match(Sym.RCBRACKET);
        }
        else { error(50); }*/
    }

    /*Syntax rule #51 <initializer-list>*/
    private void initializerList() {
        /*
        int count = errCount;

        initializer();
        if(!restore(count)) { return; }

        initializerList();

        if(count == errCount) {

            match(Sym.COMMA);
            initializer();
        }
        else { error(51); }*/
    }

    /*Syntax rule #52 <compound-statement>*/
    private void compoundStatement() {

        match(Sym.LCBRACKET);
        int count = errCount;

        while(count == errCount) {

            declaration();
        }

        restore();

        while(count == errCount) {

            statement();
        }

        restore();
        match(Sym.RCBRACKET);
    }

    /*Syntax rule #53 <statement>*/
    private void statement() {

        int count = errCount;

        labeledStatement();
        if(!restore(count)) { return; }

        expressionStatement();
        if(!restore(count)) { return; }

        compoundStatement();
        if(!restore(count)) { return; }

        selectionStatement();
        if(!restore(count)) { return; }

        iterationStatement();
        if(!restore(count)) { return; }

        jumpStatement();
        if(count != errCount) { error(53); }
    }

    /*Syntax rule #54 <labeled-statement>*/
    private void labeledStatement() {

        switch (token.getSym()) {

            //case IDENTIFIER:
                //labelStatement();
            case CASE:
                caseStatement();
                break;
            case DEFAULT:
                defaultStatement();
                break;
            default:
                error(54);
        }
    }

    /*Syntax rule #55 <expression-statement>*/
    private void expressionStatement() {

        int count = errCount;
        expression();
        restore(count);
        match(Sym.SEMI);
    }

    /*Syntax rule #56 <selection-statement>*/
    private void selectionStatement() {

        switch(token.getSym()) {

            case IF:
                ifElseStatement();
                break;
            case SWITCH:
                switchStatement();
                break;
            default:
                error(56);
        }
    }

    /*Syntax rule #57 <iteration-statement>*/
    private void iterationStatement() {

        switch (token.getSym()) {

            case WHILE:
                whileStatement();
                break;
            case DO:
                doStatement();
                break;
            case FOR:
                forStatement();
                break;
            default:
                error(57);
        }
    }

    /*Syntax rule #58 <jump-statement>*/
    private void jumpStatement() {

        switch (token.getSym()) {

            //case GOTO:
                //gotoStatement();
            case CONTINUE:
                continueStatement();
                break;
            case BREAK:
                breakStatement();
                break;
            case RETURN:
                returnStatement();
                break;
            default:
                error(58);
        }
    }

    private void error(int i) {

        //System.out.println("Error at line" + i  + "\n");
        ++errCount;
    }

    private void error() {

        ++errCount;
    }

    private void error(Err err) {

        ++errCount;
    }

    private void match(Sym sym) {

        if(token.getSym() == sym) {

            token = scanner.nextToken();
        }
        else { error(); }
    }

    private void restore() {

        --errCount;
        //stack.pop();
    }

    private boolean restore(int count) {

        if(count != errCount) {

            restore();
            return true;
        }

        return false;
    }

    private void ifElseStatement() {

        ifStatement();

        if(token.getSym() == Sym.ELSE) {

            elseStatement();
        }
    }

    private void ifStatement() {

        match(Sym.IF);
        match(Sym.LPAREN);
        expression();
        match(Sym.RPAREN);
        statement();
    }

    private void elseStatement() {

        match(Sym.ELSE);
        statement();
    }

    private void switchStatement() {

        match(Sym.SWITCH);
        match(Sym.LPAREN);
        expression();
        match(Sym.RPAREN);
        statement();
    }

    private void whileStatement() {

        match(Sym.WHILE);
        match(Sym.LPAREN);
        expression();
        match(Sym.RPAREN);
        statement();
    }

    private void doStatement() {

        match(Sym.DO);
        statement();
        match(Sym.WHILE);
        match(Sym.LPAREN);
        expression();
        match(Sym.RPAREN);
        match(Sym.SEMI);
    }

    private void forStatement() {

        int count = errCount;

        match(Sym.FOR);
        match(Sym.LPAREN);
        expression();
        restore(count);
        match(Sym.SEMI);
        expression();
        restore(count);
        match(Sym.SEMI);
        expression();
        restore(count);
        match(Sym.RPAREN);
        statement();
    }

    private void gotoStatement() {

        match(Sym.GOTO);
        match(Sym.IDENTIFIER);
        match(Sym.SEMI);
    }

    private void continueStatement() {

        match(Sym.CONTINUE);
        match(Sym.SEMI);
    }

    private void breakStatement() {

        match(Sym.BREAK);
        match(Sym.SEMI);
    }

    private void returnStatement() {

        int count = errCount;
        match(Sym.RETURN);
        expression();
        restore(count);
        match(Sym.SEMI);
    }

    private void labelStatement() {

        match(Sym.IDENTIFIER);
        match(Sym.COLON);
        statement();
    }

    private void caseStatement() {

        match(Sym.CASE);
        constantExpression();
        match(Sym.COLON);
        statement();
    }

    private void defaultStatement() {

        match(Sym.DEFAULT);
        match(Sym.COLON);
        statement();
    }
}

