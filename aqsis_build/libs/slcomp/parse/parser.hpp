/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_OGARCIA138_AQSIS_BUILD_LIBS_SLCOMP_PARSE_PARSER_HPP_INCLUDED
# define YY_YY_HOME_OGARCIA138_AQSIS_BUILD_LIBS_SLCOMP_PARSE_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    SYMBOL = 259,                  /* SYMBOL  */
    ARRAY_SYMBOL = 260,            /* ARRAY_SYMBOL  */
    TYPE_FLOAT = 261,              /* TYPE_FLOAT  */
    TYPE_POINT = 262,              /* TYPE_POINT  */
    TYPE_STRING = 263,             /* TYPE_STRING  */
    TYPE_COLOR = 264,              /* TYPE_COLOR  */
    TYPE_NORMAL = 265,             /* TYPE_NORMAL  */
    TYPE_VECTOR = 266,             /* TYPE_VECTOR  */
    TYPE_VOID = 267,               /* TYPE_VOID  */
    TYPE_MATRIX = 268,             /* TYPE_MATRIX  */
    TYPE_UNIFORM = 269,            /* TYPE_UNIFORM  */
    TYPE_VARYING = 270,            /* TYPE_VARYING  */
    SHADER_TYPE_SURFACE = 271,     /* SHADER_TYPE_SURFACE  */
    SHADER_TYPE_VOLUME = 272,      /* SHADER_TYPE_VOLUME  */
    SHADER_TYPE_IMAGER = 273,      /* SHADER_TYPE_IMAGER  */
    SHADER_TYPE_TRANSFORMATION = 274, /* SHADER_TYPE_TRANSFORMATION  */
    SHADER_TYPE_DISPLACEMENT = 275, /* SHADER_TYPE_DISPLACEMENT  */
    SHADER_TYPE_LIGHT = 276,       /* SHADER_TYPE_LIGHT  */
    SHADER_TYPE_ATMOSPHERE = 277,  /* SHADER_TYPE_ATMOSPHERE  */
    ATTRIBUTE = 278,               /* ATTRIBUTE  */
    OPTION = 279,                  /* OPTION  */
    RENDERERINFO = 280,            /* RENDERERINFO  */
    INCIDENT = 281,                /* INCIDENT  */
    OPPOSITE = 282,                /* OPPOSITE  */
    LIGHTSOURCE = 283,             /* LIGHTSOURCE  */
    EXTERN = 284,                  /* EXTERN  */
    TEXTUREINFO = 285,             /* TEXTUREINFO  */
    RAYINFO = 286,                 /* RAYINFO  */
    OUTPUT = 287,                  /* OUTPUT  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    WHILE = 290,                   /* WHILE  */
    FOR = 291,                     /* FOR  */
    CONTINUE = 292,                /* CONTINUE  */
    BREAK = 293,                   /* BREAK  */
    RETURN = 294,                  /* RETURN  */
    ILLUMINATE = 295,              /* ILLUMINATE  */
    ILLUMINANCE = 296,             /* ILLUMINANCE  */
    SOLAR = 297,                   /* SOLAR  */
    GATHER = 298,                  /* GATHER  */
    TEXTUREMAP = 299,              /* TEXTUREMAP  */
    ENVIRONMENT = 300,             /* ENVIRONMENT  */
    BUMP = 301,                    /* BUMP  */
    SHADOW = 302,                  /* SHADOW  */
    OCCLUSION = 303,               /* OCCLUSION  */
    SETXCOMP = 304,                /* SETXCOMP  */
    SETYCOMP = 305,                /* SETYCOMP  */
    SETZCOMP = 306,                /* SETZCOMP  */
    SETCOMP = 307,                 /* SETCOMP  */
    ADD_ASSIGN = 308,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 309,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 310,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 311,              /* DIV_ASSIGN  */
    OR_OP = 312,                   /* OR_OP  */
    AND_OP = 313,                  /* AND_OP  */
    GE_OP = 314,                   /* GE_OP  */
    LE_OP = 315,                   /* LE_OP  */
    EQ_OP = 316,                   /* EQ_OP  */
    NE_OP = 317,                   /* NE_OP  */
    NEG = 318,                     /* NEG  */
    FLOAT_CONSTANT = 319,          /* FLOAT_CONSTANT  */
    STRING_LITERAL = 320           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 71 "/home/ogarcia138/aqsis/libs/slcomp/parse/parser.yy"

	CqParseNode::Pos m_Pos;
	CqParseNode*	m_pParseNode;
	TqInt			m_VarType;
	EqShaderType	m_ShaderType;
	TqFloat			m_FloatConst;
	CqString*	m_Identifier;
	struct{
		SqVarRef		VarRef;
		SqFuncRef		FuncRef;
		TqInt				eType;
	}				m_pSymbol;
	struct{
		TqInt				Type;
		CqString*	Space;
	}				m_TypeAndSpace;
	EqCommType		m_CommType;

#line 148 "/home/ogarcia138/aqsis_build/libs/slcomp/parse/parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_HOME_OGARCIA138_AQSIS_BUILD_LIBS_SLCOMP_PARSE_PARSER_HPP_INCLUDED  */
