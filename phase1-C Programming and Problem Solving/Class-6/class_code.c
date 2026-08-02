//!Class-6:Introduction to Loops (while, for, nested)
//?just start
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


#include <stdio.h>
int main(){
    int count =0;
    while(count<10){
        printf("%d Rasel Ahmed\n",count);
        count++;
    }
    printf("count: %d\n",count);
    return 0;

}