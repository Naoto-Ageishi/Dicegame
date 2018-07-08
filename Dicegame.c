#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int d1,d2,total;
  char name[50];

  printf("What is your name?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  printf("Rolling the dice...\n");
  srand(time(NULL));
  d1 = rand() % 6 + 1;
  d2 = rand() % 6 + 1;
  total = d1 + d2;
  printf("Die 1: %d\n",d1);
  printf("Die 2: %d\n",d2);
  printf("Total value: %d\n",total);

  return 0;
}
