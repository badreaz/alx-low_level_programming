0-makefile:
	- name of the executable: school
	- rules: all (builds your executable)
	- variables: none

1-makefile:
	- name of the executable: school
        - rules: all (builds your executable)
        - variables: CC, SRC
		* CC: the compiler to be used
		* SRC: the .c files

2-makefile:
	- name of the executable: school
        - rules: all (builds your executable)
        - variables: CC, SRC, OBJ, NAME
                * CC: the compiler to be used
                * SRC: the .c files
		* OBJ: the .o files
		* NAME: the name of the executable
	- The all rule recompile only the updated source files

3-makefile:
	- name of the executable: school
	- rules: all, clean, oclean, fclean, re
		* all: builds your executable
		* clean: deletes all Emacs and Vim temporary files along with the executable
		* oclean: deletes the object files
		* fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
		* re: forces recompilation of all source files
	- variables: CC, SRC, OBJ, NAME, RM
		* CC: the compiler to be used
		* SRC: the .c files
		* OBJ: the .o files
		* NAME: the name of the executable
		* RM: the program to delete files
	- The all rule recompile only the updated source files
	- The clean, oclean, fclean, re rules never fail

4-makefile:
	- name of the executable: school
        - rules: all, clean, oclean, fclean, re
                * all: builds your executable
                * clean: deletes all Emacs and Vim temporary files along with the executable
                * oclean: deletes the object files
                * fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
                * re: forces recompilation of all source files
        - variables: CC, SRC, OBJ, NAME, RM, CFLAGS
                * CC: the compiler to be used
                * SRC: the .c files
                * OBJ: the .o files
                * NAME: the name of the executable
                * RM: the program to delete files
		* CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
        - The all rule recompile only the updated source files
        - The clean, oclean, fclean, re rules never fail

5-island_perimeter:
	- returns the perimeter of the island described in grid.
	- grid is a list of list of integers:
		* 0 represents a water zone
		* 1 represents a land zone
		* One cell is a square with side length 1
		* Grid cells are connected horizontally/vertically (not diagonally).
		* Grid is rectangular, width and height don’t exceed 100
