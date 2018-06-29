package compiler;

public class Scanner {

    private int cp, linelen, linenum;
    private char nextChar;
    private boolean isEOF;
    private String file[], line;

    public Scanner(String file) {

        this.file = file.split("\n");
        cp = 0;
        linelen = 0;
        linenum = 0;
        isEOF = false;

        advance();
    }

    private void advance() {

        if(++cp < linelen) {

            nextChar = line.charAt(cp);
        }
        else if(linenum == file.length) {

            isEOF = true;
        }
        else {

            line = file[linenum++] + '\n';
            linelen = line.length();
            nextChar = line.charAt(0);
            cp = 0;
        }
    }

    public Symbol nextToken() {

        if(isEOF) { new Symbol(Sym.EOF, linenum, cp, ""); }

        while(true) {

            if(Character.isLetter(nextChar)) {

                return nextIdentifer();
            }
            else if(Character.isDigit(nextChar)) {

                return nextNumber();
            }

            switch (nextChar) {

                case '#':
                    return nextNumSign();
                case '\'':
                    return nextCharacter();
                case '"':
                    return nextString();
                case ';':
                    return nextSemi();
                case '+':
                    return nextPlus();
                case '-':
                    return nextMinus();
                case '(':
                    return nextLparen();
                case ')':
                    return nextRparen();
                case '[':
                    return nextLsbracket();
                case ']':
                    return nextRsbracket();
                case '.':
                    return nextPeriod();
                case '!':
                    return nextNot();
                case '~':
                    return nextCompl();
                case '*':
                    return nextMUL();
                case '&':
                    return nextAND();
                case '/':
                    return nextDiv();
                case '%':
                    return nextMod();
                case '<':
                    return nextLess();
                case '>':
                    return nextGreater();
                case '=':
                    return nextEQ();
                case '^':
                    return nextCaret();
                case '|':
                    return nextOr();
                case '?':
                    return nextQUES();
                case ':':
                    return nextColon();
                case ',':
                    return nextComma();
                case '{':
                    return nextLcbracket();
                case '}':
                    return nextRcbracket();
                case ' ':
                case '\t':
                case '\r':
                case '\n':
                    advance();
                    break;
                default:
                    advance();
                    return new Symbol(Sym.ERROR, linenum, cp, String.valueOf(nextChar));
            }
        }
    }

    private Symbol nextNumSign() {

        advance();
        return new Symbol(Sym.NUMSIGN, linenum, cp, "#");
    }

    private Symbol nextIdentifer() {

        StringBuilder str = new StringBuilder();

        do {

            str.append(nextChar);
            advance();
        } while(Character.isLetterOrDigit(nextChar));

        try {

            return new Symbol(Sym.valueOf(str.toString().toUpperCase()),
                    linenum, cp, str.toString());
        } catch (IllegalArgumentException e) {

            return new Symbol(Sym.IDENTIFIER, linenum, cp, str.toString());
        }
    }

    private Symbol nextNumber() {

        StringBuilder str = new StringBuilder();

        do {

            str.append(nextChar);
            advance();
        } while(Character.isDigit(nextChar));

        return new Symbol(Sym.NUMBER, linenum, cp, str.toString());
    }

    private Symbol nextCharacter() {

        advance();
        char c = nextChar;
        advance();
        advance();
        return new Symbol(Sym.STRING, linenum, cp, String.valueOf(c));
    }

    private Symbol nextString() {

        advance();
        StringBuilder str = new StringBuilder();

        while (nextChar != '"') {

            str.append(nextChar);
            advance();
        }

        advance();
        return new Symbol(Sym.STRING, linenum, cp, str.toString());
    }

    private Symbol nextSemi() { // ;

        advance();
        return new Symbol(Sym.SEMI, linenum, cp, ";");
    }

    private Symbol nextPlus() { // + or ++ or +=

        advance();

        switch (nextChar) {

            case '+':
                advance();
                return new Symbol(Sym.DPLUS, linenum, cp, "++");
            case '=':
                advance();
                return new Symbol(Sym.PLUSEQ, linenum, cp, "+=");
        }

        return new Symbol(Sym.PLUS, linenum, cp, "+");
    }

    private Symbol nextMinus() { // - or -- or -= or ->

        advance();

        switch (nextChar) {

            case '-':
                advance();
                return new Symbol(Sym.DMINUS, linenum, cp, "--");
            case '=':
                advance();
                return new Symbol(Sym.MINUSEQ, linenum, cp, "-=");
            case '>':
                advance();
                return new Symbol(Sym.GREATER, linenum, cp, "->");
        }

        return new Symbol(Sym.MINUS, linenum, cp, "-");
    }

    private Symbol nextLparen() { // (

        advance();
        return new Symbol(Sym.LPAREN, linenum, cp, "(");
    }

    private Symbol nextRparen() { // )

        advance();
        return new Symbol(Sym.RPAREN, linenum, cp, ")");
    }

    private Symbol nextLsbracket() { // [

        advance();
        return new Symbol(Sym.LSBRACKET, linenum, cp, "[");
    }

    private Symbol nextRsbracket() { // ]

        advance();
        return new Symbol(Sym.RSBEACKET, linenum, cp, "]");
    }

    private Symbol nextPeriod() { // .

        advance();
        return new Symbol(Sym.PERIOD, linenum, cp, ".");
    }

    private Symbol nextNot() { // !

        advance();

        if(nextChar == '=') {

            advance();
            return new Symbol(Sym.NEQ, linenum, cp, "!=");
        }

        return new Symbol(Sym.NOT, linenum, cp, "!");
    }

    private Symbol nextCompl() { // ~

        advance();
        return new Symbol(Sym.COMPL, linenum, cp, "~");
    }

    private Symbol nextMUL() { // * or *=

        advance();

        if(nextChar == '=') {

            advance();
            return new Symbol(Sym.MULEQ, linenum, cp, "*=");
        }

        return new Symbol(Sym.MUL, linenum, cp, "*");
    }

    private Symbol nextAND() { // & or && or &=

        advance();

        switch (nextChar) {

            case '&':
                advance();
                return new Symbol(Sym.AND, linenum, cp, "&&");
            case '=':
                advance();
                return new Symbol(Sym.ANDEQ, linenum, cp, "&=");
        }

        return new Symbol(Sym.BAND, linenum, cp, "&");
    }

    private Symbol nextDiv() { // / or /=

        advance();

        if(nextChar == '=') {

            advance();
            return new Symbol(Sym.DIVEQ, linenum, cp, "/=");
        }

        return new Symbol(Sym.DIV, linenum, cp, "/");
    }

    private Symbol nextMod() { // % or %=

        advance();

        if(nextChar == '=') {

            advance();
            return new Symbol(Sym.MODEQ, linenum, cp, "%=");
        }

        return new Symbol(Sym.MOD, linenum, cp, "%");
    }

    private Symbol nextLess() { // < or << or <<= or <=

        advance();

        switch (nextChar) {

            case '<':
                advance();

                if(nextChar == '=') {

                    advance();
                    return new Symbol(Sym.SHLEQ, linenum, cp, "<<=");
                }

                return new Symbol(Sym.SHL, linenum, cp, "<<");
            case '=':
                advance();
                return new Symbol(Sym.LEQ, linenum, cp, "<=");
        }

        return new Symbol(Sym.LESS, linenum, cp, "<");
    }

    private Symbol nextGreater() { // > or >> or >>= or >=

        advance();

        switch (nextChar) {

            case '>':
                advance();

                if(nextChar == '=') {

                    advance();
                    return new Symbol(Sym.SHREQ, linenum, cp, ">>=");
                }

                return new Symbol(Sym.SHR, linenum, cp, ">>");
            case '=':
                advance();
                return new Symbol(Sym.GEQ, linenum, cp, ">=");

        }

        return new Symbol(Sym.GREATER, linenum, cp, ">");
    }

    private Symbol nextEQ() { // = or ==

        advance();

        if(nextChar == '=') {

            advance();
            return new Symbol(Sym.EQ, linenum, cp, "==");
        }

        return new Symbol(Sym.ASSIGN, linenum, cp, "=");
    }

    private Symbol nextCaret() { // ^ OR ^=

        advance();

        if (nextChar == '=') {

            advance();
            return new Symbol(Sym.CARETEQ, linenum, cp, "^=");
        }

        return new Symbol(Sym.CARET, linenum, cp, "^");
    }

    private Symbol nextOr() { // | or || or |=

        advance();

        switch (nextChar) {

            case '|':
                advance();
                return new Symbol(Sym.OR, linenum, cp, "||");
            case '=':
                advance();
                return new Symbol(Sym.OREQ, linenum, cp, "|=");
        }

        return new Symbol(Sym.BOR, linenum, cp, "|");
    }

    private Symbol nextQUES() { // ?

        advance();
        return new Symbol(Sym.QUES, linenum, cp, "?");
    }

    private Symbol nextColon() {

        advance();
        return new Symbol(Sym.COLON, linenum, cp, ":");
    }

    private Symbol nextComma() {

        advance();
        return new Symbol(Sym.COMMA, linenum, cp, ",");
    }

    private Symbol nextLcbracket() {

        advance();
        return new Symbol(Sym.LCBRACKET, linenum, cp, "{");
    }

    private Symbol nextRcbracket() {

        advance();
        return new Symbol(Sym.RCBRACKET, linenum, cp, "}");
    }
}
