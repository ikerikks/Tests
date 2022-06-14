#include <stdio.h>



int main() {

  int number = 0;

  printf("Enter number : ");
  scanf("%d", &number);

  int count = 0;

  while (count <= 10) {
    int result = number * count;
    printf("%d*%d = %d\n", number, count, result);
    count++; 
  }

  return (0);

}
