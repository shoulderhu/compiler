package compiler;

public enum Err {

    EXTERNAL_DECLARATION("既不是一般宣告也不是函式宣告"),
    DECLARATION_SPECIFIER("宣告說明符號錯誤"),
    STORAGE_CLASS_SPECIFIER("宣告之儲存類別說明符號錯誤"),
    TYPE_SPECIFIER("宣告之類型說明符號錯誤"),
    STRUCT_OR_UNION_SPECIFIER("struct或union後面既不是identifer也不是{"),
    STRUCT_OR_UNION("既不是struct也不是union"),
    SPECIFIER_QUALIFIER("既不是類型說明符號，也不是類型限定符號"),
    STRUCT_DECLARATOR_LIST("既不是結構宣告，也不是其集合"),
    STRUCT_DECLARATOR("既不是宣告，也不是冒號開頭"),
    TYPE_QUALIFIER("宣告之類型限定符號錯誤"),
    LOGICAL_OR_EXPRESSION("非logical or或logical and表達式開頭"),
    LOGICAL_AND_EXPRESSION("非logical and或inclusive or表達式開頭"),
    INCLUSIVE_OR_EXPRESSION("非exclusive or或inclusive or表達式開頭"),
    EXCLUSIVE_OR_EXPRESSION("非and或exclusive or表達式開頭"),
    AND_EXPRESSION("非and或equality表達式開頭"),
    EQUALITY_ERROR("非==且非!=錯誤"),
    EQUALITY_EXPRESSION("非relational或equality表達式開頭"),
    RELATIONAL_ERROR("關係符號錯誤"),
    RELATIONAL_EXPRESSION("非shift或relational表達式開頭"),
    SHIFT_ERROR("轉移符號錯誤"),
    SHIFT_EXPRESSION("非additive或shift表達式開頭"),
    ADDITIVE_ERROR("非+且非-錯誤"),
    ADDITIVE_EXPRESSION("非multiplicative或additive表達式開頭"),
    MULTIPLICATIVE_ERROR("非*且非/且非%錯誤"),
    MULTIPLICATIVE_EXPRESSION("非cast或multiplicative表達式開頭"),
    CAST_EXPRESSION("非unary表達式或(開頭"),
    SIZEOF_ERROR("非unary表達式或類型名稱"),
    UNARY_EXPRESSION("unary表達式開頭錯誤");




    private String msg;

    Err(String msg) {

        this.msg = msg;
    }

    public static String errmsgs(Err err) {

        switch (err) {

        //case
        }

        return "asd";
    }
}
