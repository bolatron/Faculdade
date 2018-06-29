tp: funcoes.o tp.o
		gcc funcoes.o tp.o -o tp -lm
tp.o: tp.c funcoes.h
		gcc -g -c tp.c -lm
funcoes.o: funcoes.h funcoes.c
		gcc -g -c funcoes.c -lm
