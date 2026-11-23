*This project has been created as part of the 42 curriculum by aladomin.*

# Libft

## Description

Libft is my own C library, built at the beginning of the 42 curriculum. C's standard library is not allowed in most 42 projects, so this library re-creates the functions I need most, plus a few new ones, to reuse in future projects. It handles common, repetitive tasks in C, doing the heavy lifting so complex workflows feel as simple as a few words.

The library contains 43 functions, one per `ft_*.c` file, all declared in `libft.h` and compiled into a static archive, `libft.a`. Some files also contain small `static` helper functions that are only used inside that file.

### Part 1: re-coded libc functions

They behave like the standard functions with the same name, without the `ft_` prefix.

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2: additional functions

Functions that are not in the libc, or that exist in a different form.

| Function | What it does |
|---|---|
| `ft_substr` | Returns a new string copied from part of another string |
| `ft_strjoin` | Returns a new string made of two strings joined together |
| `ft_strtrim` | Returns a copy of a string with given characters removed from both ends |
| `ft_split` | Splits a string on a separator into a NULL-terminated array of strings |
| `ft_itoa` | Converts an `int` into a new string |
| `ft_strmapi` | Applies a function to each character of a string and returns the result as a new string |
| `ft_striteri` | Applies a function to each character of a string, in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, a string, a string followed by a newline, or a number to a file descriptor |

### Part 3: linked lists

Functions to work with the `t_list` linked list defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | What it does |
|---|---|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` / `ft_lstadd_back` | Adds a node at the start / end of a list |
| `ft_lstsize` | Counts the nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Frees one node and its content |
| `ft_lstclear` | Frees a whole list and its contents |
| `ft_lstiter` | Applies a function to the content of every node |
| `ft_lstmap` | Creates a new list by applying a function to the content of every node |

## Instructions

### Compiling

From the `libft` folder:

```sh
make        # builds libft.a
make clean  # removes the .o object files
make fclean # removes the .o files and libft.a
make re     # rebuilds everything from scratch
```

The files are compiled with `cc` and the flags `-Wall -Wextra -Werror`.

### Using the library in a project

Include the header in your code:

```c
#include "libft.h"
```

Then compile your program with the library:

```sh
cc -Wall -Wextra -Werror main.c -L path/to/libft -lft -I path/to/libft
```

### Testing

The code follows the 42 Norm and can be checked with [norminette](https://github.com/42School/norminette):

```sh
norminette *.c libft.h
```

The functions can be tested with [libfterator](https://github.com/Blaeste/libfterator) (Linux or WSL):

```sh
git clone https://github.com/Blaeste/libfterator.git
cd libfterator
./libfterator /path/to/libft
```

## Resources

- The Linux manual pages for each libc function, for example `man strlcpy` or `man memmove`
- The libft subject from the 42 intranet
- [The 42 Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) and [norminette](https://github.com/42School/norminette)
- [libfterator](https://github.com/Blaeste/libfterator), the test suite used to check the functions

**Use of AI:**

I wrote the functions myself. I then used Claude (Anthropic's AI assistant) to review some of them: it ran libfterator and norminette. I also used it to fix the way this README was written.
