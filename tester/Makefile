strlen_test.out: strlen_test.o libft.o
	gcc -o strlen_test.out strlen_test.o libft.o

strlen_test.o: strlen_test.c libft.o
	gcc -c strlen_test.c -o strlen_test.o

libft.o: strlen_test.c
	cd .. && cd libft && make && cp libft.* ../tester

clean:
	rm *.o *.out && cd .. && cd libft && make clean