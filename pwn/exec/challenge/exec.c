#include <stdio.h>

// python3 -c "retStr = '{\'';retStr += '\',\''.join(list(input('Enter string:'))) ;retStr+='\'}'; print(retStr)"
// echo "jctf{ran_an_ELF_Ex3cutable}" |  python3 -c "retStr = '{\'';i = input(); retStr += '\',\''.join(list(i)) ;retStr+='\'}'; print(retStr, len(i))"


int main() {

    char smol_compress[19] = {'b', 'c', 'u', 'L', 'r', 'a', 'j', 'E', 'f', 'F', 'l', '{', '3', 't', '}', 'e', '_', 'n', 'x'};
    
    printf("%c", smol_compress[6]);
    printf("%c", smol_compress[1]);
    printf("%c", smol_compress[13]);
    printf("%c", smol_compress[8]);
    printf("%c", smol_compress[11]);
    printf("%c", smol_compress[4]);
    printf("%c", smol_compress[5]);
    printf("%c", smol_compress[17]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[5]);
    printf("%c", smol_compress[17]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[7]);
    printf("%c", smol_compress[3]);
    printf("%c", smol_compress[9]);
    printf("%c", smol_compress[16]);
    printf("%c", smol_compress[7]);
    printf("%c", smol_compress[18]);
    printf("%c", smol_compress[12]);
    printf("%c", smol_compress[1]);
    printf("%c", smol_compress[2]);
    printf("%c", smol_compress[13]);
    printf("%c", smol_compress[5]);
    printf("%c", smol_compress[0]);
    printf("%c", smol_compress[10]);
    printf("%c", smol_compress[15]);
    printf("%c", smol_compress[14]);


    printf("\n");
    return 0;
}

