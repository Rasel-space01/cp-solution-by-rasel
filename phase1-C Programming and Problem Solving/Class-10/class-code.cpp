//! Class-10: Introduction to Functions and Build in Functions


//! first program in c++.

/*

//*#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  x= pow(2,3);
    int y= 5;
    double z=5.7;
    double a = 34.56768;

    cout << fixed << setprecision (3) ;
    cout <<"value of z :" << z << endl;
        cout <<"value of A :" << a << endl;

    //printf(" value of x=%d\n",x);  // printf er replace inn c++ (cout)
    cout << x <<"" << y << endl;
    cout <<"value of x= "<< x << endl;
    return 0;
}


*/



//! scanf (cin) data from get to user.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  a,b;
    cin>> a>>b;
    int x=pow(a,b);
    cout << "value of x = "<< x << endl;
    return 0;
}

*/

//! we self using make funtion (myPow)

/*
#include<bits/stdc++.h>
using namespace std;
//self made funtion
long long myPow (int n, int p){ // input means perameter.
    long long output =1;
    for(int i =1; i<=p;i++){
       output =output*n;
    }
   return output;// user k return kore.
}

int main(){

    int  a,b;
    cin>> a>>b;
    int x=myPow(a,b);
    cout << "value of x = "<< x << endl;
    return 0;
}
*/


//! Self using make funtion (ceil)

/*
  #include<bits/stdc++.h>
using namespace std;

int ceil ( int a, int b ){
    return (a+b-1)/b;
}
int main(){

    int  a,b;
    cin>> a>>b;
    //int x=ceil(a,b);
   // cout << "value of x = "<< x << endl;
     cout << ceil(a,b) << endl;
    return 0;
}


*/

//! Self using make funtion (massage showing funtion).
/*
#include<bits/stdc++.h>
using namespace std;

void printHelloMessage() {
    cout << "Hello! This is CPS Academy" << endl << "Wellcome to our bootcamp" << endl;
}
int main () {
    printHelloMessage();

    return 0;
}

*/

//! Built in funtion .
#include<bits/stdc++.h>
using namespace std;
int main () {
    cout << max(5.7,5.3) << endl;
    return 0;
}




