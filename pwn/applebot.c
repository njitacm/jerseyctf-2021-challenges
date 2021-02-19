#include <stdio.h>
#include <unistd.h>

int main(void) {
  int choice, apples=5;
  long donation=0;
  setvbuf(stdout,NULL,2,0);
  setvbuf(stdin,NULL,2,0);
  printf("Welcome to AppleBot 2.0!\n");
  for (int i=0;i<50;i++) {
    printf("You currently have %d apples.\n", apples);
    printf("Choices:\n");
    printf("\t1. Work\n");
    printf("\t2. Donate apples to the AppleBot developers\n");
    printf("\t3. Buy flag(1000000000 apples)\n");
    printf("\t4. Exit\n");
    printf("> ");
    scanf("%d", &choice);

    if (choice == 1) { 
      apples++;
      printf("You earned 1 apple! Nice work! Only %d more to go!\n", 1000000000-apples);
      sleep(1);
    }
    else if (choice == 2) {
      printf("How many apples would you like to donate to the developers? ");
      scanf("%ld", &donation);
      if (donation > 0) {
        printf("Thanks for your donation!\n");
        apples -= donation;
      }
      else {
        printf("You can't do that! Stop trying to scam me! I lost enough apples with AppleBot 1.0...\n");
      }
    }
    else if (choice == 3) {
      if (apples > 1000000000) {
        FILE *fp;
        char buff[255];
        fp = fopen("flag.txt", "r");
        fscanf(fp, "%s", buff);
        printf("Your flag is: %s\n", buff);
        break;
      }
      else {
        printf("You don't have enough apples!\n");
      }
    }
    else if (choice == 4) {
      printf("Bye!\n");
      break;
    }
    else {
      break;
    }
  }
  return 0;
}
