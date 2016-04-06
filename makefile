all:raizquadrada


raizquadrada:raiz.o
	gcc raiz.o -o raizquadrada_v1

raiz.o: raiz.c
	gcc -c raiz.c


clean:
	rm *.o raizquadrada_v1
