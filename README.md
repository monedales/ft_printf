# ft_printf 🖨️ 
A recreation of the printf function from the C standard library, implemented as part of the 42 curriculum to deepen knowledge about variable argument handling and output formatting.

## Description 📜
ft_printf works similarly to the original printf, allowing you to format and print data to the standard output.
It supports the following specifiers:

- `%c` → character
- `%s` → string
- `%p` → pointer
- `%d` / `%i` → decimal integers
- `%u` → unsigned integers
- `%x` / `%X` → hexadecimal (lowercase/uppercase)
- `%%` → prints the % symbol
## Supported Flags - Bonus:
- `-` left-justify output
- `1-9` specify field width or precision using an argument from the argument list
- `+` Add plus sign before absolute numbers
- ` ` Add a space sign before absolute numbers
- `0` zero-pad output
- `.` specify precision

## Technologies & Concepts 🛠️ 
- C language
- Uses variadic arguments for flexible input handling.
- `<stdarg.h>` library for variable arguments
- Code modularization
- Integration with libft

## Source codes
* ```ft_printf.c```
	Implements the main logic of the function. Reads through the format string (first argument sent in the function, mandatory) byte by byte and decides whether it should be printed as is, or if it should invoke one argument from the variable argument list to convert it into its printable format.

* ```ft_printf_utils_1.c``` and ```ft_printf_utils_2.c``` 
	Auxiliary functions used to handle the arguments, convert them to the corresponding % format, and print the arguments.

## Instructions
- Run the command `make` to compile the `libftprintf.a` library.
After the compilation is complete, you can use the libftprintf.a library in your projects.

To clean the object files generated during compilation, run the command `make clean`.
To remove the libftprintf.a library, run the command `make fclean`.
To recompile the entire project, run the command `make re`.

## Grade: 100 / 100
I did not implemented yet the bonus for this project since I wanted to focus on reviewing what Iǘe learned so far and focus on studying for the MileStone 02 exam.

## Used Tests
- Francinette: https://github.com/xicodomingues/francinette
- printfTester: https://github.com/Tripouille/printfTester

## Useful Links 🔗
- Variadic functions in C – GeeksforGeeks
- stdarg.h documentation – cppreference
- Understanding printf format specifiers – Tutorialspoint
- Hexadecimal formatting in C – Stack Overflow

## License 📜
This project was developed for academic purposes at 42, but feel free to use it as reference or inspiration.