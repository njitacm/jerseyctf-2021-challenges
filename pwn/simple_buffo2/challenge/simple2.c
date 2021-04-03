#include <stdio.h>

void vuln() {
    system("cat flag.txt");
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