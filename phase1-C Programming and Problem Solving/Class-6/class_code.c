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
/*
#include<stdio.h>
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
*/

/*

*/
//? input 0 program is stop.
/*
#include<stdio.h>
int main()
{ 
       int x;
       scanf("%d",&x);
        
       while (x !=0)
       {
         printf("%d\n",x+1);
         scanf("%d", &x);
       }
       
    return 0;
}
*/

//? loop stop with break.
/*
#include<stdio.h>
int main()
{ 
    
       while (1)
       {
        int x;
        scanf("%d", &x);
        if(x==0){
            break;
        }
         printf("%d\n",x+1);
          
       }
       printf("loop Finshed");
       
    return 0;
}
*/


//? loop  with continue concept.

/*
#include <stdio.h>

int main(){
    // Q3, Q7
    
    for(int question = 1; question <= 10; question++){
        
       
        if(question == 3 || question == 7){
            continue; //skip
        }
        
        printf("Answer Question %d\n", question);
    }
    
    printf("Exam finished\n");
    
    return 0;
}

*/



/*
#include <stdio.h>

int main(){
    // Q3, Q7
    
    for(int question = 1; question <= 10; question++){
        
        printf("Read Question %d\n",question);
        if(question == 3 || question == 7){
            continue; //skip
        }
        
        printf("Answer Question %d\n", question);
    }
    
    printf("Exam finished\n");
    
    return 0;
}


*/


/*
#include <stdio.h>

int main(){
    for(int i = 1; i <= 20; i++){
        if(i%2==1){
            // odd number
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
*/


/*
#include <stdio.h>

int main(){
    for(int i = 1; i <= 20; i++){
        if(i%2!=0){
            // odd number
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
*/

//? Now learn do-while loop
/*
#include <stdio.h>
int main()
{
    int pin;
printf("Enter PIN: ");

    scanf("%d", &pin);

    int correct_pin = 1234;

    while(1){
        if(pin == correct_pin){
            printf("Login Successful\n");
            break;
        }

        printf("Incorrect PIN\n");
        printf("Enter PIN: ");
        scanf("%d", &pin);
    }

    return 0;
}
*/


//? same but deferent way. but problem is 2 time user thake data newa lagce.
/*
#include <stdio.h>
int main()
{
    int pin;
printf("Enter PIN: ");

    scanf("%d", &pin);

    int correct_pin = 1234;

    while(pin !=correct_pin){
        printf("Incorrect PIN\n");
        printf("Enter PIN: ");
        scanf("%d", &pin);
    }

    printf(" Login Successful\n");
    return 0;
}
*/

//?Main do - while start.
/*
 #include<stdio.h>
int main(){
    int pin;

    int correct_pin = 1234;

    do {
        printf("Enter PIN: ");
        scanf("%d", &pin);
    }
    while(pin != correct_pin); 

    printf("Login Successful\n");

    return 0;
}

*/

//? Now learn Nested loop. (loops into the loop).  
/*
#include<stdio.h>
int main(){
    for(int i = 1; i <= 4; i++){
        printf("%d -> ", i);

        for(int j = 1; j <= 3; j++){
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
*/


//?Output:
/*
output:
1 -> 1 2 3 
2 -> 1 2 3 
3 -> 1 2 3 
4 -> 1 2 3 
*/
//? Square Shape (**)
/*
#include<stdio.h>
int main(){
    for(int i = 1; i <= 5; i++){
       
        // printf("*****\n");  ( ata k amra nested loop diye joita ta icce * dewa jabe)
           for( int j =1; j<= 50 ; j++)
                  {
                       printf("*");
                  }

                         printf("\n");
                          }

    return 0;
}
*/

//? Triengle Shape (**)
/*
#include<stdio.h>
int main(){
    for(int i = 1; i <= 10; i++){
       
        // printf("*****\n");  ( ata k amra nested loop diye joita ta icce * dewa jabe)
           for( int j =1; j<=i ; j++)
                  {
                       printf("*");
                  }

             printf("\n");
        }

    return 0;
}
*/


  