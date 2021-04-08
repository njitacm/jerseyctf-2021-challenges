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
        char smol_compress[18] = {'t', '_', 'f', 'g', 's', 'a', 'o', 'n', 'D', 'u', 'r', 'i', '}', 'v', 'c', 'j', '{', 'e'};
        printf("%c", smol_compress[15]);
        printf("%c", smol_compress[14]);
        printf("%c", smol_compress[0]);
        printf("%c", smol_compress[2]);
        printf("%c", smol_compress[16]);
        printf("%c", smol_compress[3]);
        printf("%c", smol_compress[17]);
        printf("%c", smol_compress[0]);
        printf("%c", smol_compress[4]);
        printf("%c", smol_compress[1]);
        printf("%c", smol_compress[11]);
        printf("%c", smol_compress[4]);
        printf("%c", smol_compress[1]);
        printf("%c", smol_compress[13]);
        printf("%c", smol_compress[8]);
        printf("%c", smol_compress[5]);
        printf("%c", smol_compress[7]);
        printf("%c", smol_compress[3]);
        printf("%c", smol_compress[17]);
        printf("%c", smol_compress[10]);
        printf("%c", smol_compress[6]);
        printf("%c", smol_compress[9]);
        printf("%c", smol_compress[4]);
        printf("%c", smol_compress[12]);
    }

    return 0;
}