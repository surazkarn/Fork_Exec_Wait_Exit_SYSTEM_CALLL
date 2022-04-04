//1. Write a program that accepts a word on the command line and prints the number of vowels in it.

#include<stdio.h>
#include<unistd.h>

int main (int argc, char **argv) 
//ARGument Count is int and stores number of command-line arguments passed by the user including the name of the program.
//So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
//ARGument Vector is array of character pointers listing all the arguments.
{

    int c = 0;
    char *str = argv[1];

    for (int i = 0; str[i] !='\0'; i++)

    if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
    c++;

printf("Number of vowels in %s = %d\n",str ,c); 
    return 0;
}

