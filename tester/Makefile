strlen_test.out: strlen_test.o strcmp_test.o libft.o
	gcc -o strlen_test.out strlen_test.o libft.o && gcc -o strcmp_test.out strcmp_test.o libft.o

# strcmp_test.out: strcmp_test.o libft.o
# 	gcc -o strcmp_test.out strcmp_test.o libft.o

strlen_test.o: strlen_test.c 
	gcc -c strlen_test.c -o strlen_test.o

strcmp_test.o: strcmp_test.c
	gcc -c strcmp_test.c -o strcmp_test.o

libft.o: strlen_test.c strcmp_test.c
	cd .. && cd libft && make && cp libft.* ../tester

clean:
	rm *.o *.out && cd .. && cd libft && make clean