/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"

#ifdef	WIN32
#include <malloc.h>
#if _MSC_VER
#pragma warning(disable : 4786)
#endif
#include <cstdio>
#include <memory>
namespace std
{ using ::size_t; 
  using ::malloc;
  using ::free;
}
#endif

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <stack>
#include <cassert>
#include <cstring>

#include	"parsenode.h"
#include	<aqsis/util/logging.h>
#include	<aqsis/util/exception.h>
#include	<aqsis/math/math.h>

# define YYMAXDEPTH 100000
# define YYINITDEPTH  2000

using namespace Aqsis;


namespace Aqsis
{

extern CqString ParseStreamName;
extern std::ostream* ParseErrorStream;
extern TqInt ParseLineNumber;
extern TqInt	iArrayAccess;
CqParseNode*	ParseTreePointer;
std::vector<std::pair<bool,CqString> >	ParseNameSpaceStack;
int scopeID = 0;
std::stack<TqInt> functionReturnCountStack;
std::stack<CqParseNodeDeclaration*> currentFunctionStack;
EqShaderType gShaderType;

bool	FindVariable(const char* name, SqVarRef& ref);
bool	FindFunction(const char* name, std::vector<SqFuncRef>& Ref);
CqString strNameSpace();
void	pushScope(CqString name, bool terminal=false);
CqString	popScope();
void	TypeCheck();
void	Optimise();
void	InitStandardNamespace();
void	ProcessShaderArguments( CqParseNode* pArgs );

void Error(const CqString& message, TqInt lineNumber);

}


#line 136 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_SYMBOL = 4,                     /* SYMBOL  */
  YYSYMBOL_ARRAY_SYMBOL = 5,               /* ARRAY_SYMBOL  */
  YYSYMBOL_TYPE_FLOAT = 6,                 /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_POINT = 7,                 /* TYPE_POINT  */
  YYSYMBOL_TYPE_STRING = 8,                /* TYPE_STRING  */
  YYSYMBOL_TYPE_COLOR = 9,                 /* TYPE_COLOR  */
  YYSYMBOL_TYPE_NORMAL = 10,               /* TYPE_NORMAL  */
  YYSYMBOL_TYPE_VECTOR = 11,               /* TYPE_VECTOR  */
  YYSYMBOL_TYPE_VOID = 12,                 /* TYPE_VOID  */
  YYSYMBOL_TYPE_MATRIX = 13,               /* TYPE_MATRIX  */
  YYSYMBOL_TYPE_UNIFORM = 14,              /* TYPE_UNIFORM  */
  YYSYMBOL_TYPE_VARYING = 15,              /* TYPE_VARYING  */
  YYSYMBOL_SHADER_TYPE_SURFACE = 16,       /* SHADER_TYPE_SURFACE  */
  YYSYMBOL_SHADER_TYPE_VOLUME = 17,        /* SHADER_TYPE_VOLUME  */
  YYSYMBOL_SHADER_TYPE_IMAGER = 18,        /* SHADER_TYPE_IMAGER  */
  YYSYMBOL_SHADER_TYPE_TRANSFORMATION = 19, /* SHADER_TYPE_TRANSFORMATION  */
  YYSYMBOL_SHADER_TYPE_DISPLACEMENT = 20,  /* SHADER_TYPE_DISPLACEMENT  */
  YYSYMBOL_SHADER_TYPE_LIGHT = 21,         /* SHADER_TYPE_LIGHT  */
  YYSYMBOL_SHADER_TYPE_ATMOSPHERE = 22,    /* SHADER_TYPE_ATMOSPHERE  */
  YYSYMBOL_ATTRIBUTE = 23,                 /* ATTRIBUTE  */
  YYSYMBOL_OPTION = 24,                    /* OPTION  */
  YYSYMBOL_RENDERERINFO = 25,              /* RENDERERINFO  */
  YYSYMBOL_INCIDENT = 26,                  /* INCIDENT  */
  YYSYMBOL_OPPOSITE = 27,                  /* OPPOSITE  */
  YYSYMBOL_LIGHTSOURCE = 28,               /* LIGHTSOURCE  */
  YYSYMBOL_EXTERN = 29,                    /* EXTERN  */
  YYSYMBOL_TEXTUREINFO = 30,               /* TEXTUREINFO  */
  YYSYMBOL_RAYINFO = 31,                   /* RAYINFO  */
  YYSYMBOL_OUTPUT = 32,                    /* OUTPUT  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_CONTINUE = 37,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_RETURN = 39,                    /* RETURN  */
  YYSYMBOL_ILLUMINATE = 40,                /* ILLUMINATE  */
  YYSYMBOL_ILLUMINANCE = 41,               /* ILLUMINANCE  */
  YYSYMBOL_SOLAR = 42,                     /* SOLAR  */
  YYSYMBOL_GATHER = 43,                    /* GATHER  */
  YYSYMBOL_TEXTUREMAP = 44,                /* TEXTUREMAP  */
  YYSYMBOL_ENVIRONMENT = 45,               /* ENVIRONMENT  */
  YYSYMBOL_BUMP = 46,                      /* BUMP  */
  YYSYMBOL_SHADOW = 47,                    /* SHADOW  */
  YYSYMBOL_OCCLUSION = 48,                 /* OCCLUSION  */
  YYSYMBOL_SETXCOMP = 49,                  /* SETXCOMP  */
  YYSYMBOL_SETYCOMP = 50,                  /* SETYCOMP  */
  YYSYMBOL_SETZCOMP = 51,                  /* SETZCOMP  */
  YYSYMBOL_SETCOMP = 52,                   /* SETCOMP  */
  YYSYMBOL_53_ = 53,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN = 54,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 55,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 56,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 57,                /* DIV_ASSIGN  */
  YYSYMBOL_58_ = 58,                       /* '?'  */
  YYSYMBOL_59_ = 59,                       /* ':'  */
  YYSYMBOL_OR_OP = 60,                     /* OR_OP  */
  YYSYMBOL_AND_OP = 61,                    /* AND_OP  */
  YYSYMBOL_62_ = 62,                       /* '>'  */
  YYSYMBOL_GE_OP = 63,                     /* GE_OP  */
  YYSYMBOL_64_ = 64,                       /* '<'  */
  YYSYMBOL_LE_OP = 65,                     /* LE_OP  */
  YYSYMBOL_EQ_OP = 66,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 67,                     /* NE_OP  */
  YYSYMBOL_68_ = 68,                       /* '+'  */
  YYSYMBOL_69_ = 69,                       /* '-'  */
  YYSYMBOL_70_ = 70,                       /* '^'  */
  YYSYMBOL_71_ = 71,                       /* '/'  */
  YYSYMBOL_72_ = 72,                       /* '*'  */
  YYSYMBOL_73_ = 73,                       /* '.'  */
  YYSYMBOL_NEG = 74,                       /* NEG  */
  YYSYMBOL_75_ = 75,                       /* '!'  */
  YYSYMBOL_76_ = 76,                       /* '('  */
  YYSYMBOL_77_ = 77,                       /* ')'  */
  YYSYMBOL_FLOAT_CONSTANT = 78,            /* FLOAT_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 79,            /* STRING_LITERAL  */
  YYSYMBOL_80_ = 80,                       /* '{'  */
  YYSYMBOL_81_ = 81,                       /* '}'  */
  YYSYMBOL_82_ = 82,                       /* ';'  */
  YYSYMBOL_83_ = 83,                       /* ','  */
  YYSYMBOL_84_ = 84,                       /* '['  */
  YYSYMBOL_85_ = 85,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_file = 87,                      /* file  */
  YYSYMBOL_definitions = 88,               /* definitions  */
  YYSYMBOL_get_filepos = 89,               /* get_filepos  */
  YYSYMBOL_shader_definition = 90,         /* shader_definition  */
  YYSYMBOL_function_definition = 91,       /* function_definition  */
  YYSYMBOL_92_1 = 92,                      /* $@1  */
  YYSYMBOL_93_2 = 93,                      /* $@2  */
  YYSYMBOL_function_declaration = 94,      /* function_declaration  */
  YYSYMBOL_shader_type = 95,               /* shader_type  */
  YYSYMBOL_formals = 96,                   /* formals  */
  YYSYMBOL_formal_variable_definitions = 97, /* formal_variable_definitions  */
  YYSYMBOL_variable_definitions = 98,      /* variable_definitions  */
  YYSYMBOL_typespec = 99,                  /* typespec  */
  YYSYMBOL_def_expressions = 100,          /* def_expressions  */
  YYSYMBOL_def_expression = 101,           /* def_expression  */
  YYSYMBOL_def_init = 102,                 /* def_init  */
  YYSYMBOL_def_array_initialisers = 103,   /* def_array_initialisers  */
  YYSYMBOL_array_initialisers = 104,       /* array_initialisers  */
  YYSYMBOL_detail = 105,                   /* detail  */
  YYSYMBOL_type = 106,                     /* type  */
  YYSYMBOL_pspace = 107,                   /* pspace  */
  YYSYMBOL_cspace = 108,                   /* cspace  */
  YYSYMBOL_vspace = 109,                   /* vspace  */
  YYSYMBOL_nspace = 110,                   /* nspace  */
  YYSYMBOL_mspace = 111,                   /* mspace  */
  YYSYMBOL_spacetype = 112,                /* spacetype  */
  YYSYMBOL_statements = 113,               /* statements  */
  YYSYMBOL_statement = 114,                /* statement  */
  YYSYMBOL_115_3 = 115,                    /* $@3  */
  YYSYMBOL_116_4 = 116,                    /* $@4  */
  YYSYMBOL_loop_control = 117,             /* loop_control  */
  YYSYMBOL_loop_modstmt = 118,             /* loop_modstmt  */
  YYSYMBOL_loop_mod = 119,                 /* loop_mod  */
  YYSYMBOL_expression = 120,               /* expression  */
  YYSYMBOL_cast_expr = 121,                /* cast_expr  */
  YYSYMBOL_primary = 122,                  /* primary  */
  YYSYMBOL_relational_operator = 123,      /* relational_operator  */
  YYSYMBOL_relation = 124,                 /* relation  */
  YYSYMBOL_assignexpression = 125,         /* assignexpression  */
  YYSYMBOL_procedurecall = 126,            /* procedurecall  */
  YYSYMBOL_unresolvedcall = 127,           /* unresolvedcall  */
  YYSYMBOL_proc_argument = 128,            /* proc_argument  */
  YYSYMBOL_proc_arguments = 129,           /* proc_arguments  */
  YYSYMBOL_texture_type = 130,             /* texture_type  */
  YYSYMBOL_texture_arguments = 131,        /* texture_arguments  */
  YYSYMBOL_number = 132,                   /* number  */
  YYSYMBOL_comm_type = 133,                /* comm_type  */
  YYSYMBOL_comm_function = 134             /* comm_function  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 90 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"

extern TqInt yylex();
static void yyerror(const CqString& Message);

#line 309 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  408

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,     2,     2,     2,
      76,    77,    72,    68,    83,    69,    73,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    82,
      64,    53,    62,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,    81,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    60,    61,    63,    65,    66,    67,    74,    78,
      79
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   178,   178,   179,   184,   185,   190,   197,   210,   226,
     233,   247,   246,   292,   291,   320,   326,   332,   343,   357,
     360,   363,   366,   369,   372,   378,   391,   402,   406,   488,
     575,   664,   715,   719,   723,   729,   737,   746,   753,   760,
     769,   776,   790,   800,   810,   822,   835,   841,   856,   862,
     870,   871,   875,   879,   883,   887,   888,   889,   890,   891,
     895,   899,   906,   910,   917,   921,   928,   932,   939,   943,
     950,   954,   960,   968,   969,   977,   985,   990,  1011,  1012,
    1013,  1039,  1041,  1046,  1040,  1052,  1053,  1054,  1062,  1077,
    1086,  1105,  1111,  1123,  1138,  1159,  1165,  1179,  1188,  1204,
    1217,  1231,  1248,  1266,  1286,  1307,  1335,  1367,  1382,  1386,
    1390,  1398,  1399,  1410,  1421,  1432,  1443,  1454,  1465,  1475,
    1476,  1489,  1535,  1539,  1543,  1547,  1552,  1556,  1557,  1558,
    1559,  1560,  1563,  1571,  1595,  1596,  1597,  1598,  1599,  1600,
    1604,  1607,  1614,  1621,  1628,  1636,  1642,  1656,  1670,  1684,
    1698,  1705,  1723,  1741,  1759,  1780,  1790,  1798,  1831,  1853,
    1869,  1870,  1881,  1887,  1895,  1901,  1907,  1913,  1919,  1928,
    1934,  1943,  1948,  1949,  1950,  1951,  1952,  1953,  1954,  1955,
    1956,  1957,  1958,  1963,  1984,  2009,  2030
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "SYMBOL",
  "ARRAY_SYMBOL", "TYPE_FLOAT", "TYPE_POINT", "TYPE_STRING", "TYPE_COLOR",
  "TYPE_NORMAL", "TYPE_VECTOR", "TYPE_VOID", "TYPE_MATRIX", "TYPE_UNIFORM",
  "TYPE_VARYING", "SHADER_TYPE_SURFACE", "SHADER_TYPE_VOLUME",
  "SHADER_TYPE_IMAGER", "SHADER_TYPE_TRANSFORMATION",
  "SHADER_TYPE_DISPLACEMENT", "SHADER_TYPE_LIGHT",
  "SHADER_TYPE_ATMOSPHERE", "ATTRIBUTE", "OPTION", "RENDERERINFO",
  "INCIDENT", "OPPOSITE", "LIGHTSOURCE", "EXTERN", "TEXTUREINFO",
  "RAYINFO", "OUTPUT", "IF", "ELSE", "WHILE", "FOR", "CONTINUE", "BREAK",
  "RETURN", "ILLUMINATE", "ILLUMINANCE", "SOLAR", "GATHER", "TEXTUREMAP",
  "ENVIRONMENT", "BUMP", "SHADOW", "OCCLUSION", "SETXCOMP", "SETYCOMP",
  "SETZCOMP", "SETCOMP", "'='", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "'?'", "':'", "OR_OP", "AND_OP", "'>'", "GE_OP", "'<'",
  "LE_OP", "EQ_OP", "NE_OP", "'+'", "'-'", "'^'", "'/'", "'*'", "'.'",
  "NEG", "'!'", "'('", "')'", "FLOAT_CONSTANT", "STRING_LITERAL", "'{'",
  "'}'", "';'", "','", "'['", "']'", "$accept", "file", "definitions",
  "get_filepos", "shader_definition", "function_definition", "$@1", "$@2",
  "function_declaration", "shader_type", "formals",
  "formal_variable_definitions", "variable_definitions", "typespec",
  "def_expressions", "def_expression", "def_init",
  "def_array_initialisers", "array_initialisers", "detail", "type",
  "pspace", "cspace", "vspace", "nspace", "mspace", "spacetype",
  "statements", "statement", "$@3", "$@4", "loop_control", "loop_modstmt",
  "loop_mod", "expression", "cast_expr", "primary", "relational_operator",
  "relation", "assignexpression", "procedurecall", "unresolvedcall",
  "proc_argument", "proc_arguments", "texture_type", "texture_arguments",
  "number", "comm_type", "comm_function", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2402,   -55,   -46,  -144,   -26,  -144,   -26,   -26,   -26,  -144,
     -26,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  1926,
    -144,  -144,  -144,    93,     3,    14,   463,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,   222,  -144,     5,  -144,    46,  -144,  -144,
     -12,    -3,  -144,    46,    11,  -144,   181,   -38,   -37,    26,
    -144,    17,    21,  -144,  -144,    26,  1495,    31,  -144,  1772,
     -58,  -144,   -30,  -144,    46,   120,   166,    42,    60,     2,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   222,
    -144,  -144,  1772,  1772,    48,  -144,  -144,  1772,    69,    74,
      89,   124,  -144,  -144,  -144,  -144,  -144,    41,  -144,  -144,
     100,   165,  1117,  -144,  -144,   133,   147,   144,   156,   159,
     180,   184,   179,  1495,   192,   164,   185,  1772,  1772,  1772,
    -144,  -144,  1772,   963,  -144,  -144,   106,  -144,  -144,  -144,
    -144,  -144,  -144,   186,  -144,   189,  -144,   190,     6,   196,
      13,  1772,  1772,  1772,  1772,  1772,  1772,  1772,  1772,    46,
     976,  1056,   976,  1056,  1772,  1841,  1772,  1772,  1541,  1772,
    -144,  1495,  -144,   -42,   -40,    26,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  1772,  1772,  -144,  1180,  1618,  1695,  1772,
    -144,   963,  -144,   512,   -36,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  1772,  1772,  1772,  1772,  1772,  1772,  1772,  1772,
    1772,  1772,   225,   225,  1495,   199,  1495,   200,  -144,   293,
    -144,   -48,   963,   963,   963,   963,   963,  -144,   -44,   139,
      26,   247,   253,  -144,  -144,  2304,  -144,   775,   863,  1495,
     607,  1819,  1495,   -14,  1886,  -144,   182,  -144,  1772,  -144,
      83,    83,    86,   216,   216,  -144,   963,   703,   230,  -144,
     213,  -144,  -144,  1243,  1495,  1306,  1495,  1772,  -144,  1772,
    -144,    84,  1495,  1495,  1772,  1495,  1772,  1495,  1772,  -144,
    1772,  1772,   214,  -144,  1849,    84,  1908,  1772,  1772,  -144,
    1369,  -144,  1432,   238,  -144,  1772,  1772,  1772,  1772,  1772,
    -144,  -144,  2325,    10,  -144,  1930,  -144,  1528,  1104,  1952,
    -144,     4,   -10,  1974,  1772,   963,    -4,   963,  -144,  -144,
    -144,   963,   963,   963,   963,   963,  1772,  1772,  1772,  1495,
    1772,  1495,  1772,  -144,  -144,   138,  1605,  -144,  1772,  1167,
    1230,  1293,  -144,  1682,  -144,  1996,   235,   236,  -144,  1772,
     963,  1495,  1495,  1495,  1495,  1772,  1772,  -144,  -144,  2018,
    -144,  -144,  -144,  -144,  1356,  2040,  1772,  1495,  1772,  2062,
    -144,  1759,  1772,  1495,  1772,    -5,  2084,   281,   963,  1495,
    1772,  1772,  1495,   282,   963,  2106,  -144,  1495,  1772,  -144,
    2128,  1772,  2150,  1772,  2172,  1772,  2194,  1772,  2216,  1772,
    2238,  1772,  2260,  1772,  2282,  1772,  1419,  -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    52,    61,    53,    63,    67,    65,    54,
      69,    51,    50,    20,    21,    24,    23,    22,    19,     0,
       2,     4,     5,     0,     0,     0,     0,    33,    55,    56,
      57,    58,    59,    16,    18,    70,    60,    62,    66,    64,
      68,     1,     3,     0,    13,     0,    25,     0,     6,     6,
       0,     0,    32,     0,     0,    11,    27,    37,    42,    28,
      34,     0,     0,    15,    17,    29,     0,     0,    26,     0,
       0,    36,     0,    41,     0,     0,     0,     0,     0,     0,
     175,   173,   172,   176,   177,   178,   179,   180,   174,     0,
     181,   182,     0,     0,     0,   110,   109,     0,     0,     0,
       0,     0,   164,   165,   166,   167,   168,    82,    86,    81,
       0,     0,     0,    71,    79,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,   123,   124,     0,     0,     0,
     171,   126,     0,    46,   119,   111,     0,   130,   127,   128,
     122,   129,    40,     0,    45,     0,    35,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    80,    37,    42,    30,    14,    72,    78,   107,
      73,    74,    75,     0,     0,    76,     0,     0,     0,     0,
     118,     0,   144,     0,     0,   121,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,    43,     0,     0,     0,     0,   159,   160,
     162,     0,   145,   146,   147,   148,   149,   156,     0,     0,
      31,    88,    87,    92,    91,     0,    77,     0,     0,     0,
       0,     0,    83,     0,     0,    12,     0,   131,     0,   140,
     116,   117,   115,   113,   114,   112,   141,     0,   143,   142,
       0,    39,    44,     0,     0,     0,     0,     0,   158,     0,
     155,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,   157,     0,   125,     0,     0,     0,     9,
       0,    10,     0,     0,   163,     0,     0,     0,     0,     0,
      90,    89,     0,     0,    97,     0,    99,     0,     0,     0,
      84,   123,   124,     0,     0,   120,     0,    48,     7,     8,
     161,   150,   151,   152,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   183,   185,     0,     0,    47,     0,     0,
       0,     0,   100,     0,    96,     0,     0,     0,   132,     0,
      49,     0,     0,     0,     0,     0,     0,   184,   186,     0,
      94,    93,    98,   101,     0,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,   103,   169,     0,
       0,     0,     0,   105,   170,     0,   104,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,   298,   269,  -144,    12,  -144,  -144,  -144,  -144,
     109,   264,  -144,     9,   -49,   248,   -53,   108,  -144,  -144,
       0,  -144,  -144,  -144,  -144,  -144,   141,  -120,   591,  -144,
    -144,  -144,  -144,  -144,   130,  -144,  -144,  -144,   -91,   277,
     376,   449,    55,  -143,  -144,  -144,   -62,  -144,   522
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    61,    21,   109,    67,    54,    23,    24,
      45,    46,   110,   111,    59,    60,    71,   261,   316,    26,
     132,    28,    29,    30,    31,    32,    36,   112,   113,   171,
     282,   114,   115,   116,   219,   134,   135,   208,   136,   137,
     138,   139,   220,   221,   120,   375,   140,   121,   141
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   161,   163,   186,    65,    73,    48,    49,   143,    25,
     145,    69,    22,    69,   228,    69,    69,    50,    51,    27,
     130,    33,   209,    27,   210,   211,    52,   142,    25,   268,
      34,    22,    47,   270,    63,   269,    64,   192,   194,   269,
     243,   249,    70,    27,    72,   228,    70,    72,   130,    57,
      58,   242,    53,    35,   179,   144,    27,   152,   153,   154,
     155,   156,   175,   283,    63,    47,    27,   334,   209,   269,
     210,   211,   379,    64,   189,    27,    27,   337,   380,   338,
     188,   333,    55,   215,    47,    47,   158,    56,    56,    27,
     217,    66,   327,    75,   263,    56,   265,    76,   159,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    74,
     230,   123,    27,   152,   153,   154,   155,   156,   151,   258,
     259,    73,   170,    27,   164,    43,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   157,   295,   296,   297,
     298,   299,   346,   347,   290,   166,   292,    37,    38,    39,
     167,    40,    43,   204,   205,   206,   207,   205,   206,   207,
      27,    27,    27,    27,   209,   168,   210,   211,   173,   174,
      44,    27,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   172,   303,   148,   150,    27,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   147,    43,   133,
     169,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,    43,    27,   178,    27,   152,   153,   154,
     155,   156,   160,   162,   271,   130,   180,   165,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   181,    27,
     188,   182,    27,   149,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   183,   190,   191,   193,
     184,   185,   195,    27,    27,    27,    27,   285,   187,   189,
     214,   212,    27,    27,   213,    27,   216,    27,   260,   264,
     266,   272,   222,   223,   224,   225,   226,   273,   229,   207,
      27,   211,    27,   288,   235,   310,   237,   238,   240,   241,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   357,   358,   244,   382,   387,    42,    62,   246,
      68,   262,   146,   320,   294,     0,     0,     0,     0,    27,
       0,    27,   250,   251,   252,   253,   254,   255,   256,   257,
     191,   191,     0,   117,     0,     0,     0,     0,     0,     0,
       0,    27,    27,    27,    27,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,    27,     0,     0,
       0,     0,     0,    27,     0,     0,     0,   267,   286,    27,
       0,     0,    27,     0,     0,     0,     0,    27,     0,   117,
       0,     0,     0,     0,     0,     0,     0,   293,     0,     0,
     117,     0,     0,     0,   302,     0,   305,     0,   307,     0,
     308,   309,     0,     0,   313,     0,     0,   315,   317,     0,
       0,     0,     0,     0,     0,   321,   322,   323,   324,   325,
       0,     0,     0,     0,     0,     0,     0,   117,   117,   117,
     117,     0,   118,     0,   336,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,   339,   340,   341,     0,
     343,     0,   345,   117,     0,     0,     0,     0,   350,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,   359,
       0,     0,     0,     0,     0,   364,   365,     0,   118,     0,
       0,   117,     0,   117,     0,     0,   369,     0,   371,   118,
       0,     0,   376,     0,   378,     0,     0,     0,     0,     0,
     384,   385,     0,     0,     0,   119,   117,     0,   390,   117,
       0,   392,     0,   394,     0,   396,     0,   398,     0,   400,
       0,   402,     0,   404,     0,   406,   118,   118,   118,   118,
     117,   117,   117,   117,     0,     0,     0,   118,     0,   117,
     117,     0,   117,     0,   117,     0,     0,     0,     0,     0,
       0,   119,   118,     0,     0,     0,     0,   117,     0,   117,
       0,     0,   119,     0,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,   122,   247,
     118,     0,   118,     0,     0,   248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,   117,   119,
     119,   119,   119,     0,     0,   118,     0,     0,   118,     0,
     119,     0,     0,     0,     0,     0,     0,     0,   117,   117,
     117,   117,     0,     0,   122,   119,     0,     0,     0,   118,
     118,   118,   118,     0,   117,   122,     0,     0,   118,   118,
     117,   118,     0,   118,     0,     0,   117,     0,     0,   117,
       0,     0,     0,   119,   117,   119,   118,     0,   118,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   122,   122,   122,   122,     0,     0,   119,     0,
     280,   119,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,   118,     0,   118,   122,     0,
       0,     0,   119,   119,   119,   119,     0,     0,     0,     0,
       0,   119,   119,     0,   119,     0,   119,   118,   118,   118,
     118,     0,     0,     0,     0,     0,   122,     0,   122,   119,
       0,   119,     0,   118,     0,     0,     0,     0,     0,   118,
       0,   231,   232,   233,   234,   118,     0,     0,   118,     0,
       0,   122,   287,   118,   122,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   177,   119,     0,
     119,     0,     0,     0,     0,   122,   122,   122,   122,     0,
       0,     0,     0,     0,   122,   122,     0,   122,     0,   122,
     119,   119,   119,   119,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   122,     0,   119,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,   119,     0,
     279,   119,     0,   177,     0,     0,   119,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
       0,   122,   275,   122,   177,     0,   177,     0,   276,     0,
       0,     0,     0,   300,   301,     0,   304,     0,   306,     0,
       0,     0,     0,   122,   122,   122,   122,     0,     0,     0,
       0,   177,     0,   177,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,   122,     0,     0,   122,     0,     0,     0,     0,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,   344,     0,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,     0,     0,
     277,     0,   360,   361,   362,   363,   278,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,   377,     0,     0,     0,     0,     0,
     383,     0,     0,   386,     0,     0,     0,     0,   389,    77,
      78,    79,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    80,     0,     0,     0,    81,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,   107,     0,   108,    77,
      78,    79,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    80,     0,     0,     0,    81,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,   210,   211,     0,     0,
      77,    78,    79,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    80,     0,     0,   107,    81,   108,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,     0,
      92,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,     0,
       0,   331,     0,    77,    78,    79,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    80,   107,   176,   108,
      81,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,     0,     0,   351,     0,    77,    78,    79,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    80,
     107,   245,   108,    81,     0,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,     0,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,     0,   352,     0,    77,
      78,    79,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    80,   107,   289,   108,    81,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,    92,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,     0,     0,
     353,     0,    77,    78,    79,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    80,   107,   291,   108,    81,
       0,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,     0,    92,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,     0,   367,     0,    77,    78,    79,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    80,   107,
     318,   108,    81,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     0,    92,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,     0,     0,   407,     0,    77,    78,
      79,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    80,   107,   319,   108,    81,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     0,    92,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   124,   125,   126,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    80,     0,     0,
       0,    81,     0,    82,    83,    84,    85,    86,    87,    88,
       0,    90,    91,     0,     0,   107,     0,   108,     0,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,     0,     0,   329,     0,     0,     0,     0,
     127,   330,     0,     0,     0,     0,   128,   129,   239,   130,
     131,   124,   125,   126,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    80,     0,     0,     0,    81,     0,
      82,    83,    84,    85,    86,    87,    88,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
       0,     0,   348,     0,     0,     0,     0,   127,   349,     0,
       0,     0,     0,   128,   129,   218,   130,   131,   124,   125,
     126,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    80,     0,     0,     0,    81,     0,    82,    83,    84,
      85,    86,    87,    88,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,     0,   354,
       0,     0,     0,     0,   127,   355,     0,     0,     0,     0,
     128,   129,   227,   130,   131,   124,   125,   126,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,    80,     0,
       0,     0,    81,     0,    82,    83,    84,    85,    86,    87,
      88,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,     0,     0,   373,     0,     0,     0,
       0,   127,   374,     0,     0,     0,     0,   128,   129,     0,
     130,   131,   124,   311,   312,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    80,     0,     0,     0,    81,
       0,    82,    83,    84,    85,    86,    87,    88,     0,    90,
      91,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   102,   103,   104,   105,   106,     0,     0,
       0,     0,   281,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,     0,     0,   127,     0,
       0,     0,     0,   236,   128,   129,    41,   130,   131,     1,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   314,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   328,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   366,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   368,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   381,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   388,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   391,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   393,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   397,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   405,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,     0,
       0,     0,     0,     0,     0,     0,   274,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
       0,     0,     0,     0,     0,     1,     2,   326,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
       0,    92,    93,   123,    53,    58,     3,     4,    70,     0,
      72,    53,     0,    53,   157,    53,    53,     3,     4,    19,
      78,    76,    58,    23,    60,    61,    26,    85,    19,    77,
      76,    19,    23,    77,    76,    83,    76,   128,   129,    83,
     183,    77,    84,    43,    84,   188,    84,    84,    78,     3,
       4,   171,    43,    79,   116,    85,    56,    53,    54,    55,
      56,    57,   111,    77,    76,    56,    66,    77,    58,    83,
      60,    61,    77,    76,    84,    75,    76,    81,    83,    83,
      76,    77,    77,    77,    75,    76,    84,    82,    82,    89,
      77,    80,    82,    76,   214,    82,   216,    76,    89,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    83,
     159,    80,   112,    53,    54,    55,    56,    57,    76,   210,
     211,   174,    81,   123,    76,    32,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    76,    53,    54,    55,
      56,    57,     4,     5,   264,    76,   266,     6,     7,     8,
      76,    10,    32,    70,    71,    72,    73,    71,    72,    73,
     160,   161,   162,   163,    58,    76,    60,    61,     3,     4,
      77,   171,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    82,   274,    75,    76,   186,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    77,    32,    69,
      76,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    32,   214,    82,   216,    53,    54,    55,
      56,    57,    92,    93,    85,    78,    82,    97,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    82,   239,
      76,    82,   242,    77,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    76,   127,   128,   129,
      76,    82,   132,   263,   264,   265,   266,    85,    76,    84,
      80,    85,   272,   273,    85,   275,    80,   277,    53,    80,
      80,    34,   152,   153,   154,   155,   156,    34,   158,    73,
     290,    61,   292,    80,   164,    81,   166,   167,   168,   169,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    77,    77,   184,    34,    34,    19,    49,   189,
      56,   213,    74,    85,   269,    -1,    -1,    -1,    -1,   329,
      -1,   331,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,   352,   353,   354,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   367,    -1,    -1,
      -1,    -1,    -1,   373,    -1,    -1,    -1,    84,   248,   379,
      -1,    -1,   382,    -1,    -1,    -1,    -1,   387,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,
     123,    -1,    -1,    -1,   274,    -1,   276,    -1,   278,    -1,
     280,   281,    -1,    -1,   284,    -1,    -1,   287,   288,    -1,
      -1,    -1,    -1,    -1,    -1,   295,   296,   297,   298,   299,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,   162,
     163,    -1,    66,    -1,   314,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   326,   327,   328,    -1,
     330,    -1,   332,   186,    -1,    -1,    -1,    -1,   338,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,   349,
      -1,    -1,    -1,    -1,    -1,   355,   356,    -1,   112,    -1,
      -1,   214,    -1,   216,    -1,    -1,   366,    -1,   368,   123,
      -1,    -1,   372,    -1,   374,    -1,    -1,    -1,    -1,    -1,
     380,   381,    -1,    -1,    -1,    66,   239,    -1,   388,   242,
      -1,   391,    -1,   393,    -1,   395,    -1,   397,    -1,   399,
      -1,   401,    -1,   403,    -1,   405,   160,   161,   162,   163,
     263,   264,   265,   266,    -1,    -1,    -1,   171,    -1,   272,
     273,    -1,   275,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   186,    -1,    -1,    -1,    -1,   290,    -1,   292,
      -1,    -1,   123,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    66,    77,
     214,    -1,   216,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   160,
     161,   162,   163,    -1,    -1,   239,    -1,    -1,   242,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,
     353,   354,    -1,    -1,   112,   186,    -1,    -1,    -1,   263,
     264,   265,   266,    -1,   367,   123,    -1,    -1,   272,   273,
     373,   275,    -1,   277,    -1,    -1,   379,    -1,    -1,   382,
      -1,    -1,    -1,   214,   387,   216,   290,    -1,   292,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,   160,   161,   162,   163,    -1,    -1,   239,    -1,
      83,   242,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   329,    -1,   331,   186,    -1,
      -1,    -1,   263,   264,   265,   266,    -1,    -1,    -1,    -1,
      -1,   272,   273,    -1,   275,    -1,   277,   351,   352,   353,
     354,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,   290,
      -1,   292,    -1,   367,    -1,    -1,    -1,    -1,    -1,   373,
      -1,   160,   161,   162,   163,   379,    -1,    -1,   382,    -1,
      -1,   239,    59,   387,   242,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   186,   329,    -1,
     331,    -1,    -1,    -1,    -1,   263,   264,   265,   266,    -1,
      -1,    -1,    -1,    -1,   272,   273,    -1,   275,    -1,   277,
     351,   352,   353,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   290,    -1,   292,    -1,   367,    -1,    -1,    -1,
      -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,   379,    -1,
     239,   382,    -1,   242,    -1,    -1,   387,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,   329,    77,   331,   263,    -1,   265,    -1,    83,    -1,
      -1,    -1,    -1,   272,   273,    -1,   275,    -1,   277,    -1,
      -1,    -1,    -1,   351,   352,   353,   354,    -1,    -1,    -1,
      -1,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,   367,
      -1,    -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,    -1,
      -1,   379,    -1,    -1,   382,    -1,    -1,    -1,    -1,   387,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,   331,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,   351,   352,   353,   354,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,
     379,    -1,    -1,   382,    -1,    -1,    -1,    -1,   387,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    80,    20,    82,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    77,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    80,    81,    82,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      80,    81,    82,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    77,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    80,    81,    82,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      77,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    80,    81,    82,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    77,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    80,
      81,    82,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    77,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    80,    81,    82,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    -1,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      69,    83,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    69,    83,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    69,    83,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    69,    83,    -1,    -1,    -1,    -1,    75,    76,    -1,
      78,    79,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    16,    -1,    -1,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    83,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    82,    75,    76,     0,    78,    79,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    82,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    87,
      88,    90,    91,    94,    95,    99,   105,   106,   107,   108,
     109,   110,   111,    76,    76,    79,   112,   112,   112,   112,
     112,     0,    88,    32,    77,    96,    97,    99,     3,     4,
       3,     4,   106,    99,    93,    77,    82,     3,     4,   100,
     101,    89,    89,    76,    76,   100,    80,    92,    97,    53,
      84,   102,    84,   102,    83,    76,    76,     3,     4,     5,
      16,    20,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    33,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    80,    82,    91,
      98,    99,   113,   114,   117,   118,   119,   125,   126,   127,
     130,   133,   134,    80,     3,     4,     5,    69,    75,    76,
      78,    79,   106,   120,   121,   122,   124,   125,   126,   127,
     132,   134,    85,   132,    85,   132,   101,    77,    96,    77,
      96,    76,    53,    54,    55,    56,    57,    76,    84,    99,
     120,   124,   120,   124,    76,   120,    76,    76,    76,    76,
      81,   115,    82,     3,     4,   100,    81,   114,    82,   132,
      82,    82,    82,    76,    76,    82,   113,    76,    76,    84,
     120,   120,   124,   120,   124,   120,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   123,    58,
      60,    61,    85,    85,    80,    77,    80,    77,    77,   120,
     128,   129,   120,   120,   120,   120,   120,    77,   129,   120,
     100,   114,   114,   114,   114,   120,    82,   120,   120,    77,
     120,   120,   113,   129,   120,    81,   120,    77,    83,    77,
     120,   120,   120,   120,   120,   120,   120,   120,   124,   124,
      53,   103,   103,   113,    80,   113,    80,    84,    77,    83,
      77,    85,    34,    34,    82,    77,    83,    77,    83,   114,
      83,    83,   116,    77,    83,    85,   120,    59,    80,    81,
     113,    81,   113,   120,   128,    53,    54,    55,    56,    57,
     114,   114,   120,   124,   114,   120,   114,   120,   120,   120,
      81,     4,     5,   120,    83,   120,   104,   120,    81,    81,
      85,   120,   120,   120,   120,   120,    82,    82,    83,    77,
      83,    77,    83,    77,    77,    83,   120,    81,    83,   120,
     120,   120,   114,   120,   114,   120,     4,     5,    77,    83,
     120,    77,    77,    77,    77,    83,    83,    77,    77,   120,
     114,   114,   114,   114,   120,   120,    83,    77,    83,   120,
     114,   120,    83,    77,    83,   131,   120,   114,   120,    77,
      83,    83,    34,   114,   120,   120,   114,    34,    83,   114,
     120,    83,   120,    83,   120,    83,   120,    83,   120,    83,
     120,    83,   120,    83,   120,    83,   120,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    89,    90,    90,    90,
      90,    92,    91,    93,    91,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   116,   114,   114,   114,   114,   114,   114,
     114,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   130,   130,   131,
     131,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     9,     9,     8,
       8,     0,     7,     0,     6,     3,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
       2,     3,     2,     1,     1,     3,     2,     1,     4,     5,
       3,     2,     1,     4,     5,     3,     2,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     2,     2,     2,     2,     2,     3,     2,     1,
       2,     1,     0,     0,     5,     2,     1,     3,     3,     5,
       5,     3,     3,     9,     9,     4,     7,     5,     9,     5,
       7,     9,    11,    13,    15,    14,    16,     2,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     1,
       5,     2,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     3,     7,    33,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       6,     6,     6,     6,     6,     4,     3,     4,     4,     3,
       1,     4,     1,     3,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     8,     6,     8
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* file: definitions  */
#line 178 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                        {ParseTreePointer=(yyvsp[0].m_pParseNode);}
#line 1948 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 3: /* file: file definitions  */
#line 180 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {ParseTreePointer->AddLastChild((yyvsp[0].m_pParseNode));}
#line 1954 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 6: /* get_filepos: %empty  */
#line 190 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                {
			(yyval.m_Pos).m_LineNo = ParseLineNumber;
			(yyval.m_Pos).m_strFileName = ParseStreamName.c_str();
		}
#line 1963 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 7: /* shader_definition: shader_type IDENTIFIER get_filepos '(' formals ')' '{' statements '}'  */
#line 198 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Store a pointer to the actual shader.
								(yyval.m_pParseNode)=new CqParseNodeShader((yyvsp[-7].m_Identifier)->c_str(),(yyvsp[-8].m_ShaderType));
								(yyval.m_pParseNode)->SetPos((yyvsp[-6].m_Pos));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));

								// Now copy any initialisers from the formals list to their respective
								// local variable definitions.
								CqParseNode* pArgs=(yyvsp[-4].m_pParseNode);
								ProcessShaderArguments( pArgs );
								(yyval.m_pParseNode)->AddLastChild( (yyvsp[-4].m_pParseNode) );
							}
#line 1980 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 8: /* shader_definition: shader_type SYMBOL get_filepos '(' formals ')' '{' statements '}'  */
#line 211 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Store a pointer to the actual shader.
								CqString strName;
								if((yyvsp[-7].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[-7].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[-7].m_pSymbol).FuncRef)->strName();
								(yyval.m_pParseNode)=new CqParseNodeShader(strName.c_str(),(yyvsp[-8].m_ShaderType));
								(yyval.m_pParseNode)->SetPos((yyvsp[-6].m_Pos));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));

								// Now copy any initialisers from the formals list to their respective
								// local variable definitions.
								CqParseNode* pArgs=(yyvsp[-4].m_pParseNode);
								ProcessShaderArguments( pArgs );
								(yyval.m_pParseNode)->AddLastChild( (yyvsp[-4].m_pParseNode) );
							}
#line 2000 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 9: /* shader_definition: shader_type IDENTIFIER get_filepos '(' ')' '{' statements '}'  */
#line 227 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Store a pointer to the actual shader.
								(yyval.m_pParseNode)=new CqParseNodeShader((yyvsp[-6].m_Identifier)->c_str(), (yyvsp[-7].m_ShaderType));
								(yyval.m_pParseNode)->SetPos((yyvsp[-5].m_Pos));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
							}
#line 2011 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 10: /* shader_definition: shader_type SYMBOL get_filepos '(' ')' '{' statements '}'  */
#line 234 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Store a pointer to the actual shader.
								CqString strName;
								if((yyvsp[-6].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[-6].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[-6].m_pSymbol).FuncRef)->strName();
								(yyval.m_pParseNode)=new CqParseNodeShader(strName.c_str(),(yyvsp[-7].m_ShaderType));
								(yyval.m_pParseNode)->SetPos((yyvsp[-5].m_Pos));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
							}
#line 2025 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 11: /* $@1: %empty  */
#line 247 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Push a new level onto the return count stack.
								functionReturnCountStack.push(0);
								currentFunctionStack.push(static_cast<CqParseNodeDeclaration*>((yyvsp[-2].m_pParseNode)));
							}
#line 2035 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 12: /* function_definition: function_declaration formals ')' $@1 '{' statements '}'  */
#line 253 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNodeDeclaration* pDecl=static_cast<CqParseNodeDeclaration*>((yyvsp[-6].m_pParseNode));

								// If no return/or multiple returns, then this is not a valid function.
								if(pDecl->Type() != Type_Void &&
								    functionReturnCountStack.top() != 1)
									yyerror("Must have one return in function");
								
								// Make a string of the parameter types.
								CqParseNode* pArgs=(yyvsp[-5].m_pParseNode);
								CqString strArgTypes("");
								if(pArgs)
								{
									// Each child of the variable_definitions is a CqParseNodeVariable
									CqParseNodeVariable* pVar=static_cast<CqParseNodeVariable*>(pArgs->pFirstChild());
									while(pVar)
									{
										// If storage is not specified, a function parameter defaults to varying.
										pVar->SetDefaultStorage(Type_Varying);
										// Get the type from the variable
										strArgTypes+=CqParseNode::TypeIdentifier(pVar->ResType());
										// TODO: Find out if local function arguments can have default values.
										// If so, they can be found as the child of pVar.
										pVar=static_cast<CqParseNodeVariable*>(pVar->pNext());
									}
								}

								// Add the function declaration to the list of local functions.
								CqFuncDef funcdef(pDecl->Type(), pDecl->strName(), pDecl->strName(), strArgTypes.c_str(), (yyvsp[-1].m_pParseNode), pArgs);
								CqFuncDef::AddFunction(funcdef);
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								delete(pDecl);
								// Function level namespace is now defunct.
								popScope();
								functionReturnCountStack.pop();
								currentFunctionStack.pop();
							}
#line 2078 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 13: /* $@2: %empty  */
#line 292 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Push a new level onto the functionReturnCountStack.
								functionReturnCountStack.push(0);
								currentFunctionStack.push(static_cast<CqParseNodeDeclaration*>((yyvsp[-1].m_pParseNode)));
							}
#line 2088 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 14: /* function_definition: function_declaration ')' $@2 '{' statements '}'  */
#line 298 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNodeDeclaration* pDecl=static_cast<CqParseNodeDeclaration*>((yyvsp[-5].m_pParseNode));

								// If no return/or multiple returns, then this is not a valid function.
								if(pDecl->Type() != Type_Void &&
								    functionReturnCountStack.top() != 1)
									yyerror("Must have one return in function");

								// Add the function declaration to the list of local functions.
								CqFuncDef funcdef(pDecl->Type(), pDecl->strName(), pDecl->strName(), "", (yyvsp[-1].m_pParseNode), 0);
								CqFuncDef::AddFunction(funcdef);
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								delete(pDecl);
								// Function level namespace is now defunct.
								popScope();
								functionReturnCountStack.pop();
								currentFunctionStack.pop();
							}
#line 2112 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 15: /* function_declaration: typespec IDENTIFIER '('  */
#line 320 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((strNameSpace()+*(yyvsp[-1].m_Identifier)).c_str(),(yyvsp[-2].m_TypeAndSpace).Type);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								// Store the name of the function being defined for use in variable namespacing.
								pushScope(*(yyvsp[-1].m_Identifier),true);
							}
#line 2123 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 16: /* function_declaration: IDENTIFIER '('  */
#line 326 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {	
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((strNameSpace()+*(yyvsp[-1].m_Identifier)).c_str(),Type_Void);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								// Store the name of the function being defined for use in variable namespacing.
								pushScope(*(yyvsp[-1].m_Identifier),true);
							}
#line 2134 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 17: /* function_declaration: typespec SYMBOL '('  */
#line 332 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                    {
								// TODO: Should warn about duplicate declarations.
								CqString strName(strNameSpace());
								if((yyvsp[-1].m_pSymbol).eType&1)	strName+=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef)->strName();
								else			strName+=CqFuncDef::GetFunctionPtr((yyvsp[-1].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str(),(yyvsp[-2].m_TypeAndSpace).Type);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								// Store the name of the function being defined for use in variable namespacing.
								pushScope(strName,true);
							}
#line 2150 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 18: /* function_declaration: SYMBOL '('  */
#line 343 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	
								// TODO: Should warn about duplicate declarations.
								CqString strName(strNameSpace());
								if((yyvsp[-1].m_pSymbol).eType&1)	strName+=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef)->strName();
								else			strName+=CqFuncDef::GetFunctionPtr((yyvsp[-1].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str(),Type_Void);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								// Store the name of the function being defined for use in variable namespacing.
								pushScope(strName,true);
							}
#line 2166 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 19: /* shader_type: SHADER_TYPE_LIGHT  */
#line 357 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        { 
								(yyval.m_ShaderType) = Type_Lightsource;
							}
#line 2174 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 20: /* shader_type: SHADER_TYPE_SURFACE  */
#line 360 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        { 
								(yyval.m_ShaderType) = Type_Surface;
							}
#line 2182 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 21: /* shader_type: SHADER_TYPE_VOLUME  */
#line 363 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        { 
								(yyval.m_ShaderType) = Type_Volume;
							}
#line 2190 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 22: /* shader_type: SHADER_TYPE_DISPLACEMENT  */
#line 366 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                { 
								(yyval.m_ShaderType) = Type_Displacement;
							}
#line 2198 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 23: /* shader_type: SHADER_TYPE_TRANSFORMATION  */
#line 369 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                { 
								(yyval.m_ShaderType) = Type_Transformation;
							}
#line 2206 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 24: /* shader_type: SHADER_TYPE_IMAGER  */
#line 372 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        { 
								(yyval.m_ShaderType) = Type_Imager;
							}
#line 2214 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 25: /* formals: formal_variable_definitions  */
#line 379 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Create a list header, and add the first entry to it.
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeVariable* pVarNode=static_cast<CqParseNodeVariable*>((yyvsp[0].m_pParseNode)->pFirstChild());
								while(pVarNode!=0)
								{
									CqParseNodeVariable* pVarNext=static_cast<CqParseNodeVariable*>(pVarNode->pNext());
									(yyval.m_pParseNode)->AddLastChild(pVarNode);
									pVarNode=pVarNext;
								}
							}
#line 2231 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 26: /* formals: formals ';' formal_variable_definitions  */
#line 392 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Add this one to the list.
								CqParseNodeVariable* pVarNode=static_cast<CqParseNodeVariable*>((yyvsp[0].m_pParseNode)->pFirstChild());
								while(pVarNode!=0)
								{
									CqParseNodeVariable* pVarNext=static_cast<CqParseNodeVariable*>(pVarNode->pNext());
									(yyval.m_pParseNode)->AddLastChild(pVarNode);
									pVarNode=pVarNext;
								}
							}
#line 2246 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 28: /* formal_variable_definitions: typespec def_expressions  */
#line 407 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeDeclaration* pDecl=static_cast<CqParseNodeDeclaration*>((yyvsp[0].m_pParseNode)->pFirstChild());
								while(pDecl)
								{
									TqInt Type=((yyvsp[-1].m_TypeAndSpace).Type);
									TqInt arrayLength = 0;
									
									SqVarRef var;
									bool fv=CqVarDef::FindVariable((strNameSpace()+pDecl->strName()).c_str(), var);
									if(fv)
									{
										CqVarDef* pVar=CqVarDef::GetVariablePtr(var);
										// Check if the declaration marked it as an arry
										if(pVar->Type()&Type_Array)
											Type=(TqInt)(Type|Type_Array);
										arrayLength = pVar->ArrayLength();

										pVar->SetType(Type);
										// Create a variable node, in the case of local variable definition, these nodes will be removed, 
										// and only the intitialisers kept.
										// In the case of function parameters, the variables will be needed for type string construction.
										CqParseNode* pVarNode=new CqParseNodeVariable(var);
										pVarNode->SetPos(ParseLineNumber,ParseStreamName.c_str());
										(yyval.m_pParseNode)->AddLastChild(pVarNode);

										// Copy any initialisers
										if(pDecl->pFirstChild())
										{
											if(Type&Type_Array)
											{
												CqParseNode* pArrayInit=new CqParseNode();

												CqParseNode* pInitList=pDecl->pFirstChild();
												CqParseNode* pInit=pInitList->pFirstChild();
												TqInt i=0;
												while(pInit!=0)
												{
													CqParseNode* pInit2=pInit->pNext();
													CqParseNodeAssignArray* pInitFunc=new CqParseNodeAssignArray(var);
													pInitFunc->NoDup();
													CqParseNodeFloatConst* pIndex=new CqParseNodeFloatConst(i);

													pInitFunc->AddLastChild(pInit);
													pInitFunc->AddLastChild(pIndex);
													pArrayInit->AddLastChild(pInitFunc);

													i++;
													pInit=pInit2;
												}
												// Check if the right number of initialisers has been specified.
												if(i != arrayLength)
												{
													CqString strError("Error: expected exactly ");
													strError += arrayLength;
													strError += " initialisers, got ";
													strError += i;
													yyerror(strError);
												}
												pVarNode->AddLastChild(pArrayInit);
											}
											else
											{
												// Create an assign operator to initialise the variable.
												CqParseNode* pV=new CqParseNodeAssign(var);
												pV->SetPos(ParseLineNumber,ParseStreamName.c_str());
												pV->NoDup();
												pV->AddLastChild(pDecl->pFirstChild());

												pVarNode->AddLastChild(pV);
												pDecl->ClearChild();
											}
										}
									}

									CqParseNode* pTemp=pDecl;
									pDecl=static_cast<CqParseNodeDeclaration*>(pDecl->pNext());
									delete(pTemp);
								}
							}
#line 2332 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 29: /* formal_variable_definitions: OUTPUT typespec def_expressions  */
#line 489 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeDeclaration* pDecl=static_cast<CqParseNodeDeclaration*>((yyvsp[0].m_pParseNode)->pFirstChild());
								while(pDecl)
								{
									TqInt Type=((yyvsp[-1].m_TypeAndSpace).Type);
									TqInt arrayLength = 0;
									
									SqVarRef var;
									bool fv=CqVarDef::FindVariable((strNameSpace()+pDecl->strName()).c_str(), var);
									if(fv)
									{
										CqVarDef* pVar=CqVarDef::GetVariablePtr(var);
										// Check if the declaration marked it as an arry
										if(pVar->Type()&Type_Array)
											Type=(TqInt)(Type|Type_Array);
										arrayLength = pVar->ArrayLength();

										pVar->SetType(Type);
										// Create a variable node, in the case of local variable definition, these nodes will be removed, 
										// and only the intitialisers kept.
										// In the case of function parameters, the variables will be needed for type string construction.
										CqParseNodeVariable* pVarNode=new CqParseNodeVariable(var);
										pVarNode->SetOutput();
										pVarNode->SetPos(ParseLineNumber,ParseStreamName.c_str());
										(yyval.m_pParseNode)->AddLastChild(pVarNode);

										// Copy any initialisers
										if(pDecl->pFirstChild())
										{
											if(Type&Type_Array)
											{
												CqParseNode* pArrayInit=new CqParseNode();

												CqParseNode* pInitList=pDecl->pFirstChild();
												CqParseNode* pInit=pInitList->pFirstChild();
												TqInt i=0;
												while(pInit!=0)
												{
													CqParseNode* pInit2=pInit->pNext();
													CqParseNodeAssignArray* pInitFunc=new CqParseNodeAssignArray(var);
													pInitFunc->NoDup();
													CqParseNodeFloatConst* pIndex=new CqParseNodeFloatConst(i);

													pInitFunc->AddLastChild(pInit);
													pInitFunc->AddLastChild(pIndex);
													pArrayInit->AddLastChild(pInitFunc);

													i++;
													pInit=pInit2;
												}
												// Check if the right number of initialisers has been specified.
												if(i != arrayLength)
												{
													CqString strError("Error: expected exactly ");
													strError += arrayLength;
													strError += " initialisers, got ";
													strError += i;
													yyerror(strError);
												}
												pVarNode->AddLastChild(pArrayInit);
											}
											else
											{
												// Create an assign operator to initialise the variable.
												CqParseNode* pV=new CqParseNodeAssign(var);
												pV->SetPos(ParseLineNumber,ParseStreamName.c_str());
												pV->NoDup();
												pV->AddLastChild(pDecl->pFirstChild());

												pVarNode->AddLastChild(pV);
												pDecl->ClearChild();
											}
										}
									}

									CqParseNode* pTemp=pDecl;
									pDecl=static_cast<CqParseNodeDeclaration*>(pDecl->pNext());
									delete(pTemp);
								}
							}
#line 2419 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 30: /* variable_definitions: typespec def_expressions  */
#line 576 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeDeclaration* pDecl=static_cast<CqParseNodeDeclaration*>((yyvsp[0].m_pParseNode)->pFirstChild());
								while(pDecl)
								{
									TqInt Type=((yyvsp[-1].m_TypeAndSpace).Type);
									TqInt arrayLength = 0;
									
									SqVarRef var;
									bool fv=CqVarDef::FindVariable((strNameSpace()+pDecl->strName()).c_str(), var);
									if(fv)
									{
										CqVarDef* pVar=CqVarDef::GetVariablePtr(var);
										// Check if the declaration marked it as an arry
										if(pVar->Type()&Type_Array)
										{
											Type=(TqInt)(Type|Type_Array);
											if( pVar->ArrayLength() <= 0 )
												yyerror("Array length must be specified.");
										}
										arrayLength = pVar->ArrayLength();

										pVar->SetType(Type);
										// Create a variable node, in the case of local variable definition, these nodes will be removed, 
										// and only the intitialisers kept.
										// In the case of function parameters, the variables will be needed for type string construction.
										CqParseNode* pVarNode=new CqParseNodeVariable(var);
										pVarNode->SetPos(ParseLineNumber,ParseStreamName.c_str());
										(yyval.m_pParseNode)->AddLastChild(pVarNode);

										// Copy any initialisers
										if(pDecl->pFirstChild())
										{
											if(Type&Type_Array)
											{
												CqParseNode* pArrayInit=new CqParseNode();

												CqParseNode* pInitList=pDecl->pFirstChild();
												CqParseNode* pInit=pInitList->pFirstChild();
												TqInt i=0;
												while(pInit!=0)
												{
													CqParseNode* pInit2=pInit->pNext();
													CqParseNodeAssignArray* pInitFunc=new CqParseNodeAssignArray(var);
													pInitFunc->NoDup();
													CqParseNodeFloatConst* pIndex=new CqParseNodeFloatConst(i);

													pInitFunc->AddLastChild(pInit);
													pInitFunc->AddLastChild(pIndex);
													pArrayInit->AddLastChild(pInitFunc);

													i++;
													pInit=pInit2;
												}
												// Check if the right number of initialisers has been specified.
												if(i != arrayLength)
												{
													CqString strError("Error: expected exactly ");
													strError += arrayLength;
													strError += " initialisers, got ";
													strError += i;
													yyerror(strError);
												}
												pVarNode->AddLastChild(pArrayInit);
											}
											else
											{
												// Create an assign operator to initialise the variable.
												CqParseNode* pV=new CqParseNodeAssign(var);
												pV->SetPos(ParseLineNumber,ParseStreamName.c_str());
												pV->NoDup();
												pV->AddLastChild(pDecl->pFirstChild());

												// Make sure that any change in the storage type is communicated to the initialiser
												pV->UpdateStorageStatus();

												pVarNode->AddLastChild(pV);
												pDecl->ClearChild();
											}
										}
									}

									CqParseNode* pTemp=pDecl;
									pDecl=static_cast<CqParseNodeDeclaration*>(pDecl->pNext());
									delete(pTemp);
								}
							}
#line 2512 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 31: /* variable_definitions: EXTERN typespec def_expressions  */
#line 665 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeDeclaration* pDecl=static_cast<CqParseNodeDeclaration*>((yyvsp[0].m_pParseNode)->pFirstChild());
								while(pDecl)
								{
									SqVarRef varLocal, varExtern;
									bool fvl=CqVarDef::FindVariable((strNameSpace()+pDecl->strName()).c_str(), varLocal);

									// As this is an extern, we need to repeatedly check in the previous namespaces
									// until we find the variable they are referring to.
									bool fve=false;
									if(!ParseNameSpaceStack.empty())
									{
										std::vector<std::pair<bool,CqString> >::reverse_iterator i=ParseNameSpaceStack.rbegin()+1;
										while(!fve && i!=ParseNameSpaceStack.rend())
										{
											CqString strNS=i->second;
											fve=CqVarDef::FindVariable((strNS+pDecl->strName()).c_str(), varExtern);
											i++;
										}
									}
									if(!fve)
									{
										// If not found in the namespaces defined in the code, check the global namespace.
										fve=CqVarDef::FindStandardVariable(pDecl->strName(), varExtern);
									}

									// If we found a candidate...
									if(fve && fvl)
									{
										CqVarDef* pvarLocal=CqVarDef::GetVariablePtr(varLocal);
										CqVarDef* pvarExtern=CqVarDef::GetVariablePtr(varExtern);
										CqParseNode* pVarNode=new CqParseNodeVariable(varLocal);
										pvarLocal->SetExtern(true, varExtern);
										pvarLocal->SetType(pvarExtern->Type());
										pVarNode->SetPos(ParseLineNumber,ParseStreamName.c_str());
										(yyval.m_pParseNode)->AddLastChild(pVarNode);
									}
									else
										yyerror("extern not found");

									CqParseNode* pTemp=pDecl;
									pDecl=static_cast<CqParseNodeDeclaration*>(pDecl->pNext());
									delete(pTemp);
								}
							}
#line 2564 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 32: /* typespec: detail type  */
#line 715 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=(TqInt)((yyvsp[0].m_TypeAndSpace).Type|(yyvsp[-1].m_VarType));
								(yyval.m_TypeAndSpace).Space=(yyvsp[0].m_TypeAndSpace).Space;
							}
#line 2573 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 34: /* def_expressions: def_expression  */
#line 723 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								// Create a list header and add the first element.
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2584 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 35: /* def_expressions: def_expressions ',' def_expression  */
#line 730 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// This one to the list.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2593 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 36: /* def_expression: IDENTIFIER def_init  */
#line 737 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								// Create a new variable declaration based on the specified name.
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((yyvsp[-1].m_Identifier)->c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Void, (strNameSpace()+*(yyvsp[-1].m_Identifier)).c_str());
								CqVarDef::AddVariable(vardef);
								// Add the initialiser as the first child of the declaration.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2607 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 37: /* def_expression: IDENTIFIER  */
#line 746 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								// Create a new variable declaration based on the specified name.
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((yyvsp[0].m_Identifier)->c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Void, (strNameSpace()+*(yyvsp[0].m_Identifier)).c_str());
								CqVarDef::AddVariable(vardef);
							}
#line 2619 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 38: /* def_expression: IDENTIFIER '[' number ']'  */
#line 753 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                          {
								// Create a new variable declaration based on the specified name.
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((yyvsp[-3].m_Identifier)->c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Array, (strNameSpace()+*(yyvsp[-3].m_Identifier)).c_str(), static_cast<TqInt>((yyvsp[-1].m_FloatConst)));
								CqVarDef::AddVariable(vardef);
							}
#line 2631 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 39: /* def_expression: IDENTIFIER '[' number ']' def_array_initialisers  */
#line 761 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Create a new variable declaration based on the specified name.
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((yyvsp[-4].m_Identifier)->c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Array, (strNameSpace()+*(yyvsp[-4].m_Identifier)).c_str(), static_cast<TqInt>((yyvsp[-2].m_FloatConst)));
								CqVarDef::AddVariable(vardef);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2644 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 40: /* def_expression: IDENTIFIER '[' ']'  */
#line 769 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                   {
								// Create a new variable declaration based on the specified name.
								(yyval.m_pParseNode)=new CqParseNodeDeclaration((yyvsp[-2].m_Identifier)->c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Array, (strNameSpace()+*(yyvsp[-2].m_Identifier)).c_str(), 0);
								CqVarDef::AddVariable(vardef);
							}
#line 2656 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 41: /* def_expression: SYMBOL def_init  */
#line 776 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								// Create a new declaration based on the name.
								// TODO: Should warn about duplicate declarations.
								CqString strName("");
								if((yyvsp[-1].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[-1].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Void, (strNameSpace()+strName).c_str());
								CqVarDef::AddVariable(vardef);
								// Add the initialiser as the first child of the declaration.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2675 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 42: /* def_expression: SYMBOL  */
#line 790 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								CqString strName("");
								if((yyvsp[0].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[0].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[0].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Void, (strNameSpace()+strName).c_str());
								CqVarDef::AddVariable(vardef);
							}
#line 2690 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 43: /* def_expression: SYMBOL '[' number ']'  */
#line 800 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                      {
								CqString strName("");
								if((yyvsp[-3].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[-3].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[-3].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Array, (strNameSpace()+strName).c_str(), static_cast<TqInt>((yyvsp[-1].m_FloatConst)));
								CqVarDef::AddVariable(vardef);
							}
#line 2705 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 44: /* def_expression: SYMBOL '[' number ']' def_array_initialisers  */
#line 811 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqString strName("");
								if((yyvsp[-4].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[-4].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[-4].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Array, (strNameSpace()+strName).c_str(), static_cast<TqInt>((yyvsp[-2].m_FloatConst)));
								CqVarDef::AddVariable(vardef);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2721 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 45: /* def_expression: SYMBOL '[' ']'  */
#line 822 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                               {
								CqString strName("");
								if((yyvsp[-2].m_pSymbol).eType&1)	strName=CqVarDef::GetVariablePtr((yyvsp[-2].m_pSymbol).VarRef)->strName();
								else			strName=CqFuncDef::GetFunctionPtr((yyvsp[-2].m_pSymbol).FuncRef)->strName();

								(yyval.m_pParseNode)=new CqParseNodeDeclaration(strName.c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqVarDef vardef(Type_Array, (strNameSpace()+strName).c_str(), 0);
								CqVarDef::AddVariable(vardef);
							}
#line 2736 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 46: /* def_init: '=' expression  */
#line 835 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=(yyvsp[0].m_pParseNode);
							}
#line 2744 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 47: /* def_array_initialisers: '=' '{' array_initialisers '}'  */
#line 842 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* pArrayInit=new CqParseNode();
								CqParseNode* pInit=(yyvsp[-1].m_pParseNode)->pFirstChild();
								while(pInit)
								{
									CqParseNode* pInit2=pInit->pNext();
									pArrayInit->AddLastChild(pInit);
									pInit=pInit2;
								}
								(yyval.m_pParseNode)=pArrayInit;
							}
#line 2760 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 48: /* array_initialisers: expression  */
#line 856 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								// Create a list header and add the first element.
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2771 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 49: /* array_initialisers: array_initialisers ',' expression  */
#line 863 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// This one to the list.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2780 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 50: /* detail: TYPE_VARYING  */
#line 870 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {	(yyval.m_VarType)=Type_Varying;	}
#line 2786 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 51: /* detail: TYPE_UNIFORM  */
#line 871 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {	(yyval.m_VarType)=Type_Uniform;	}
#line 2792 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 52: /* type: TYPE_FLOAT  */
#line 875 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {	
								(yyval.m_TypeAndSpace).Type=Type_Float;		
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2801 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 53: /* type: TYPE_STRING  */
#line 879 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_TypeAndSpace).Type=Type_String;	
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2810 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 54: /* type: TYPE_VOID  */
#line 883 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=Type_Void;
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2819 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 60: /* pspace: TYPE_POINT spacetype  */
#line 895 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                     {
								(yyval.m_TypeAndSpace).Type=Type_Point;		
								(yyval.m_TypeAndSpace).Space=(yyvsp[0].m_Identifier);
							}
#line 2828 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 61: /* pspace: TYPE_POINT  */
#line 899 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=Type_Point;		
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2837 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 62: /* cspace: TYPE_COLOR spacetype  */
#line 906 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                     {
								(yyval.m_TypeAndSpace).Type=Type_Color;		
								(yyval.m_TypeAndSpace).Space=(yyvsp[0].m_Identifier);
							}
#line 2846 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 63: /* cspace: TYPE_COLOR  */
#line 910 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=Type_Color;		
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2855 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 64: /* vspace: TYPE_VECTOR spacetype  */
#line 917 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_TypeAndSpace).Type=Type_Vector;		
								(yyval.m_TypeAndSpace).Space=(yyvsp[0].m_Identifier);
							}
#line 2864 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 65: /* vspace: TYPE_VECTOR  */
#line 921 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=Type_Vector;		
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2873 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 66: /* nspace: TYPE_NORMAL spacetype  */
#line 928 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_TypeAndSpace).Type=Type_Normal;		
								(yyval.m_TypeAndSpace).Space=(yyvsp[0].m_Identifier);
							}
#line 2882 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 67: /* nspace: TYPE_NORMAL  */
#line 932 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=Type_Normal;		
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2891 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 68: /* mspace: TYPE_MATRIX spacetype  */
#line 939 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_TypeAndSpace).Type=Type_Matrix;		
								(yyval.m_TypeAndSpace).Space=(yyvsp[0].m_Identifier);
							}
#line 2900 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 69: /* mspace: TYPE_MATRIX  */
#line 943 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_TypeAndSpace).Type=Type_Matrix;		
								(yyval.m_TypeAndSpace).Space=0;
							}
#line 2909 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 71: /* statements: statement  */
#line 954 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								// Create a list header and add the first element.
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddFirstChild((yyvsp[0].m_pParseNode));
							}
#line 2920 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 72: /* statements: statements statement  */
#line 961 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Add this one to the list.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 2929 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 73: /* statement: assignexpression ';'  */
#line 968 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                    {(yyval.m_pParseNode)->NoDup();}
#line 2935 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 74: /* statement: procedurecall ';'  */
#line 969 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								if((yyval.m_pParseNode)->ResType()!=Type_Void)
								{
									(yyval.m_pParseNode)=new CqParseNodeDrop();
									(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
									(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
								}
							}
#line 2948 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 75: /* statement: unresolvedcall ';'  */
#line 977 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								if((yyval.m_pParseNode)->ResType()!=Type_Void)
								{
									(yyval.m_pParseNode)=new CqParseNodeDrop();
									(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
									(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
								}
							}
#line 2961 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 76: /* statement: comm_function ';'  */
#line 985 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=new CqParseNodeDrop();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
							}
#line 2971 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 77: /* statement: RETURN expression ';'  */
#line 991 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Check that the return is valid
								if(functionReturnCountStack.empty())
									yyerror("return statement outside function scope");
								else
								{
									functionReturnCountStack.top()++;
									if(currentFunctionStack.top()->Type() != Type_Void)
									{
										if(functionReturnCountStack.top() > 1)
											yyerror("more than one return in function");
									}
									else if(functionReturnCountStack.top() > 0)
										yyerror("void functions cannot have a return");
								}
								// Create a cast node casting to the function return type.
								(yyval.m_pParseNode)=new CqParseNodeCast(currentFunctionStack.top()->Type());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
							}
#line 2996 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 80: /* statement: variable_definitions ';'  */
#line 1014 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Remove the variable nodes from these leaving just the 
								// intialisation code.
								// Each child of the variable_definitions is a CqParseNodeVariable
								CqParseNodeVariable* pVar=static_cast<CqParseNodeVariable*>((yyvsp[-1].m_pParseNode)->pFirstChild());
								while(pVar)
								{
									CqParseNodeVariable* pTemp=static_cast<CqParseNodeVariable*>(pVar->pNext());

									// If storage is not specified, local variable defaults to varying.
									pVar->SetDefaultStorage(Type_Varying);
									
									// Relink the initialisers, if any, after the variable.
									if(pVar->pFirstChild())
									{
										// Make sure that any change in the storage type is communicated to the initialiser
										pVar->pFirstChild()->UpdateStorageStatus();
										CqParseNode* pVarying=pVar->pFirstChild();
										pVarying->LinkAfter(pVar);
									}
									pVar->UnLink();
									delete(pVar);
									pVar=pTemp;
								}
							}
#line 3026 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 82: /* $@3: %empty  */
#line 1041 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Introduce a new scope for the block
								pushScope("b");
							}
#line 3035 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 83: /* $@4: %empty  */
#line 1046 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								popScope();
							}
#line 3043 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 84: /* statement: '{' $@3 statements $@4 '}'  */
#line 1049 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	
								(yyval.m_pParseNode)=(yyvsp[-2].m_pParseNode);	
							}
#line 3051 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 85: /* statement: '{' '}'  */
#line 1052 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                {	(yyval.m_pParseNode)=new CqParseNode(); }
#line 3057 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 86: /* statement: ';'  */
#line 1053 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	(yyval.m_pParseNode)=new CqParseNode(); }
#line 3063 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 87: /* statement: IF relation statement  */
#line 1055 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* pNew=new CqParseNodeConditional();
								pNew->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pNew->AddLastChild((yyvsp[-1].m_pParseNode));
								pNew->AddLastChild((yyvsp[0].m_pParseNode));
								(yyval.m_pParseNode)=pNew;
							}
#line 3075 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 88: /* statement: IF expression statement  */
#line 1063 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* relation=new CqParseNodeRelOp(Op_NE);
								relation->SetPos(ParseLineNumber,ParseStreamName.c_str());
								relation->AddFirstChild((yyvsp[-1].m_pParseNode));
								CqParseNode* pcomp=new CqParseNodeFloatConst(0);
								relation->AddLastChild(pcomp);

								CqParseNode* pNew=new CqParseNodeConditional();
								pNew->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pNew->AddLastChild(relation);
								pNew->AddLastChild((yyvsp[0].m_pParseNode));
								(yyval.m_pParseNode)=pNew;

							}
#line 3094 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 89: /* statement: IF relation statement ELSE statement  */
#line 1078 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* pNew=new CqParseNodeConditional();
								pNew->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pNew->AddLastChild((yyvsp[-3].m_pParseNode));
								pNew->AddLastChild((yyvsp[-2].m_pParseNode));
								pNew->AddLastChild((yyvsp[0].m_pParseNode));
								(yyval.m_pParseNode)=pNew;
							}
#line 3107 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 90: /* statement: IF expression statement ELSE statement  */
#line 1086 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* relation=new CqParseNodeRelOp(Op_NE);
								relation->SetPos(ParseLineNumber,ParseStreamName.c_str());
								relation->AddFirstChild((yyvsp[-3].m_pParseNode));
								CqParseNode* pcomp=new CqParseNodeFloatConst(0);
								relation->AddLastChild(pcomp);
								CqParseNode* pNew=new CqParseNodeConditional();
								
								pNew->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pNew->AddLastChild(relation);
								pNew->AddLastChild((yyvsp[-2].m_pParseNode));
								pNew->AddLastChild((yyvsp[0].m_pParseNode));
								(yyval.m_pParseNode)=pNew;
							}
#line 3126 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 91: /* loop_control: WHILE relation statement  */
#line 1105 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                         {
								(yyval.m_pParseNode)=new CqParseNodeWhileConstruct();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3137 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 92: /* loop_control: WHILE expression statement  */
#line 1111 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                         {
								CqParseNode* relation=new CqParseNodeRelOp(Op_NE);
								relation->SetPos(ParseLineNumber,ParseStreamName.c_str());
								relation->AddFirstChild((yyvsp[-1].m_pParseNode));
								CqParseNode* pcomp=new CqParseNodeFloatConst(0);
								relation->AddLastChild(pcomp);

								(yyval.m_pParseNode)=new CqParseNodeWhileConstruct();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild(relation);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3154 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 93: /* loop_control: FOR '(' expression ';' relation ';' expression ')' statement  */
#line 1124 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-6].m_pParseNode));
								CqParseNode* pW=new CqParseNodeWhileConstruct();
								pW->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild(pW);
								pW->AddLastChild((yyvsp[-4].m_pParseNode));
								pW->AddLastChild((yyvsp[0].m_pParseNode));
								pW->AddLastChild((yyvsp[-2].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3173 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 94: /* loop_control: FOR '(' expression ';' expression ';' expression ')' statement  */
#line 1139 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* relation=new CqParseNodeRelOp(Op_NE);
								relation->SetPos(ParseLineNumber,ParseStreamName.c_str());
								relation->AddFirstChild((yyvsp[-4].m_pParseNode));
								CqParseNode* pcomp=new CqParseNodeFloatConst(0);
								relation->AddLastChild(pcomp);

								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-6].m_pParseNode));
								CqParseNode* pW=new CqParseNodeWhileConstruct();
								pW->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild(pW);
								pW->AddLastChild(relation);
								pW->AddLastChild((yyvsp[0].m_pParseNode));
								pW->AddLastChild((yyvsp[-2].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3198 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 95: /* loop_control: SOLAR '(' ')' statement  */
#line 1160 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeSolarConstruct();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3208 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 96: /* loop_control: SOLAR '(' expression ',' expression ')' statement  */
#line 1166 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeSolarConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddFirstChild((yyvsp[-4].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-4].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3226 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 97: /* loop_control: ILLUMINATE '(' expression ')' statement  */
#line 1180 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeIlluminateConstruct();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3239 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 98: /* loop_control: ILLUMINATE '(' expression ',' expression ',' expression ')' statement  */
#line 1189 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeIlluminateConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddFirstChild((yyvsp[-6].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-4].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-4].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3259 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 99: /* loop_control: ILLUMINANCE '(' expression ')' statement  */
#line 1205 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeIlluminanceConstruct();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddFirstChild(new CqParseNodeStringConst(""));	// [category]
								pArg->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3276 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 100: /* loop_control: ILLUMINANCE '(' expression ',' expression ')' statement  */
#line 1218 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeIlluminanceConstruct();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddFirstChild((yyvsp[-4].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-4].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3294 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 101: /* loop_control: ILLUMINANCE '(' expression ',' expression ',' expression ')' statement  */
#line 1232 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeIlluminanceConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddFirstChild(new CqParseNodeStringConst(""));	// [category]
								pArg->AddFirstChild((yyvsp[-6].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-4].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-4].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3315 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 102: /* loop_control: ILLUMINANCE '(' expression ',' expression ',' expression ',' expression ')' statement  */
#line 1249 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeIlluminanceConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddFirstChild((yyvsp[-8].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-6].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-4].m_pParseNode));
								pArg->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-8].m_pParseNode)->NoDup();
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-4].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3337 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 103: /* loop_control: GATHER '(' expression ',' expression ',' expression ',' expression ',' expression ')' statement  */
#line 1267 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeGatherConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddLastChild((yyvsp[-10].m_pParseNode));
								pArg->AddLastChild((yyvsp[-8].m_pParseNode));
								pArg->AddLastChild((yyvsp[-6].m_pParseNode));
								pArg->AddLastChild((yyvsp[-4].m_pParseNode));
								pArg->AddLastChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-10].m_pParseNode)->NoDup();
								(yyvsp[-8].m_pParseNode)->NoDup();
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-4].m_pParseNode)->NoDup();
								(yyvsp[-2].m_pParseNode)->NoDup();
							}
#line 3361 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 104: /* loop_control: GATHER '(' expression ',' expression ',' expression ',' expression ',' expression ')' statement ELSE statement  */
#line 1287 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeGatherConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddLastChild((yyvsp[-12].m_pParseNode));
								pArg->AddLastChild((yyvsp[-10].m_pParseNode));
								pArg->AddLastChild((yyvsp[-8].m_pParseNode));
								pArg->AddLastChild((yyvsp[-6].m_pParseNode));
								pArg->AddLastChild((yyvsp[-4].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-12].m_pParseNode)->NoDup();
								(yyvsp[-10].m_pParseNode)->NoDup();
								(yyvsp[-8].m_pParseNode)->NoDup();
								(yyvsp[-6].m_pParseNode)->NoDup();
								(yyvsp[-4].m_pParseNode)->NoDup();
							}
#line 3386 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 105: /* loop_control: GATHER '(' expression ',' expression ',' expression ',' expression ',' expression texture_arguments ')' statement  */
#line 1308 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeGatherConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddLastChild((yyvsp[-11].m_pParseNode));
								pArg->AddLastChild((yyvsp[-9].m_pParseNode));
								pArg->AddLastChild((yyvsp[-7].m_pParseNode));
								pArg->AddLastChild((yyvsp[-5].m_pParseNode));
								pArg->AddLastChild((yyvsp[-3].m_pParseNode));
								// Add all extra arguments as further arguments to the function.
								CqParseNode* pParam=(yyvsp[-2].m_pParseNode)->pFirstChild();
								while(pParam!=0)
								{
									CqParseNode* pTemp=pParam->pNext();
									pArg->AddLastChild(pParam);
									pParam=pTemp;
								}
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-11].m_pParseNode)->NoDup();
								(yyvsp[-9].m_pParseNode)->NoDup();
								(yyvsp[-7].m_pParseNode)->NoDup();
								(yyvsp[-5].m_pParseNode)->NoDup();
								(yyvsp[-3].m_pParseNode)->NoDup();
							}
#line 3418 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 106: /* loop_control: GATHER '(' expression ',' expression ',' expression ',' expression ',' expression texture_arguments ')' statement ELSE statement  */
#line 1336 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeGatherConstruct(true);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg=new CqParseNode();
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pArg->AddLastChild((yyvsp[-13].m_pParseNode));
								pArg->AddLastChild((yyvsp[-11].m_pParseNode));
								pArg->AddLastChild((yyvsp[-9].m_pParseNode));
								pArg->AddLastChild((yyvsp[-7].m_pParseNode));
								pArg->AddLastChild((yyvsp[-5].m_pParseNode));
								// Add all extra arguments as further arguments to the function.
								CqParseNode* pParam=(yyvsp[-4].m_pParseNode)->pFirstChild();
								while(pParam!=0)
								{
									CqParseNode* pTemp=pParam->pNext();
									pArg->AddLastChild(pParam);
									pParam=pTemp;
								}
								(yyval.m_pParseNode)->AddLastChild(pArg);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								// Make sure that any assigns in the two expressions don't dup
								(yyvsp[-13].m_pParseNode)->NoDup();
								(yyvsp[-11].m_pParseNode)->NoDup();
								(yyvsp[-9].m_pParseNode)->NoDup();
								(yyvsp[-7].m_pParseNode)->NoDup();
								(yyvsp[-5].m_pParseNode)->NoDup();
							}
#line 3451 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 107: /* loop_modstmt: loop_mod number  */
#line 1367 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=(yyvsp[-1].m_pParseNode);
								// \todo: "number" should really be an integer
								// - it would better to encode this into the
								// grammer.
								TqFloat breakDepth = (yyvsp[0].m_FloatConst);
								TqInt breakDepthRounded = lround(breakDepth);
								if(breakDepthRounded <= 0)
									yyerror("Invalid break or continue - depth argument must be greater than 0");
								else if(breakDepthRounded != breakDepth)
									yyerror("Invalid break or continue - depth argument must be an integer");
								CqParseNode* pArg = new CqParseNodeFloatConst((yyvsp[0].m_FloatConst));
								pArg->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild(pArg);
							}
#line 3471 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 109: /* loop_mod: BREAK  */
#line 1386 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_pParseNode)=new CqParseNodeLoopMod(LoopMod_Break);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3480 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 110: /* loop_mod: CONTINUE  */
#line 1390 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_pParseNode)=new CqParseNodeLoopMod(LoopMod_Continue);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3489 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 112: /* expression: expression '.' expression  */
#line 1400 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator.", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild((yyvsp[-2].m_pParseNode));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3504 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 113: /* expression: expression '/' expression  */
#line 1411 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator/", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild((yyvsp[-2].m_pParseNode));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3519 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 114: /* expression: expression '*' expression  */
#line 1422 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator*", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild((yyvsp[-2].m_pParseNode));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3534 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 115: /* expression: expression '^' expression  */
#line 1433 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator^", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild((yyvsp[-2].m_pParseNode));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3549 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 116: /* expression: expression '+' expression  */
#line 1444 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator+", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild((yyvsp[-2].m_pParseNode));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3564 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 117: /* expression: expression '-' expression  */
#line 1455 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator-", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild((yyvsp[-2].m_pParseNode));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3579 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 118: /* expression: '-' expression  */
#line 1466 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operatorneg", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddFirstChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)=pFunc;
							}
#line 3593 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 120: /* expression: relation '?' expression ':' expression  */
#line 1477 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNode* pNew=new CqParseNodeQCond();
								pNew->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pNew->AddLastChild((yyvsp[-4].m_pParseNode));
								pNew->AddLastChild((yyvsp[-2].m_pParseNode));
								pNew->AddLastChild((yyvsp[0].m_pParseNode));
								(yyval.m_pParseNode)=pNew;
							}
#line 3606 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 121: /* cast_expr: type expression  */
#line 1489 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pCast=new CqParseNodeCast((yyvsp[-1].m_TypeAndSpace).Type);
								pCast->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pCast->AddFirstChild((yyvsp[0].m_pParseNode));
								
								TqInt Type=(TqInt)((yyvsp[-1].m_TypeAndSpace).Type&Type_Mask);
								CqString* pSpace=(yyvsp[-1].m_TypeAndSpace).Space;
								// Check if the type has a valid space associated
								if(pSpace!=0 && pSpace->compare("")!=0 && 
								  ((Type==Type_Point) ||
								   (Type==Type_Normal) ||
								   (Type==Type_Vector) ||
								   (Type==Type_Matrix) ||
								   (Type==Type_Color) ))
								{
									// Create a transform function.
									std::vector<SqFuncRef> funcTrans;
									CqString strTrans("transform");;
									if(Type==Type_Normal)	strTrans="ntransform";
									else if(Type==Type_Vector)	strTrans="vtransform";
									else if(Type==Type_Matrix)	strTrans="mtransform";
									else if(Type==Type_Color)	strTrans="ctransform";
									if(FindFunction(strTrans.c_str(), funcTrans))
									{
										(yyval.m_pParseNode)=new CqParseNodeFunctionCall(funcTrans);
										(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
									
										// And create a holder for the arguments.
										CqParseNode* pFromSpace=new CqParseNodeStringConst((*(yyvsp[-1].m_TypeAndSpace).Space).c_str());
										CqParseNode* pToSpace;
										if(Type != Type_Color)	pToSpace = new CqParseNodeStringConst("current");
										else					pToSpace = new CqParseNodeStringConst("rgb");
										(yyval.m_pParseNode)->AddLastChild(pFromSpace);
										(yyval.m_pParseNode)->AddLastChild(pToSpace);
										(yyval.m_pParseNode)->AddLastChild(pCast);
									}
								}
								else
									(yyval.m_pParseNode)->AddFirstChild(pCast);
							}
#line 3653 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 122: /* primary: number  */
#line 1535 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	
								(yyval.m_pParseNode)=new CqParseNodeFloatConst((yyvsp[0].m_FloatConst));
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3662 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 123: /* primary: SYMBOL  */
#line 1539 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_pParseNode)=new CqParseNodeVariable((yyvsp[0].m_pSymbol).VarRef);	
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3671 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 124: /* primary: ARRAY_SYMBOL  */
#line 1543 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=new CqParseNodeVariable((yyvsp[0].m_pSymbol).VarRef);	
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3680 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 125: /* primary: ARRAY_SYMBOL '[' expression ']'  */
#line 1547 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								(yyval.m_pParseNode)=new CqParseNodeVariableArray((yyvsp[-3].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3690 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 126: /* primary: STRING_LITERAL  */
#line 1552 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=new CqParseNodeStringConst((yyvsp[0].m_Identifier)->c_str());
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 3699 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 131: /* primary: '(' expression ')'  */
#line 1560 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {	
								(yyval.m_pParseNode)=(yyvsp[-1].m_pParseNode);
							}
#line 3707 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 132: /* primary: '(' expression ',' expression ',' expression ')'  */
#line 1564 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeTriple();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-5].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
							}
#line 3719 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 133: /* primary: '(' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ',' expression ')'  */
#line 1572 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeHexTuple();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-31].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-29].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-27].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-25].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-23].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-21].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-19].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-17].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-15].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-13].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-11].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-9].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-7].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-5].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-1].m_pParseNode));
							}
#line 3744 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 134: /* relational_operator: '>'  */
#line 1595 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {	(yyval.m_pParseNode)=new CqParseNodeRelOp(Op_G);	}
#line 3750 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 135: /* relational_operator: GE_OP  */
#line 1596 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	(yyval.m_pParseNode)=new CqParseNodeRelOp(Op_GE);	}
#line 3756 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 136: /* relational_operator: '<'  */
#line 1597 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {	(yyval.m_pParseNode)=new CqParseNodeRelOp(Op_L);	}
#line 3762 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 137: /* relational_operator: LE_OP  */
#line 1598 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	(yyval.m_pParseNode)=new CqParseNodeRelOp(Op_LE);	}
#line 3768 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 138: /* relational_operator: EQ_OP  */
#line 1599 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	(yyval.m_pParseNode)=new CqParseNodeRelOp(Op_EQ);	}
#line 3774 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 139: /* relational_operator: NE_OP  */
#line 1600 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {	(yyval.m_pParseNode)=new CqParseNodeRelOp(Op_NE);	}
#line 3780 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 140: /* relation: '(' relation ')'  */
#line 1604 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=(yyvsp[-1].m_pParseNode);
							}
#line 3788 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 141: /* relation: expression relational_operator expression  */
#line 1608 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=(yyvsp[-1].m_pParseNode);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddFirstChild((yyvsp[0].m_pParseNode));
							}
#line 3799 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 142: /* relation: relation AND_OP relation  */
#line 1615 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeLogicalOp(Op_LogAnd);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3810 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 143: /* relation: relation OR_OP relation  */
#line 1622 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeLogicalOp(Op_LogOr);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddFirstChild((yyvsp[-2].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3821 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 144: /* relation: '!' relation  */
#line 1628 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								(yyval.m_pParseNode)=new CqParseNodeUnaryOp(Op_LogicalNot);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3831 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 145: /* assignexpression: SYMBOL '=' expression  */
#line 1637 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssign((yyvsp[-2].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 3841 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 146: /* assignexpression: SYMBOL ADD_ASSIGN expression  */
#line 1643 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssign((yyvsp[-2].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator+", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild(new CqParseNodeVariable((yyvsp[-2].m_pSymbol).VarRef));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
							}
#line 3859 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 147: /* assignexpression: SYMBOL SUB_ASSIGN expression  */
#line 1657 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssign((yyvsp[-2].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator-", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild(new CqParseNodeVariable((yyvsp[-2].m_pSymbol).VarRef));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
							}
#line 3877 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 148: /* assignexpression: SYMBOL MUL_ASSIGN expression  */
#line 1671 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssign((yyvsp[-2].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator*", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild(new CqParseNodeVariable((yyvsp[-2].m_pSymbol).VarRef));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
							}
#line 3895 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 149: /* assignexpression: SYMBOL DIV_ASSIGN expression  */
#line 1685 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssign((yyvsp[-2].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator/", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								pFunc->AddLastChild(new CqParseNodeVariable((yyvsp[-2].m_pSymbol).VarRef));
								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
							}
#line 3913 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 150: /* assignexpression: ARRAY_SYMBOL '[' expression ']' '=' expression  */
#line 1699 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssignArray((yyvsp[-5].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
							}
#line 3924 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 151: /* assignexpression: ARRAY_SYMBOL '[' expression ']' ADD_ASSIGN expression  */
#line 1706 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssignArray((yyvsp[-5].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator+", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeVariableArray* pVar=new CqParseNodeVariableArray((yyvsp[-5].m_pSymbol).VarRef);
								pVar->AddLastChild((yyvsp[-3].m_pParseNode)->Clone());
								pFunc->AddLastChild(pVar);

								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
							}
#line 3946 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 152: /* assignexpression: ARRAY_SYMBOL '[' expression ']' SUB_ASSIGN expression  */
#line 1724 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssignArray((yyvsp[-5].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator-", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeVariableArray* pVar=new CqParseNodeVariableArray((yyvsp[-5].m_pSymbol).VarRef);
								pVar->AddLastChild((yyvsp[-3].m_pParseNode)->Clone());
								pFunc->AddLastChild(pVar);

								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
							}
#line 3968 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 153: /* assignexpression: ARRAY_SYMBOL '[' expression ']' MUL_ASSIGN expression  */
#line 1742 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssignArray((yyvsp[-5].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator*", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeVariableArray* pVar=new CqParseNodeVariableArray((yyvsp[-5].m_pSymbol).VarRef);
								pVar->AddLastChild((yyvsp[-3].m_pParseNode)->Clone());
								pFunc->AddLastChild(pVar);

								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
							}
#line 3990 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 154: /* assignexpression: ARRAY_SYMBOL '[' expression ']' DIV_ASSIGN expression  */
#line 1760 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode)=new CqParseNodeAssignArray((yyvsp[-5].m_pSymbol).VarRef);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("operator/", func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNodeVariableArray* pVar=new CqParseNodeVariableArray((yyvsp[-5].m_pSymbol).VarRef);
								pVar->AddLastChild((yyvsp[-3].m_pParseNode)->Clone());
								pFunc->AddLastChild(pVar);

								pFunc->AddLastChild((yyvsp[0].m_pParseNode));

								(yyval.m_pParseNode)->AddLastChild(pFunc);
								(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
							}
#line 4012 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 155: /* procedurecall: SYMBOL '(' proc_arguments ')'  */
#line 1781 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction(CqFuncDef::GetFunctionPtr((yyvsp[-3].m_pSymbol).FuncRef)->strName(), func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								while((yyvsp[-1].m_pParseNode)->pFirstChild()!=0)	pFunc->AddLastChild((yyvsp[-1].m_pParseNode)->pFirstChild());

								(yyval.m_pParseNode)=pFunc;
							}
#line 4026 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 156: /* procedurecall: SYMBOL '(' ')'  */
#line 1790 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction(CqFuncDef::GetFunctionPtr((yyvsp[-2].m_pSymbol).FuncRef)->strName(), func);
								CqParseNodeFunctionCall* pFunc=new CqParseNodeFunctionCall(func);
								pFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());

								(yyval.m_pParseNode)=pFunc;
							}
#line 4039 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 157: /* procedurecall: texture_type '(' proc_arguments ')'  */
#line 1799 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								(yyval.m_pParseNode) = (yyvsp[-3].m_pParseNode);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								CqParseNode* pArg = (yyvsp[-1].m_pParseNode)->pFirstChild();
								CqParseNode* pNameWithChannel = 0;

								while(pArg!=0)
								{
									if(pArg->NodeType() == ParseNode_TextureNameWithChannel)
									{
										pNameWithChannel = pArg;
										(yyval.m_pParseNode)->AddLastChild(pArg->pFirstChild());
										pArg = static_cast<CqParseNode*>(pArg->pNextSibling());
									}
									else
									{
										CqParseNode *pNextArg = static_cast<CqParseNode*>(pArg->pNextSibling());
										(yyval.m_pParseNode)->AddLastChild(pArg);
										pArg = pNextArg;
									}
								}
								if(NULL != pNameWithChannel)
								{
									CqParseNodeStringConst *cname = new CqParseNodeStringConst("channel");
									(yyval.m_pParseNode)->AddLastChild(cname);
									(yyval.m_pParseNode)->AddLastChild(pNameWithChannel->pFirstChild());
								}
							}
#line 4072 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 158: /* unresolvedcall: IDENTIFIER '(' proc_arguments ')'  */
#line 1832 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								Aqsis::log() << warning << "Unresolved function " << (yyvsp[-3].m_Identifier)->c_str() << " will be treated as a DSO at runtime" << std::endl;
								CqParseNode* pArgs=(yyvsp[-1].m_pParseNode);
								CqString strArgTypes("");
								if(pArgs)
								{
									CqParseNode* pArg=static_cast<CqParseNode*>(pArgs->pFirstChild());
									while(pArg)
									{
										strArgTypes+=CqParseNode::TypeIdentifier(pArg->ResType());
										pArg=static_cast<CqParseNode*>(pArg->pNext());
									}
								};

								CqFuncDef func_spec(Type_Nil,(yyvsp[-3].m_Identifier)->c_str(),"unresolved",strArgTypes.c_str(), (CqParseNode*)NULL, pArgs);
								CqParseNodeUnresolvedCall* pUFunc=new CqParseNodeUnresolvedCall(func_spec);
								pUFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());
								while((yyvsp[-1].m_pParseNode)->pFirstChild()!=0)	pUFunc->AddLastChild((yyvsp[-1].m_pParseNode)->pFirstChild());

								(yyval.m_pParseNode)=pUFunc;
							}
#line 4098 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 159: /* unresolvedcall: IDENTIFIER '(' ')'  */
#line 1854 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Need to emit a warning.
								// This should in theory be the eaiest case to handle
								// since there are no arguments that might need casting
								// later.
								Aqsis::log() << warning << "Unresolved function " << (yyvsp[-2].m_Identifier)->c_str() << " will be treated as a DSO at runtime" << std::endl;
								CqFuncDef func_spec(Type_Nil, (yyvsp[-2].m_Identifier)->c_str(), "unresolved","");
								CqParseNodeUnresolvedCall* pUFunc=new CqParseNodeUnresolvedCall(func_spec);
								pUFunc->SetPos(ParseLineNumber,ParseStreamName.c_str());

								(yyval.m_pParseNode)=pUFunc;
							}
#line 4115 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 161: /* proc_argument: expression '[' expression ']'  */
#line 1871 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqParseNodeTextureNameWithChannel *pNameChannel = new CqParseNodeTextureNameWithChannel();
								pNameChannel->AddFirstChild((yyvsp[-3].m_pParseNode));
								pNameChannel->AddLastChild((yyvsp[-1].m_pParseNode));
								(yyval.m_pParseNode) = pNameChannel;
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 4127 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 162: /* proc_arguments: proc_argument  */
#line 1881 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								// Create a list header, and add the first entry.
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 4138 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 163: /* proc_arguments: proc_arguments ',' proc_argument  */
#line 1888 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Add this entry to the list.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 4147 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 164: /* texture_type: TEXTUREMAP  */
#line 1895 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("texture", func);
								(yyval.m_pParseNode)=new CqParseNodeFunctionCall(func);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 4158 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 165: /* texture_type: ENVIRONMENT  */
#line 1901 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("environment", func);
								(yyval.m_pParseNode)=new CqParseNodeFunctionCall(func);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 4169 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 166: /* texture_type: BUMP  */
#line 1907 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("bump", func);
								(yyval.m_pParseNode)=new CqParseNodeFunctionCall(func);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 4180 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 167: /* texture_type: SHADOW  */
#line 1913 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("shadow", func);
								(yyval.m_pParseNode)=new CqParseNodeFunctionCall(func);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 4191 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 168: /* texture_type: OCCLUSION  */
#line 1919 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {
								std::vector<SqFuncRef> func;
								CqFuncDef::FindFunction("occlusion", func);
								(yyval.m_pParseNode)=new CqParseNodeFunctionCall(func);
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
							}
#line 4202 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 169: /* texture_arguments: ',' expression  */
#line 1928 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {
								// Create a list header and add the first entry.
								(yyval.m_pParseNode)=new CqParseNode();
								(yyval.m_pParseNode)->SetPos(ParseLineNumber,ParseStreamName.c_str());
								(yyval.m_pParseNode)->AddFirstChild((yyvsp[0].m_pParseNode));
							}
#line 4213 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 170: /* texture_arguments: texture_arguments ',' expression  */
#line 1935 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								// Add this entry to the list.
								(yyval.m_pParseNode)->AddLastChild((yyvsp[0].m_pParseNode));
							}
#line 4222 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 172: /* comm_type: SHADER_TYPE_ATMOSPHERE  */
#line 1948 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {(yyval.m_CommType)=CommTypeAtmosphere;}
#line 4228 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 173: /* comm_type: SHADER_TYPE_DISPLACEMENT  */
#line 1949 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                {(yyval.m_CommType)=CommTypeDisplacement;}
#line 4234 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 174: /* comm_type: LIGHTSOURCE  */
#line 1950 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {(yyval.m_CommType)=CommTypeLightsource;}
#line 4240 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 175: /* comm_type: SHADER_TYPE_SURFACE  */
#line 1951 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {(yyval.m_CommType)=CommTypeSurface;}
#line 4246 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 176: /* comm_type: ATTRIBUTE  */
#line 1952 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {(yyval.m_CommType)=CommTypeAttribute;}
#line 4252 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 177: /* comm_type: OPTION  */
#line 1953 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {(yyval.m_CommType)=CommTypeOption;}
#line 4258 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 178: /* comm_type: RENDERERINFO  */
#line 1954 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                {(yyval.m_CommType)=CommTypeRendererInfo;}
#line 4264 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 179: /* comm_type: INCIDENT  */
#line 1955 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {(yyval.m_CommType)=CommTypeIncident;}
#line 4270 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 180: /* comm_type: OPPOSITE  */
#line 1956 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                        {(yyval.m_CommType)=CommTypeOpposite;}
#line 4276 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 181: /* comm_type: TEXTUREINFO  */
#line 1957 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                            {(yyval.m_CommType)=CommTypeTextureInfo;}
#line 4282 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 182: /* comm_type: RAYINFO  */
#line 1958 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                    {(yyval.m_CommType)=CommTypeRayInfo;}
#line 4288 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 183: /* comm_function: comm_type '(' expression ',' SYMBOL ')'  */
#line 1964 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqVarDef* pVD=0;
								bool fError=false;
								
								if(((yyvsp[-3].m_pParseNode)->ResType()&Type_Mask)!=Type_String)	fError=true;

								// Get the variable, error if not a variable.
								if((yyvsp[-1].m_pSymbol).eType&1)	pVD=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef);
								
								if(pVD!=0 && !fError)
								{
									(yyval.m_pParseNode)=new CqParseNodeCommFunction((yyvsp[-5].m_CommType), (yyvsp[-1].m_pSymbol).VarRef);
									(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
								}
								else
								{
									yyerror("invalid variable reference");
									(yyval.m_pParseNode)=new CqParseNode();
								}
							}
#line 4313 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 184: /* comm_function: comm_type '(' expression ',' expression ',' SYMBOL ')'  */
#line 1986 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                            {
								CqVarDef* pVD=0;
								bool fError=false;
								
                                if(((yyvsp[-5].m_pParseNode)->ResType()&Type_Mask)!=Type_String)	fError=true;

							    if(((yyvsp[-3].m_pParseNode)->ResType()&Type_Mask)!=Type_String)	fError=true;

								// Get the variable, error if not a variable.
								if((yyvsp[-1].m_pSymbol).eType&1)	pVD=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef);
								
								if(pVD!=0 && !fError)
								{
									(yyval.m_pParseNode)=new CqParseNodeCommFunction((yyvsp[-7].m_CommType), (yyvsp[-1].m_pSymbol).VarRef);
								    (yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
								    (yyval.m_pParseNode)->AddLastChild((yyvsp[-5].m_pParseNode));
								}
								else
								{
									yyerror("invalid variable reference");
									(yyval.m_pParseNode)=new CqParseNode();
								}
							}
#line 4341 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 185: /* comm_function: comm_type '(' expression ',' ARRAY_SYMBOL ')'  */
#line 2010 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                                                        {
								CqVarDef* pVD=0;
								bool fError=false;
								
								if(((yyvsp[-3].m_pParseNode)->ResType()&Type_Mask)!=Type_String)	fError=true;

								// Get the variable, error if not a variable.
								if((yyvsp[-1].m_pSymbol).eType&1)	pVD=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef);
								
								if(pVD!=0 && !fError)
								{
									(yyval.m_pParseNode)=new CqParseNodeCommFunction((yyvsp[-5].m_CommType), (yyvsp[-1].m_pSymbol).VarRef);
									(yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
								}
								else
								{
									yyerror("invalid variable reference");
									(yyval.m_pParseNode)=new CqParseNode();
								}
							}
#line 4366 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;

  case 186: /* comm_function: comm_type '(' expression ',' expression ',' ARRAY_SYMBOL ')'  */
#line 2032 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"
                            {
								CqVarDef* pVD=0;
								bool fError=false;
								
                                if(((yyvsp[-5].m_pParseNode)->ResType()&Type_Mask)!=Type_String)	fError=true;

							    if(((yyvsp[-3].m_pParseNode)->ResType()&Type_Mask)!=Type_String)	fError=true;

								// Get the variable, error if not a variable.
								if((yyvsp[-1].m_pSymbol).eType&1)	pVD=CqVarDef::GetVariablePtr((yyvsp[-1].m_pSymbol).VarRef);
								
								if(pVD!=0 && !fError)
								{
									(yyval.m_pParseNode)=new CqParseNodeCommFunction((yyvsp[-7].m_CommType), (yyvsp[-1].m_pSymbol).VarRef);
								    (yyval.m_pParseNode)->AddLastChild((yyvsp[-3].m_pParseNode));
								    (yyval.m_pParseNode)->AddLastChild((yyvsp[-5].m_pParseNode));
								}
								else
								{
									yyerror("invalid variable reference");
									(yyval.m_pParseNode)=new CqParseNode();
								}
							}
#line 4394 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"
    break;


#line 4398 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2058 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"


namespace Aqsis
{

bool FindVariable(const char* name, SqVarRef& Ref)
{
	// First search in the current namespace, then in the global namespace.
	CqString strLocalVar(strNameSpace()+name);
	
	if(CqVarDef::FindVariable(strLocalVar.c_str(), Ref))	return(true);
	else	return(CqVarDef::FindVariable(name, Ref));

	
}


bool FindFunction(const char* name, std::vector<SqFuncRef>& Ref)
{
	// Search in the namespaces from local to global in order.
	CqString strNS(strNameSpace());
	
	do
	{
		CqString strLocalFunc(strNS+name);
		if(CqFuncDef::FindFunction(strLocalFunc.c_str(), Ref))
			return(true);

		// Extract the next namespace up.
		if( ( strNS.size() > 2 ) && ( strNS.substr( strNS.size()-2 ) == "::" ) )
		{
			strNS = strNS.substr( 0, strNS.size()-2 );
			strNS = strNS.substr(0, strNS.rfind("::")+strlen("::"));
		}

	}while( strNS.find_last_of("::") != std::string::npos );
	
	return(CqFuncDef::FindFunction(name, Ref));
}


void TypeCheck()
{
	// Typecheck any declared variables.
	TqUint i;
	for(i=0; i<gLocalVars.size(); i++)
	{
		bool needsCast = false;
		if(gLocalVars[i].pDefValue()!=0)
			gLocalVars[i].pDefValue()->TypeCheck(CqParseNode::pAllTypes(), Type_Last-1, needsCast, false);
	}

	// Typecheck any local functions.
	for(i=0; i<gLocalFuncs.size(); i++)
	{
		if(gLocalFuncs[i].pDef()!=0)
		{
			bool needsCast = false;
//			TqInt RetType=gLocalFuncs[i].Type();
			gLocalFuncs[i].pDefNode()->TypeCheck(CqParseNode::pAllTypes(), Type_Last-1, needsCast, false);
		}
	}

	bool needsCast = false;
	if(ParseTreePointer)
		ParseTreePointer->TypeCheck(CqParseNode::pAllTypes(), Type_Last-1, needsCast, false);
}


void Optimise()
{
	// Optimise any local functions.
	TqUint i;
	for(i=0; i<gLocalFuncs.size(); i++)
	{
		if(gLocalFuncs[i].pDef()!=0)
			gLocalFuncs[i].pDefNode()->Optimise();
	}

	if(ParseTreePointer)
		ParseTreePointer->Optimise();
}


CqString strNameSpace()	
{
	CqString strRes("");

	if(!ParseNameSpaceStack.empty())
		strRes=ParseNameSpaceStack.back().second;

	return(strRes);
}

void pushScope(CqString name, bool terminal)
{
	std::pair<bool,CqString> n;
	n.first = terminal;
	n.second = strNameSpace() + name + CqString(scopeID++) + "::";
	ParseNameSpaceStack.push_back(n);
}

CqString popScope()
{
	CqString old = ParseNameSpaceStack.back().second;
	ParseNameSpaceStack.erase(ParseNameSpaceStack.end()-1);
	return old;
}

void InitStandardNamespace()
{
	std::pair<bool,CqString> n;
	n.first = false;
	n.second = "";
	ParseNameSpaceStack.push_back(n);
}

void ProcessShaderArguments( CqParseNode* pArgs )
{
	if(pArgs)
	{
		// Each child of the variable_definitions is a CqParseNodeVariable
		CqParseNodeVariable* pVar=static_cast<CqParseNodeVariable*>(pArgs->pFirstChild());

		while(pVar)
		{
			// If storage is not specified, a shader parameter defaults to uniform.
			pVar->SetDefaultStorage(Type_Uniform);
			// Force the variable to be a parameter.
			pVar->SetParam();

			// Check if a default value has been specified.
			CqParseNode* pDefValue=pVar->pFirstChild();
			if(pDefValue!=0)
			{
				// Get a pointer to the local variable.
				CqVarDef* pVarDef=CqVarDef::GetVariablePtr(pVar->VarRef());
				if(pVarDef!=0)
				{
					CqParseNode Node;
					pDefValue->UnLink();
					CqParseNodeCast* pCast=new CqParseNodeCast(pVarDef->Type());
					Node.AddLastChild(pCast);
					pCast->AddLastChild(pDefValue);
					Node.Optimise();
					pVarDef->SetpDefValue(Node.pFirstChild());
					pVar->AddFirstChild( Node.pFirstChild() );
				}
			}
			else
			{
				Error(CqString("missing default value for shader instance variable \"")
						+ pVar->strName() + "\"",  pVar->LineNo());
			}
			pVar=static_cast<CqParseNodeVariable*>(pVar->pNext());
		}
	}
}

void Error(const CqString& message, TqInt lineNumber)
{
	AQSIS_THROW_XQERROR(XqParseError, EqE_Syntax,
		ParseStreamName.c_str() << " : " << lineNumber << " : " << message.c_str());
}

} // End Namespace

static void yyerror(const CqString& message)
{
	Error(message, ParseLineNumber);
}
