# 42-Get_Next_Line

What is get_next_line?
GNL is an individual project at 42, the main concept of GNL is to reads a file line by line.

Disclaimer:
There are so many easier methods of doing this by using standard C functions. But the goal here is to be able to do it by using any functions from my libft and only the standard functions read, malloc and free.

Why would I use/try it?
You probably will never have to use this function if you are not a 42 student. The goal is to get better at C. As I said above, you can only use those three standard library functions:

read
malloc
free 

So it makes the project harder. But you can also use functions from your personal library.
After finishing this project, you'll definitely learn some more about static variables, pointers, arrays, linked lists (if you decide to do the bonus part), dynamic memory allocation and file manipulation.

# Installation:

1. git clone https://github.com/GorettiRivera/42-Get_Next_Line.git
2. cd 42-Get_Next_Line

# Compilation:
	make -C libft/ fclean && make -C libft/
	clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c -g
	clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c -g
	clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
  
  or
  
  Just run the attached Makefile: make

# Execution:
./test_gnl "file_path" | Read from a single file.

./test_gnl "file_path_1" "file_path_2" | Read from multiple files.

# Returning values:
1 | Line read.

0 | EOF.

-1 | Error.

