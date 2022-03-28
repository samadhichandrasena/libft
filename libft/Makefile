libft.o: ft_strlen.o ft_strcmp.o
	ar -r libft.o ft_strlen.o ft_strcmp.o

ft_strlen.o: ft_strlen.c 
	gcc -c ft_strlen.c -o ft_strlen.o

ft_strcmp.o: ft_strcmp.c 
	gcc -c ft_strcmp.c -o ft_strcmp.o

clean:
	rm *.o