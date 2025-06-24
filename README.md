# Printf() - School 42 ✍️ 💻 📝

This project contains all files for the printf project from School 42 Berlin core curriculum. The project consist in duplicate the `printf()` function, part of the `stdio.h` library. 

It's not necessary to replicate the buffer management behavior of the original `printf()` function. Our function must handle the following parameters: 

* `char` type variables  
* `string` type variables
* `int` type variables
* `unsigned int` type variables
* `hexadecimal int` type variables (upper and lowercase)
* `pointer` type variables
* `%` type variables

## Approach 💡

To deal with the challenge of having a variable number of parameters the macros `va_list`, `va_start`, `va_end`, `va_arg` were used. The `ft_printf()` function calls the function `ft_formatos` to search the format in the original string, when it is found it will check the format and call one of the functions that write the different variable types in screen. Also we will declare a pointer to an integer which will be called everytime to count the number of characters printed by the program. 

## formats  🗂

The different type of variables are printed using a function for each of the formats: 

* `ft_print_char()` this function prints `char` and `string` type variables.
* `ft_print_hexa()` this function prints `hexadecimal` type variables.
* `ft_print_nbr()` this function prints `integer` and `decimal` type variables.
* `ft_print_ptr()` this function prints `pointer` type variable.
* `ft_print_unsigned()` this function prints `unsigned int` type variables. 

## Workflow 

![image.png](attachment:77a1c169-664a-4584-9206-4cd88ba68101:image.png)