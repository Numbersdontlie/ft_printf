# Printf() - School 42 ✍️ 💻 📝

This project contains all files for the printf project from School 42 Berlin core curriculum. The project consist in duplicate the `printf()` function, part of the `stdio.h` library. 

It's not necessary to replicate the buffer management behavior of the original `printf()` function. Our function must handle the following parameters: 

* `char` type variables  
* `string` type variables
* `int` type variables
* `unsigned int` type variables
* hexadecimal `int` type variables (upper and lowercase)
* `pointer` type variables
* `%` type variables

## Approach 💡

To deal with the challenge of having a variable number of parameters the macros `va_list`, `va_start`, `va_end`, `va_arg` were used. The `ft_printf()` function calls the function `ft_strchr` to search the format in the original string, when it is found then is passed to the `ft_formatos` where it will check the format and call one of the functions that write the different variable types in screen.

## formats  🗂

The different type of variables are printed using a function for each of the formats: 

* `ft_print_char()` this function prints `char` and `string` type variables. Here are also handle the `ft_putchar()`, `ft_putchar_fd()`, `ft_putstr()`, `ft_printstr()`
* `ft_putstr()` this function prints `strings` type variables 
* `ft_printstr()` this function prints `strings` type variables and also handle the case when the string taken as parameter is `NULL`
* `ft_print_hexa()` this function prints `hexadecimal` type variables. It has auxiliary functions inside: `ft_hex_len`, `ft_put_hex`, `ft_print_hexa`
* `ft_print_nbr()` this function prints `integer` and `decimal` type variables. It calls the auxiliary functions `ft_itoa` to operate
* `ft_print_ptr()` this function prints `pointer` type variable. It has auxiliary functions: `ft_ptr_len()`, `ft_put_ptr()`
* `ft_print_unsigned()` this function prints `unsigned int` type variables 


## Utils 🔮

The utils functions used for this project where the following: 

* `ft_size()`: to get the size of an `integer` for later use in itoa 
* `ft_itoa()`: to convert and `integer` to `string`
* `ft_bzero()`: to put `\0` in the specified `pointer` 
* `ft_calloc()`: to allocate memory 
* `ft_strchr()`: to get a pointer to the first occurrence of the character after the `%` in the variable arguments 