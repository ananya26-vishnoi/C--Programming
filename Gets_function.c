#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter your complete name:\n");

    gets(str);
    printf("\n\nWelcome to Studytonight %s\n", str);
}