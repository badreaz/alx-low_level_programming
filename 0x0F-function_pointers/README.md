function_pointers.h:
 Contain all project function's prototype.

0-print_name.c:
 function that print a name using function pointer.
 - Prototype: void print_name(char *name, void (*f)(char *));

1-array_iterator.c:
 function that executes a function given as a parameter on each element of an array.
 - Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

2-int_index.c:
 function that searches for an integer.
 - Prototype: int int_index(int *array, int size, int (*cmp)(int));

3-main.c:
 program that performs simple operations.
 - Usage: calc num1 operator num2

3-op_functions.c:
 5 functions that use operators in two arguments.
 - Prototype: int op_add(int a, int b);
 - Prototype: int op_sub(int a, int b);
 - Prototype: int op_mul(int a, int b);
 - Prototype: int op_div(int a, int b);
 - Prototype: int op_mod(int a, int b);

3-get_op_func.c:
 function that selects the function to perform the operation user asked of.
 - Prototype: int (*get_op_func(char *s))(int, int);

3-calc.h:
 Contain 3-* prototypes and struct.

100-main_opcodes.c:
 program that prints the opcodes of its own main function.
 - Usage: ./main number_of_bytes
