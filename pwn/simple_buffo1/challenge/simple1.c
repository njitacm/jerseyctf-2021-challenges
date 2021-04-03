#include <stdio.h>
#include <string.h>


int main(void)
{
    char buff[46];
    int pass = 0;

    printf("Enter the password:");
    gets(buff);
    printf("\n");
    if(strcmp(buff, "yeetOReeNo"))
    {
        printf ("Wrong Password\n");
    }
    else
    {
        printf ("Correct Password\n");
        pass = 1;
    }

    if(pass)
    {
        system("cat flag.txt");
        printf("\n");
    }

    return 0;
}