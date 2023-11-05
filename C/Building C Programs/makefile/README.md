
# Program Compilation and Cleanup

This directory contains a simple program with source files `main.c`, `module1.c`, and `module2.c` that can be compiled using a Makefile. The Makefile automates the compilation process and provides a clean rule for cleaning up the generated files.

## Usage

### Compilation

To compile the program, follow these steps:

1. Open your terminal or command prompt.

2. Navigate to the directory where this README file and the Makefile are located.

3. Run the following command:

    ```bash
    make
    ```

   This will compile the source files into an executable named `prog`.

### Execution

Once the program is compiled, you can run it with the following command:

```bash
./prog
```

### Cleanup

To clean up and remove the generated files, follow these steps:

1. Open your terminal or command prompt.

2. Navigate to the directory where this README file and the Makefile are located.

3. Run the following command:

   ```bash
   make clean
   ```

   This will remove the executable and object files generated during compilation.

## Important Notes

- Make sure you have the GCC (GNU Compiler Collection) installed on your system to compile the program.
- Make sure the source files (`main.c`, `module1.c`, and `module2.c`) are in the same directory as the Makefile.
- The generated executable will be named `prog` and can be executed using `./prog`.

That's it! You can now compile, run, and clean up your program with ease using the provided Makefile.


