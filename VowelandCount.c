//3. Write a parent program that takes a word and gives an option to the user to choose between vowels and total count. 
//Depending on what the user chooses, it forks a child and the child replaces itself with either the vowel or the count program. 
//It also passes on the word to the replacing program.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    while (1)
    {
        pid_t pid = fork();
        int status = 0;
        wait(&status);
        if (pid == 0)
        {
            int choice = 0;
            char str[20];
            printf("Enter word: ");
            scanf("%s", str);
            printf("Press 1 for Vowel count\nPress 2 for letter count\nChoice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                char *args[] = {"./NoofVowel", str, NULL};
                execvp(args[0], args);
            }
            else if (choice == 2)
            {
                char *args[] = {"./NoOfLetter", str, NULL};
                execvp(args[0], args);
            }
        }
    }
    return 0;
}