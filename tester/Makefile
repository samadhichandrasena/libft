strlen_test.out: strlen_test.o libft.o
	gcc -o strlen_test.out strlen_test.o libft.o
# gcc strlen_test.o libft.o

strlen_test.o: strlen_test.c libft.o
	gcc -c strlen_test.c -o strlen_test.o

libft.o: strlen_test.c
	cd .. && cd libft && make



# libft.o: ft_strlen.o
# 	ar -r libft.o ft_strlen.o ft_strcmp.o

# ft_strlen.o: ft_strlen.c ft_strcmp.o
# 	gcc -c ft_strlen.c -o ft_strlen.o

# ft_strcmp.o: ft_strcmp.c 
# 	gcc -c ft_strcmp.c -o ft_strcmp.o