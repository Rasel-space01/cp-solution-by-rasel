//! ✅Class-8: Introduction to Arrays and String.✅✌

//!✌ 1st practice😐:
/*
#include<stdio.h>
int main()
{ 
    int students[5]={60,56,63,65,87};
    printf("%d\n", students[3]);
    return 0;
}
*/



//! 2nd practice:
/*
#include<stdio.h>
int main()
{ 
    int students[5];

    students [0]=60;
    students [1]=56;
    students [2]=63;
    students [3]=65;
    students [4]=87;
    printf("%d\n", students[3]);
    return 0;
}

*/


//! 3rd practice:
/*
 #include<stdio.h>
int main()
{ 
    int students[5]={60,56,63,65,87};
    for(int i=0; i<5; ++i)
    {
     printf("%d", &students[i]);
    }
    return 0;
}

 */



//! 4th practice:

/*
#include<stdio.h>
int main()
{ 
    int students[5];

    for(int i=0; i<5; ++i)
     {
    scanf("%d", &students[i]);
     }
    
    for(int i=0; i<5; ++i)
    {
     printf("%d", &students[i]);
    }
    return 0;
}

*/

//! Final code.
/*
#include <stdio.h>

int main()
{

    int sz;
    scanf("%d",&sz);

    int students[sz];

    for(int i=0; i<sz; ++i)
    {
        scanf("%d", &students[i]);
    }

    for(int i=0; i<sz; ++i)
    {
        printf("%d ", students[i]);
    }

}

*/


//! Reverse array:

