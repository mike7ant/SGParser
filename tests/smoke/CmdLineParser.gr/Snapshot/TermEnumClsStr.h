//////////////////////////// TermEnum ////////////////////////////

enum class TermEnum
{
    /*0*/ TokenError,
    /*1*/ TokenEOF,
    /*2*/ option,
    /*3*/ parameter,
    /*4*/ integer,
    /*5*/ fileName,
    /*6*/ className,
    /*7*/ msgCode,
    /*8*/ colon,
    /*9*/ opConfigFile,
    /*10*/ opTableTypeLR,
    /*11*/ opTableTypeLALR,
    /*12*/ opTableTypeCLR,
    /*13*/ opParseData,
    /*14*/ opEnumFile,
    /*15*/ opEnumClasses,
    /*16*/ opEnumStrings,
    /*17*/ opTermEnum,
    /*18*/ opNonTermEnum,
    /*19*/ opProdEnum,
    /*20*/ opReduceFunc,
    /*21*/ opStaticDFA,
    /*22*/ opStaticParseTable,
    /*23*/ opCanonical,
    /*24*/ opConflictReport,
    /*25*/ opNoWarnings,
    /*26*/ opNotes,
    /*27*/ opStats,
    /*28*/ opHelp,
    /*29*/ opQuietMode,
    /*30*/ opVersion,
    /*31*/ opCLGrammar,
    /*32*/ fileNameParam,
    /*33*/ classNameParam,
    /*34*/ stackNameParam,
    /*35*/ prefixParam,
    /*36*/ stringParam,
    /*37*/ optionParam,
    /*38*/ messageParam,
    /*39*/ dfaParam,
    /*40*/ linesParam,
    /*41*/ labelsParam,
    /*42*/ pointsParam,
    /*43*/ displayParam,
    /*44*/ string
};

constexpr char const* const StringifyEnumTermEnum[] =
{
    /*0*/ "TokenError",
    /*1*/ "TokenEOF",
    /*2*/ "option",
    /*3*/ "parameter",
    /*4*/ "integer",
    /*5*/ "fileName",
    /*6*/ "className",
    /*7*/ "msgCode",
    /*8*/ "colon",
    /*9*/ "opConfigFile",
    /*10*/ "opTableTypeLR",
    /*11*/ "opTableTypeLALR",
    /*12*/ "opTableTypeCLR",
    /*13*/ "opParseData",
    /*14*/ "opEnumFile",
    /*15*/ "opEnumClasses",
    /*16*/ "opEnumStrings",
    /*17*/ "opTermEnum",
    /*18*/ "opNonTermEnum",
    /*19*/ "opProdEnum",
    /*20*/ "opReduceFunc",
    /*21*/ "opStaticDFA",
    /*22*/ "opStaticParseTable",
    /*23*/ "opCanonical",
    /*24*/ "opConflictReport",
    /*25*/ "opNoWarnings",
    /*26*/ "opNotes",
    /*27*/ "opStats",
    /*28*/ "opHelp",
    /*29*/ "opQuietMode",
    /*30*/ "opVersion",
    /*31*/ "opCLGrammar",
    /*32*/ "fileNameParam",
    /*33*/ "classNameParam",
    /*34*/ "stackNameParam",
    /*35*/ "prefixParam",
    /*36*/ "stringParam",
    /*37*/ "optionParam",
    /*38*/ "messageParam",
    /*39*/ "dfaParam",
    /*40*/ "linesParam",
    /*41*/ "labelsParam",
    /*42*/ "pointsParam",
    /*43*/ "displayParam",
    /*44*/ "string"
};