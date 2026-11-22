*This project has been created as part of the 42 curriculum by wboulazz.*

# ft_printf

## Description

`ft_printf` is a 42/1337 project that consists of recreating the behavior of the standard C `printf()` function.

The main goal is to understand and implement variadic functions in C using `va_start`, `va_arg`, and `va_end`.

The project handles formatted output using the `write()` system call and supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal integer |
| `%i` | Prints an integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a hexadecimal number in lowercase |
| `%X` | Prints a hexadecimal number in uppercase |
| `%%` | Prints a percent sign |

## Instructions

### Compilation

Clone this repository:

```bash
git clone <repository-url>
cd ft_printf
```

Compile the library:

```bash
make
```

This generates the static library `libftprintf.a`.

### Makefile rules

| Command | Description |
|---|---|
| `make` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Rebuilds the library |

### Usage

Include the header in your C file:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number: %d\n", "World", 42);
    return (0);
}
```

Compile your program:

```bash
cc main.c libftprintf.a -o test
```

Run it:

```bash
./test
```

## Algorithm and Data Structure

### Algorithm

The implementation uses a sequential format-string parsing algorithm.

1. Initialize a `va_list` using `va_start`.
2. Iterate through the format string character by character.
3. When a normal character is found, print it using `write()` and increment the character counter.
4. When `%` is found, inspect the following character to identify the conversion specifier.
5. Call the corresponding helper function to retrieve and print the correct argument using `va_arg`.
6. Each helper function updates the character counter according to the number of characters printed.
7. Finish by calling `va_end` and return the total number of characters printed.

### Data Structure

The project uses `va_list` to access the variable arguments passed to `ft_printf`.

It also uses a simple integer counter to track the total number of characters printed.

### Technical Choices

- **Variadic functions:** Used to accept a variable number of arguments.
- **Helper functions:** Each conversion is handled separately to keep the code organized and maintainable.
- **`write()`:** Used to print characters directly to the specified output.
- **Character counter:** Used to reproduce the return behavior of the original `printf()` function.

## Resources

- [Variadic Functions in C – GeeksforGeeks](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)
- `man 3 printf` – printf manual page.

### AI Usage

AI was used as a learning resource to explain new concepts, clarify C programming topics, and improve my understanding of variadic functions and formatted output.