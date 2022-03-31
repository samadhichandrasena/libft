tests.out: tests.o libft.o
	gcc -o tests.out tests.o libft.o 

tests.o: tests.c 
	gcc -c tests.c -o tests.o

libft.o: tests.c
	cd .. && cd libft && make && cp libft.* ../tester

clean:
	rm *.o *.out && cd .. && cd libft && make clean