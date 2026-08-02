//! ✅✌Class-7: Practice Problems on Loop✅

#include<stdio.h>
int main()
{
    int n=21;
  for( int i=1; i<=n; i+=2){
    int space_count = (n-i)/2;
    for( int j=1; j<=space_count; j++){
        printf(" ");
    }
    for( int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
  }
  return 0;
}