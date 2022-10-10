#include <stdio.h>
int main()
{
  int i, a, num, sum = 0; 
  printf("Enter number of Element : ");
  scanf("%d", &num);
  printf("Enter the Numbers : ");
  for (i=0; i<num; i++){
      scanf("%d", &a);
      sum += a;
  }
 
  printf("Sum : %d", sum);
}
