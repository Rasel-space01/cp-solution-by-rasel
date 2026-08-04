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
/*
#include <stdio.h>

int main()
{

    int sz;
    //how many input.dite chao?
    scanf("%d",&sz);

    int students[sz];
    
    for(int i=0; i<sz; ++i)
    {
        scanf("%d", &students[i]);
    }

    for(int i=sz-1; i>=0; --i)
    {
        printf("%d ", students[i]);
    }
   return 0;
}   

*/

//! arr1 to arr2 into the reverse order.
//?(একটি অ্যারেতে কিছু উপাদান ইনপুট নিয়ে, মূল অ্যারের মানগুলো পরিবর্তন না করে সম্পূর্ণ উল্টো (Reverse) ক্রমে অন্য একটি অ্যারেতে সংরক্ষণ করা এবং তা আউটপুট হিসেবে দেখানো।)

/*
#include <stdio.h>
int main()
{
    int sz;
    //how many input.dite chao?

    scanf("%d",&sz);
    int students[sz];

    int reverse_student[sz];

    for(int i=0; i<sz; ++i)
    {
    scanf("%d", &students[i]);
    }

    for(int i=0; i<sz; ++i)
     {
    int j = sz-1-i;
    reverse_student[j] = students[i];
    }

   for(int i=0; i<sz; ++i)
   {
    printf("%d ",reverse_student[i]);
   }
   return 0;
   }


*/


//!" অতিরিক্ত কোনো অ্যারে (Extra Space) ছাড়া Two-Pointer ও Swap ব্যবহার করে একটি অ্যারে ইন-প্লেস (In-Place) রিভার্স করা।"
   /*
   #include <stdio.h>

   int main()
   {
    int sz;
    scanf("%d", &sz);

    int students[sz];

    for(int i = 0; i < sz; ++i)
    {
        scanf("%d", &students[i]);
    }

    int l = 0, r = sz - 1;

    while(l < r)
    {
        // swap(students[l], students[r])
        int tmp = students[l];

        students[l] = students[r];
        students[r] = tmp;

        l += 1;
        r -= 1;
    }

    for(int i = 0; i < sz; ++i)
    {
        printf("%d ", students[i]);
    }

    return 0;
   }
   */
  

   //!" একটি অ্যারের সব উপাদান (Elements) লুপের মাধ্যমে এক এক করে যোগ করে মোট যোগফল (Sum) বের করা।
   
   /*
   #include <stdio.h>

   int main()
   {
    int sz;
    scanf("%d", &sz);

    int students[sz];

    for(int i = 0; i < sz; ++i)
    {
        scanf("%d", &students[i]);
    }

    int sum = 0;

    for(int i=0; i<sz; ++i)
    {
    sum += students[i];
   }

   printf("sum = %d\n",sum);
    return 0;
   }
   */
   
   //! Sum of Even and Odd Indexed Elements in an Array (অ্যারের জোড় ও বিজোড় ইনডেক্সের উপাদানগুলোর আলাদা যোগফল নির্ণয়)
   /*
    #include <stdio.h>

   int main()
   {
    int sz;
    scanf("%d", &sz);

    int students[sz];

    for(int i = 0; i < sz; ++i)
    {
        scanf("%d", &students[i]);
    }

    int evensum = 0;
    int oddsum = 0;

    for(int i=0; i<sz; ++i)
   {
    if(i%2 == 0)//even
    {
        evensum += students[i];
    }
    else //odd
    {
        oddsum += students[i];
    }
   }

   printf("evensum = %d\n",evensum);
   printf("oddsum = %d\n",oddsum);
    return 0;
   }
  
   */
   
   //! একটি অ্যারের প্রথম উপাদানটিকে সর্বোচ্চ ও সর্বনিম্ন ধরে নিয়ে, লুপের মাধ্যমে বাকি সব উপাদানের সাথে তুলনা করে সবচেয়ে বড় ও সবচেয়ে ছোট সংখ্যাটি বের করার প্রোগ্রাম এটি।
  
   /*
   #include <stdio.h>

   int main()
   {
    int sz;
    scanf("%d", &sz);

    int students[sz];

    for(int i = 0; i < sz; ++i)
    {
        scanf("%d", &students[i]);
    }
     int maximum = students[0];
     int minimum = students[0];
   

    for(int i=1; i<sz; ++i)
    {
    if(maximum<students[i])
    {
        maximum = students[i];
    }
    if(minimum>students[i])
    {
        minimum = students[i];
    }
  }

   printf("maximum = %d\n",maximum);
   printf("minimum = %d\n",minimum);
     
    return 0;
   }


   */
//! Find maximum number index number.
/*
 #include <stdio.h>

   int main()
   {
    int sz;
    scanf("%d", &sz);

    int students[sz];

    for(int i = 0; i < sz; ++i)
    {
        scanf("%d", &students[i]);
    }
     int maximum = students[0];
     int mxidx =1;
     int minimum = students[0];
   

    for(int i=0; i<sz; ++i)
    {
        if ( students[mxidx] <students[i]){
           mxidx =i;
        }
    if(maximum<students[i])
    {
        maximum = students[i];
    }
    if(minimum>students[i])
    {
        minimum = students[i];
    }
  }

   printf("maximum = %d\n",maximum);
    printf("mxindex = %d\n",mxidx);;
   printf("minimum = %d\n",minimum);
     
    return 0;
   }

*/
  
//! Problem: https://atcoder.jp/contests/abc284/tasks/abc284_b

/*
 #include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--)
    {
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; ++i)
    {
        scanf("%d",&arr[i]);
    }

    int odd = 0;

    for(int i=0; i<n; ++i)
    {
        if(arr[i]%2) //ODD
        {
            odd += 1;
        }
    }

    printf("%d\n",odd);
   }
}
*/

//?✌***************** String *******************✌?//

//! 1st practice.

/*
#include<stdio.h>
int main()
{   // ( It,s more practical)
    char str[5] ="abcde"; 
            //Or
     //char* str = "sf";       

     printf("%s\n",str); 
     
      return 0;
}

*/


//! 2nd practice problem.
/*
#include<stdio.h>
int main()
{
    char str[50] ="ab"; 
            
     
      printf("%c\n",str[3]); // %c means char akta array
      return 0;
}
*/

//! 3rd practice problem.

/*
#include<stdio.h>
int main()
{
    char str[5] ="ab"; 
            
     //printf("%s\n",str);
      printf("%s\n",str[3]);// 3 no index null print korbe
      return 0;
}

*/


//! 4th practice problem.

/*
#include <stdio.h>

int main()
{
    char str[5]; //{'a','b','c','d','e'
    // printf("%c\n", str[3]);
    str[0] = 'a';
    str[1] = 'b';
    str[2] = '\0';
    str [3]= 'c';
    str [4]= 'd';//still ab print korbe.

    printf("%s\n", str);
}
*/

//! 5th practice problem( User to get input for string)
 
/*
#include <stdio.h>

int main()
{
    // int a = 10+5;
     
    char str[5];
    for(int i=0; i<5; ++i)
    {
        char c;
        scanf("%c",&c);
        if(c=='\n')
        {
            str[i] = '\0';
            break;
        }
        str[i] = c;
    }

    printf("%s\n", str);
}

*/


//? Other way .

/*
#include <stdio.h>

int main()
{
    // int a = 10+5;
    char str[5];
    // scanf("%s", str);
    gets(str);// all input take include space 
    //fgets(str,5,stdin);
    // puts(str);  (extra new line print)
    printf("%s\n", str);
}

*/



//! Length of string
/*
#include <stdio.h>

int main()
{
    char str[12];
    // scanf("%s",str);
    gets(str);
    // fgets(str,5,stdin);

    int len = 0;
    for(int i=0; i<12; ++i)
    {
        if(str[i]=='\0')
        {
            break;
        }
        else len++;
    }

    printf("size of the string = %d\n",len);

}
*/
//? Another way to example.
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[12];
    // scanf("%s",str);
    gets(str);
    // fgets(str,5,stdin);

    int len = strlen(str);// need a header file

    printf("size of the string = %d\n",len);

}
*/


//? 1st bolei diyece 5 length (abcde) string.

/*
#include <stdio.h>
#include <string.h>

int main()
{
    int sz;
    scanf("%d",&sz);
    //ekhane extra new line
    char c; //new line ta ei variable e nibo
    //char onnobabe o input newa jai
    //c=getchar();
    scanf("%c",&c);

   
//    if(c=='\n')
//    {
//     printf("newline\n");
//    }
   

  char str[sz+1];
  char str2[sz+1];

  gets(str);
  gets(str2);

  puts(str);
  puts(str2);
 

}
*/

//!ASCII and ascii table

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'd';
    c += 1;
    //int n=c;
    printf("%c\n",c);
    return 0;
}




 