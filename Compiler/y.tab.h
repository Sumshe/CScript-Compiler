/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INCLUDE = 258,
    HEADER = 259,
    VOID = 260,
    MAIN = 261,
    RETURN = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    DO = 266,
    EXTERN = 267,
    STATIC = 268,
    REGISTER = 269,
    AUTO = 270,
    VAR = 271,
    SHORT = 272,
    LONG = 273,
    CHAR = 274,
    FLOAT = 275,
    DOUBLE = 276,
    SIGNED = 277,
    UNSIGNED = 278,
    PRINTF = 279,
    SCANF = 280,
    STRING = 281,
    FOR = 282,
    INCR = 283,
    DECR = 284,
    PLUS_E = 285,
    MIN_E = 286,
    LT = 287,
    GT = 288,
    LTE = 289,
    GTE = 290,
    EE = 291,
    NE = 292,
    INT = 293,
    ID = 294,
    NUMBER = 295
  };
#endif
/* Tokens.  */
#define INCLUDE 258
#define HEADER 259
#define VOID 260
#define MAIN 261
#define RETURN 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define DO 266
#define EXTERN 267
#define STATIC 268
#define REGISTER 269
#define AUTO 270
#define VAR 271
#define SHORT 272
#define LONG 273
#define CHAR 274
#define FLOAT 275
#define DOUBLE 276
#define SIGNED 277
#define UNSIGNED 278
#define PRINTF 279
#define SCANF 280
#define STRING 281
#define FOR 282
#define INCR 283
#define DECR 284
#define PLUS_E 285
#define MIN_E 286
#define LT 287
#define GT 288
#define LTE 289
#define GTE 290
#define EE 291
#define NE 292
#define INT 293
#define ID 294
#define NUMBER 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "src/gcc.y" /* yacc.c:1909  */

			struct{
						int type;
						char* str;
						double val;
			}type_val;
			int type;
			char *str;

#line 144 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
