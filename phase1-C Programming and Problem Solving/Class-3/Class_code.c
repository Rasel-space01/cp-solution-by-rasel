//!Class-3: Data Type, Variables & Operations Practice Session with Real Problems
//? overflow, character asci() ,,type casting,,pow,, reminder%
//? floor, celling formula,, hint for contest1 problem.
//? pi,,digit extraction




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

//! type-casting ✅✅💥💚(class-3 start)👏
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
/*#include <stdio.h>
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
}*/
//!practice problem math.h:

/*
#include <stdio.h>
#include <math.h>
int main ()
{
    int a= 5,b=3;
    int c=pow (5,3);

    printf(" value of c=%d\n",c);
    return 0;
}

*/

//! Reminder &result
/*
#include <stdio.h>
int main(){
    int x=25,y=2;
    int result, rem;
    result=x/y;
    rem=x%y;
    printf("The result is: %d\n reminder is: %d\n",result,rem);
    return 0;
}
*/


//!ceiling find concept
/*
#include <stdio.h>
int main (){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a ,&b);
    int x= (a+b-1)/b;
    printf("The ceiling is: %d\n",x);
    return 0;
}
*/

/*

*/
//!Second last digit:
/*
#include <stdio.h>
int main()
{
   int x;
   printf( " Enter your number:");
   scanf("%d",&x);
   int lastdigit= 0, sdigit= 0;
   int y = x/10;
   y =y*10;
   lastdigit=x-y;
   int z = x/10;
   y= z/10;
   y=y*10;
   sdigit=z-y;
   printf("Last digit =%d\n second Last Digit %d\n", lastdigit, sdigit);
   return 0;
}
*/

