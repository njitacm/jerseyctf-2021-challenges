#include <stdio.h>
#include <string.h>

// jctf{hexT0Int64bit-lemme-makeThisstring-gigantic-forKicks-Nice-work_0n-Cmps} 


void pain(char text[]) {

    char flag[76] = "";

    // strncat(flag, text, 76);
    strncat(flag, &text[31], 1);
    strncat(flag, &text[18], 1);
    strncat(flag, &text[21], 1);
    strncat(flag, &text[30], 1);
    strncat(flag, &text[12], 1);
    strncat(flag, &text[5], 1);
    strncat(flag, &text[16], 1);
    strncat(flag, &text[26], 1);
    strncat(flag, &text[1], 1);
    strncat(flag, &text[15], 1);
    strncat(flag, &text[25], 1);
    strncat(flag, &text[11], 1);
    strncat(flag, &text[21], 1);
    strncat(flag, &text[0], 1);
    strncat(flag, &text[20], 1);
    strncat(flag, &text[8], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[21], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[17], 1);
    strncat(flag, &text[16], 1);
    strncat(flag, &text[27], 1);
    strncat(flag, &text[27], 1);
    strncat(flag, &text[16], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[27], 1);
    strncat(flag, &text[23], 1);
    strncat(flag, &text[10], 1);
    strncat(flag, &text[16], 1);
    strncat(flag, &text[1], 1);
    strncat(flag, &text[5], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[4], 1);
    strncat(flag, &text[4], 1);
    strncat(flag, &text[21], 1);
    strncat(flag, &text[24], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[11], 1);
    strncat(flag, &text[3], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[3], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[3], 1);
    strncat(flag, &text[23], 1);
    strncat(flag, &text[11], 1);
    strncat(flag, &text[21], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[18], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[30], 1);
    strncat(flag, &text[9], 1);
    strncat(flag, &text[24], 1);
    strncat(flag, &text[28], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[18], 1);
    strncat(flag, &text[10], 1);
    strncat(flag, &text[4], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[14], 1);
    strncat(flag, &text[6], 1);
    strncat(flag, &text[18], 1);
    strncat(flag, &text[16], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[7], 1);
    strncat(flag, &text[9], 1);
    strncat(flag, &text[24], 1);
    strncat(flag, &text[10], 1);
    strncat(flag, &text[2], 1);
    strncat(flag, &text[15], 1);
    strncat(flag, &text[11], 1);
    strncat(flag, &text[22], 1);
    strncat(flag, &text[19], 1);
    strncat(flag, &text[27], 1);
    strncat(flag, &text[13], 1);
    strncat(flag, &text[4], 1);
    strncat(flag, &text[29], 1);

    printf("%s\n", flag);
}


void health() {
    printf("SikeThisDoesNothing");
}

void defnFlag(char arr[]) {
    printf("%c", arr[31]);
    printf("%c", arr[18]);
    printf("%c", arr[30]);
    printf("%c", arr[21]);
    printf("%c", arr[12]);
    printf("%c", arr[4]);
    printf("%c", arr[2]);
    printf("%c", arr[10]);
    printf("%c", arr[2]);
    printf("%c", arr[22]);
    printf("%c", arr[19]);
    printf("%c", arr[29]);
    printf("\n");
}


int main() {

    char compress_arr[32] = {'6', 'T', '_', 'g', 's', 'h', 'i', 'w', 'b', 'o', 'k', 'n', '{', 'p', 'N', '0', 'e', 'l', 'c', 'C', '4', 't', '-', 'a', 'r', 'I', 'x', 'm', 'K', '}', 'f', 'j'};

    int editThisPal;
    printf("Enter Password for Flag: ");
    scanf("%d", &editThisPal);

    if (editThisPal == 0x4523) {
        health();
    } else if (editThisPal == 0x88) {
        defnFlag(compress_arr);
    } else if (editThisPal == 0x3dc42) {
        pain(compress_arr);
    } else {
        printf("Sorry buddy! Try again\n");
    }

}