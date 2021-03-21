#include <stdio.h>
#include <unistd.h>

int main(void) {
  int choice, dogecoin=5;
  long donation=0, flagcost = 10000000;
  setvbuf(stdout,NULL,2,0);
  setvbuf(stdin,NULL,2,0);
  printf("Welcome to Cryptocurrency Simulator!\n");
  for (int i=0;i<50;i++) {
    printf("You currently have %d dogecoin.\n", dogecoin);
    printf("Choices:\n");
    printf("\t1. Work\n");
    printf("\t2. Donate dogecoin for the 'Rocket to the Moon!\n");
    printf("\t3. Buy flag( %d dogecoin)\n", flagcost);
    printf("\t4. Exit\n");
    printf("> ");
    scanf("%d", &choice);

    if (choice == 1) { 
      dogecoin++;
      printf("You earned 1 DOGECOIN! Woohoo! Only %d more to go!\n", flagcost-dogecoin);
      sleep(1);
    }
    else if (choice == 2) {
      printf("How many dogecoin would you like to donate for the 'Rocket to the Moon'?");
      scanf("%ld", &donation);
      if (donation > 0) {
        printf("Thanks for your donation!\n");
        dogecoin -= donation;
      } else {
        printf("Hey, we need this DOGECOIN for the rocket!\n");
      }
    }
    else if (choice == 3) {
      if (dogecoin > flagcost) {
        FILE *fp;
        char buff[255];
        fp = fopen("flag.txt", "r");
        fscanf(fp, "%s", buff);
        printf("Your flag is: %s\n", buff);
        break;
      } 
      else {
        printf("You don't have enough dogecoin!\n");
      }
    } 
    else {
      printf("Too-da-loo!\n");
      break;
    }
    exit(0);
  }
  return 0;
}
