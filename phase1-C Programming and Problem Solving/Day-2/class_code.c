//! int data type
/*
#include <stdio.h>
int main(){
    int x= 2147483647 ;
    printf(" number is=%d\n",x);
    x=x+3;
    printf("update value is = %d\n",x);
    return 0;
}
*/

//! long long  data type
#include <stdio.h>
int main(){
    long long x;
    printf("Enter your net worth:");
    scanf("%lld",&x);
    printf("Your net worth is = %lld\n",x);
    return 0;
}