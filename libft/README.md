*This project has been created as part of the 42 curriculum by wboulazz.*

# Libft

## Description

Libft is a 42 project where you create your own C library by reimplementing standard C functions and adding useful utility functions.

This project helps you improve your understanding of C, including pointers, memory management, strings, and linked lists.

The library is built from scratch and can be reused in future 42 projects.

## Instructions

### Compilation

To compile the library, clone this repository:

```bash
git clone <repository-url>
```

Enter the project directory and run:

```bash
make
```

This will compile the source files and create the static library:

```bash
libft.a
```

### Available Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the library. |
| `make re` | Recompiles the library from scratch. |

### Using the Library

To use Libft in your own C project, include the header:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

Run your program:

```bash
./program
```

## Library Description

Libft contains several categories of functions:

### 1. Character Functions

Functions used to check and manipulate characters.

- `ft_isalpha` – Checks whether a character is alphabetic.
- `ft_isdigit` – Checks whether a character is a digit.
- `ft_isalnum` – Checks whether a character is alphanumeric.
- `ft_isascii` – Checks whether a character belongs to the ASCII character set.
- `ft_isprint` – Checks whether a character is printable.
- `ft_toupper` – Converts a lowercase character to uppercase.
- `ft_tolower` – Converts an uppercase character to lowercase.

### 2. String Functions

Functions used to manipulate and work with strings.

- `ft_strlen` – Calculates the length of a string.
- `ft_strchr` – Finds the first occurrence of a character.
- `ft_strrchr` – Finds the last occurrence of a character.
- `ft_strncmp` – Compares two strings up to a specified number of characters.
- `ft_strlcpy` – Copies a string with size limitations.
- `ft_strlcat` – Concatenates strings with size limitations.
- `ft_strnstr` – Searches for a substring within a string.
- `ft_strdup` – Duplicates a string.
- `ft_substr` – Extracts a substring.
- `ft_strjoin` – Joins two strings.
- `ft_strtrim` – Removes specified characters from the beginning and end of a string.
- `ft_split` – Splits a string using a delimiter.
- `ft_strmapi` – Applies a function to each character and creates a new string.
- `ft_striteri` – Applies a function to each character using its index.

### 3. Memory Functions

Functions used for memory manipulation and allocation.

- `ft_memset` – Fills memory with a specified byte.
- `ft_bzero` – Sets memory to zero.
- `ft_memcpy` – Copies memory from one location to another.
- `ft_memmove` – Copies memory while handling overlapping memory regions.
- `ft_memchr` – Searches for a byte in memory.
- `ft_memcmp` – Compares two memory areas.
- `ft_calloc` – Allocates memory and initializes it to zero.
- `ft_itoa` – Converts an integer into a string.

### 4. Conversion and Output Functions

Functions used for integer conversion and writing output.

- `ft_atoi` – Converts a string into an integer.
- `ft_putchar_fd` – Writes a character to a file descriptor.
- `ft_putstr_fd` – Writes a string to a file descriptor.
- `ft_putendl_fd` – Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` – Writes an integer to a file descriptor.

### 5. Linked List Functions 

This part introduces linked lists and dynamic data structures.

The library uses a linked list structure called `t_list`, where each node contains a pointer to its content and a pointer to the next node.

- `ft_lstnew` – Creates a new list node.
- `ft_lstadd_front` – Adds a node at the beginning of a list.
- `ft_lstsize` – Counts the number of nodes in a list.
- `ft_lstlast` – Returns the last node of a list.
- `ft_lstadd_back` – Adds a node at the end of a list.
- `ft_lstdelone` – Deletes one node and frees its content.
- `ft_lstclear` – Deletes and frees an entire list.
- `ft_lstiter` – Applies a function to the content of every node.
- `ft_lstmap` – Creates a new list by applying a function to each node's content.

## Resources

The following resources were used to understand C programming concepts, memory management, and standard library functions:

- [CS50 Stack Exchange — Memory Overlap in C](https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c) — Understanding overlapping memory regions and memory-copying functions.
- [C89 Rationale](https://www.open-std.org/Jtc1/sc22/WG14/www/C89Rationale.pdf) — Understanding the design decisions behind the C language standard.
- [YouTube Tutorial](https://youtu.be/ps_5YNZMagE) — Additional explanations about C programming.
- [Linux man-pages](https://man7.org/linux/man-pages/) — Documentation for C functions and system calls, accessed through the `man` command.

### AI Usage

AI tools were used as learning and development assistants throughout this project.

They were used for:
- Understanding C programming concepts, including pointers, memory allocation, and linked lists.
- Explaining standard C library functions.
- Identifying bugs and understanding compilation errors.
- Reviewing code and suggesting improvements.
- Understanding memory leaks and invalid memory access.
- Learning debugging and testing techniques.