// Sample 1-6
#include <stdio.h>

int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
       return i;
    }
    i++;
  }
  return 0;
}

main(){
  int input, fact;
  printf("Type in a number: ");
  scanf("%d", &input);
  if(input == 1){ printf("1 is not a prime number.\n"); return;}
  fact = getSmallestFactor(input);
  if(fact > 0){
    printf("%d is not a prime number. It can be divided by %d.\n", input, fact);
  }else{
    printf("%d is a prime number.\n", input);
  }
}


