CC = cc -g
LEX = flex
YACC = bison
CFLAGS = -DYYDEBUG=1
PROGRAMS5 = SqlParser
all: ${PROGRAMS5}

SqlParser: SqlParser.tab.o SqlParser.o
	${CC} -o $@ SqlParser.tab.o SqlParser.o
SqlParser.tab.c SqlParser.tab.h: SqlParser.y
	${YACC} -vd SqlParser.y
SqlParser.c: SqlParser.l
	${LEX} -o $*.c $<
SqlParser.o: SqlParser.c SqlParser.tab.h
.SUFFIXES: .pgm .l .y .c