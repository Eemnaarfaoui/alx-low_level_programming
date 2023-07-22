What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm

Create all the .c files using vi 
gcc -c *.c to create object files 
ar rcs libmy.a // to create the library fie
run ls to list all the files
ar rcs libmy.a *.o// to copy all the .co files into libmy.a
run ar -t libmy.a

TASK2

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
create the  create_static_lib.sh  using vi and the type the below script  : 
#!/bin/bash
  2 gcc -Wall -pedantic -Werror -Wextra -c *.c
  3 ar -rc liball.a *.o
  4 ranlib liball.a

  convert it to an executable file with chmod u+x
  run the file ./ create_static_lib.sh
