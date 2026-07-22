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
/*
#include <stdio.h>
int main(){
    long long x;
    printf("Enter your net worth:");
    scanf("%lld",&x);
    printf("Your net worth is = %lld\n",x);
    return 0;
}

*/

//! character  data type
/*#include <stdio.h>
int main()
{
    char x= 'A';
    int y = x;
    printf("value of y= %d\n",y);
    return 0;
}*/

//! type-casting
/*
#include <stdio.h>
int main()
{
    float x= 25.788990;
    int result = (int)x;
    printf("value of:= %d\n",result);
    return 0;
}
*/
//!practice problem:
#include <stdio.h>
int main ()
{
    int x,lastDigit;
    printf(" Enter a number:");
    scanf("%d",&x);
    int y=x/10;
     y=y*10;
     lastDigit=x-y;
    printf("last number is: %d",lastDigit);
    return 0;
}