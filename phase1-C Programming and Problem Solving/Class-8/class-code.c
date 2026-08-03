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

