#include <stdio.h>

int main(void) {
  int n, i, a;
  printf("Enter a number: ");
  scanf("%d", &n);
  a=0;
  for(i=1;i<n;i++){
    if(n%i==0)
      a=i+a;
    
  }
  if(a==n)
    printf("%d is a perfect number", n);
  else
    printf("%d is not a perfect number", n);
  return 0;
}