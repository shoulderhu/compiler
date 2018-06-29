package compiler;

public enum Err {

    EXTERNAL_DECLARATION("�J���O�@��ŧi�]���O�禡�ŧi"),
    DECLARATION_SPECIFIER("�ŧi�����Ÿ����~"),
    STORAGE_CLASS_SPECIFIER("�ŧi���x�s���O�����Ÿ����~"),
    TYPE_SPECIFIER("�ŧi�����������Ÿ����~"),
    STRUCT_OR_UNION_SPECIFIER("struct��union�᭱�J���Oidentifer�]���O{"),
    STRUCT_OR_UNION("�J���Ostruct�]���Ounion"),
    SPECIFIER_QUALIFIER("�J���O���������Ÿ��A�]���O�������w�Ÿ�"),
    STRUCT_DECLARATOR_LIST("�J���O���c�ŧi�A�]���O�䶰�X"),
    STRUCT_DECLARATOR("�J���O�ŧi�A�]���O�_���}�Y"),
    TYPE_QUALIFIER("�ŧi���������w�Ÿ����~"),
    LOGICAL_OR_EXPRESSION("�Dlogical or��logical and��F���}�Y"),
    LOGICAL_AND_EXPRESSION("�Dlogical and��inclusive or��F���}�Y"),
    INCLUSIVE_OR_EXPRESSION("�Dexclusive or��inclusive or��F���}�Y"),
    EXCLUSIVE_OR_EXPRESSION("�Dand��exclusive or��F���}�Y"),
    AND_EXPRESSION("�Dand��equality��F���}�Y"),
    EQUALITY_ERROR("�D==�B�D!=���~"),
    EQUALITY_EXPRESSION("�Drelational��equality��F���}�Y"),
    RELATIONAL_ERROR("���Y�Ÿ����~"),
    RELATIONAL_EXPRESSION("�Dshift��relational��F���}�Y"),
    SHIFT_ERROR("�ಾ�Ÿ����~"),
    SHIFT_EXPRESSION("�Dadditive��shift��F���}�Y"),
    ADDITIVE_ERROR("�D+�B�D-���~"),
    ADDITIVE_EXPRESSION("�Dmultiplicative��additive��F���}�Y"),
    MULTIPLICATIVE_ERROR("�D*�B�D/�B�D%���~"),
    MULTIPLICATIVE_EXPRESSION("�Dcast��multiplicative��F���}�Y"),
    CAST_EXPRESSION("�Dunary��F����(�}�Y"),
    SIZEOF_ERROR("�Dunary��F���������W��"),
    UNARY_EXPRESSION("unary��F���}�Y���~");




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
