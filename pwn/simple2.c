#include <stdio.h>

int main(int argc, char* argv[]) {
    
    int try;
    printf("Crackme Simple2\n");
    printf("Enter password: ");
    scanf("%d", &try);
    if(try == 0x64b4cc) {
        printf("%s%s%s%s%s%d%s%d%s\n", "fl", "ag", "{s", "im", "ple", 2,"_woofbr0_3", 4852,"}");
    } else {
        printf("Invalid Password\n");
    }

    return 0;
}
