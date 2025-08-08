# ft_printf 🖨️ 
A recreation of the printf function from the C standard library, implemented as part of the 42 curriculum to deepen knowledge about variable argument handling and output formatting.
---
## Description 📜
ft_printf works similarly to the original printf, allowing you to format and print data to the standard output.
It supports the following specifiers:
---
- `%c` → character
- `%s` → string
- `%p` → pointer
- `%d` / `%i` → decimal integers
- `%u` → unsigned integers
- `%x` / `%X` → hexadecimal (lowercase/uppercase)
- `%%` → prints the % symbol
### Supported Flags - Bonus:
- `-` left-justify output
- `1-9` specify field width or precision using an argument from the argument list
- `+` Add plus sign before absolute numbers
- ` ` Add a space sign before absolute numbers
- `0` zero-pad output
- `.` specify precision
---
## Technologies & Concepts 🛠️ 
- C language
- Uses variadic arguments for flexible input handling.
- `<stdarg.h>` library for variable arguments
- Code modularization
- Integration with libft
---
## Source Code Structure 📂
* **`ft_printf.c`**  
  Main entry point for the `ft_printf` function.  
  Iterates through the format string (first argument), detects specifiers, and decides whether to print characters directly or fetch/format arguments from the `va_list`.

* **`ft_check_specifier.c`**  
  Checks the specifier found in the format string and calls the appropriate function to handle it.

* **`ft_print_chars.c`**  
  Handles printing a single character and strings.

* **`ft_print_numbers.c`**  
  Prints signed and unsigned integers (`%d` / `%i`/ `%u`).

* **`ft_print_hexptr.c`**  
  Handles printing numbers in hexadecimal format (`%x` / `%X`).
  Handles printing memory addresses in hexadecimal format.(`%p`).
---

## Instructions ⚙️
- Run the command `make` to compile the `libftprintf.a` library.
After the compilation is complete, you can use the libftprintf.a library in your projects.

To clean the object files generated during compilation, run the command `make clean`.
To remove the libftprintf.a library, run the command `make fclean`.
To recompile the entire project, run the command `make re`.

## Grade: 100 / 100 🏅
I did not implemented yet the bonus for this project since I wanted to focus on reviewing what Iǘe learned so far and focus on studying for the MileStone 02 exam.

## Used Tests 🧪
- [Francinette] (https://github.com/xicodomingues/francinette)
- [printfTester] (https://github.com/Tripouille/printfTester)

## Useful Links 🔗
- Variadic functions in C – GeeksforGeeks
- stdarg.h documentation – cppreference
- Understanding printf format specifiers – Tutorialspoint
- Hexadecimal formatting in C – Stack Overflow

## License 📜
This project was developed for academic purposes at 42, but feel free to use it as reference or inspiration.