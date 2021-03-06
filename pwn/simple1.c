#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
    char try[20];
    
    printf("Crackme Simple1\n");
    printf("Enter password: ");
    scanf("%s", try);
    if(strcmp(try, "p@ssw0rd") == 0) {
        printf("flag{simpl3_compl3t3_$$}\n");
    } else {
        printf("Invalid Password\n");
    }

    return 0;
}