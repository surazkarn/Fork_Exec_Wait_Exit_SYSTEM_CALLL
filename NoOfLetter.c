//2. Write a program that accepts a word on the command line and prints the number of letters in it.

#include <stdio.h>
#include<unistd.h>

int main(int argc, char **argv)
//ARGument Count is int and stores number of command-line arguments passed by the user including the name of the program.
//So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
//ARGument Vector is array of character pointers listing all the arguments.

{
        int count = 0;
        char *str = argv[1];
        for (int i = 0; str[i] != '\0'; i++)
                count++;
        printf("Number of letters in %s = %d\n", str, count);
        return 0;
}
