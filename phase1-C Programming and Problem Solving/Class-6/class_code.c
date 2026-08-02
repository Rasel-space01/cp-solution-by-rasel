//!Class-6:Introduction to Loops (while, for, nested)
//!just start in while loop
/*
#include <stdio.h>
int main()
{
    while(1){
        printf("Ahmed rasel\n");

    } 
    return 0;
}
*/

/*
#include <stdio.h>
int main(){
    int count =0;
    while(1){
        printf("Rasel Ahmed%d",count);
        count++;
    }
    return 0;

}
*/ 


/*
#include <stdio.h>
int main(){
    int count =0;       //?intialization
    while(count<10){     //? condition
        printf("%d Rasel Ahmed\n",count);
        count++;    //?update
    }
    printf("count: %d\n",count);
    return 0;

}
*/

//! just start in for loop

/*
#include <stdio.h>
int main()
{
    for ( int count=0; count<5; count++){
        printf("%d Ahmed Rasel\n",count);
    }
    return 0;
}
*/

//? 1 to 100 print
/*
 #include <stdio.h>
int main()
{
    for ( int count=1; count<=100; count++){
        printf("%d\n",count);
    }
    return 0;
}
 */


//? 1 to 100 even(jur sonkha) number print 
 
/*
#include <stdio.h>
int main()
{
    for ( int num=2; num<=100; num=num+2){  //num+=2 
        printf("%d\n",num);
    }
    printf("loop Finished");
    return 0;
}
*/


//? 1 to 100 odd(bijur sonkha) number print

/*
#include <stdio.h>
int main()
{
    for ( int num=1; num<=100; num=num+2){  //num+=2 
        printf("%d\n",num);
    }
    printf("loop Finished");
    return 0;
}
*/

 /*
 #include <stdio.h>
int main()
{   int count= 0;
    for ( int i=0; i<=10; i++){  //i=i+1;
       count++;
    }
    printf("%d\n",count);
    return 0;
}
 */
   
/*
#include <stdio.h>
int main()
{   int count= 0;
    for ( int i=0; i<=10; i+=4){  //i=i+1;
       count++;
    }
    printf("%d\n",count);
    return 0;
}
*/


//? Input to the user ber ber input dite like 10 ber
int main()
{ 
    for ( int i=0; i<10; i++){  //i=i+1;
       int x;
       scanf("%d",&x);
       x++;
       printf("%d\n",x);

    }
    return 0;
}


