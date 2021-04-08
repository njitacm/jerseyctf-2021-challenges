#include <stdio.h>

void vuln() {
    char smol_compress[31] = {'8', 'c', '_', 'b', '}', '{', 's', 'd', 'w', '9', 'p', 'l', 'm', '+', 'a', 'g', 'f', 'v', 'r', '-', '3', '5', '1', 'u', 't', '7', '2', 'e', 'o', '4', 'j'};
    printf("%c", smol_compress[30]);
    printf("%c", smol_compress[1]);
    printf("%c", smol_compress[24]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[5]);
    printf("%c", smol_compress[1]);
    printf("%c", smol_compress[12]);
    printf("%c", smol_compress[7]);
    printf("%c", smol_compress[19]);
    printf("%c", smol_compress[14]);
    printf("%c", smol_compress[18]);
    printf("%c", smol_compress[15]);
    printf("%c", smol_compress[6]);
    printf("%c", smol_compress[13]);
    printf("%c", smol_compress[23]);
    printf("%c", smol_compress[6]);
    printf("%c", smol_compress[27]);
    printf("%c", smol_compress[18]);
    printf("%c", smol_compress[22]);
    printf("%c", smol_compress[10]);
    printf("%c", smol_compress[23]);
    printf("%c", smol_compress[24]);
    printf("%c", smol_compress[29]);
    printf("%c", smol_compress[9]);
    printf("%c", smol_compress[0]);
    printf("%c", smol_compress[22]);
    printf("%c", smol_compress[20]);
    printf("%c", smol_compress[0]);
    printf("%c", smol_compress[25]);
    printf("%c", smol_compress[20]);
    printf("%c", smol_compress[26]);
    printf("%c", smol_compress[21]);
    printf("%c", smol_compress[2]);
    printf("%c", smol_compress[3]);
    printf("%c", smol_compress[23]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[28]);
    printf("%c", smol_compress[17]);
    printf("%c", smol_compress[27]);
    printf("%c", smol_compress[18]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[11]);
    printf("%c", smol_compress[28]);
    printf("%c", smol_compress[8]);
    printf("%c", smol_compress[4]);
}


int zuccess(char* argv[]) {
    int buff[20];    

    printf("Enter the inside password: ");
    gets(buff);


    if(buff == 0x4C ^ 23)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int main(int argc, char* argv[])
{
    

    if(argv[1] != 0x5163341)
    {
        return;
    }
    printf("You have successfully entered 1 command line argument\n");
    if(argv[2] != 0x328940) {
        return;
    }
    printf("Congrats! You entered 2 command line arguments\n");

    if(argc < 3) {
        printf("Tou-da-loo!\n");
    } else {
    
        int ret = zuccess(argv[3]);

        if(ret) {
            vuln();
        }
    }

    

    return 0;
}