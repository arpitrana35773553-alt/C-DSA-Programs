
// SOLVING PATTERN PROBLEMS USING LOOPING STATEMENTS.

/////////////////////////PROBLEM 1///////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int n =3;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

////////////////////////PROBLEM 2////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 65;
    int n  = 3;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<char(num)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

////////////////PROBLEM 3//////////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 5;
    for(int i = 0;i<num;i++){
        for(int j =0;j<i+1;j++){
                cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}


///////////////////PROBLEM 4//////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int n =4;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
        }
        cout<< endl;
        num++;
    }
    return 0;
}

//////////////////////PROBLEM 5 /////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 65;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<i+1;j++){
            cout<<char(num)<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}


/////////////////PROBLEM 6///////////////////
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0;i<n;i++){
        int num =1;
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}


//////////////////////PROBLEM 7////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for(int i = 0;i<n;i++){
         int num = i+1;
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
}


/////////////////////////PROBLEM 8////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    int num = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}


/////////////////////////PROBLEM 10/////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 65;
    for(int i=0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<char(num)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

////////////////////////PROBLEM 11////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    int num =1;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j>=i){
            cout<<num;
            }else
            cout<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}


//////////////////////////PROBLEM 12////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    int num =65;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j>=i){
            cout<<char(num);
            }else
            cout<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}



//////////////////////PROBLEM 13///////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =8;
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j= 1;j<=i+1;j++){
            cout<<j;
        }
        for(int j = i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


//////////////////FUNCTIONS //////////

//////////////////////////////PROBLEM 1///////////////////
//1) SUM OF FIRST N NUMBERS
#include <iostream>
using namespace std;
int sum(int n,int sum){
    for(int i = 1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<sum(10,0);
}

/////////////////////////////////PROBLEM2//////////////////
// 2) WRITE A FUNCTION TO FIND THE FACTORIAL OF N.
#include <iostream>
using namespace std;
int fact(int n){
    int facto = 1;
    for(int i = n;i>=1;i--){
        facto = i*facto;
    }
    return facto;
}

int main(){
    cout<<fact(5);
}

/////////////////////////PROBLEM3////////////////////////
// 3) CALCULATE THE SUM OF DIGITS OF A NUMBER
#include <iostream>
using namespace std;
int digit(int n,int sum){
    while(n>0){
        int last = n%10;
        n = n/10;
        sum+=last;
    }
    return sum;
}
int main(){
    cout<<digit(373737,0);
}


////////////////////////PROBLEM 4////////////////////
// 4) CALCULATE nCr BINOMIAL COEFFICIENT FOR n 7 r.
#include <iostream>
using namespace std;
int bin(int n, int r){
    int facto = 1;
    for(int i = n;i>=1;i--){
        facto = facto*i;
    }
    int facto2 =1;
    for(int i =r;i>=1;i--){
        facto2 = facto2*i;
    }
    int facto3 = 1;
    for(int i = (n-r);i>=1;i--){
        facto3 = facto3*i;

    }
    return facto/(facto2*facto3);
}

int main(){
    cout<<bin(8,3);
}

//////////////////////////PROBLEM 5///////////////////////
//WRITE A FUNCTION TO CHECK IF A NUMBER IS A PRIME OR NOT
#include <iostream>
using namespace std;
char* isPrime(int n){
    int temp = 0;
    for(int i = 2;i<n;i++){
        if(n%i==0)
            temp+=1;
    }
    if(temp>0){
        return "notPrime";
    }else{
        return "Prime";
    }
}
int main(){
    cout<<isPrime(37);
}

/////////////////////PROBLEM 6////////////////////////
// 6) WRITE A FUNCTION TO PRINT ALL PRIME NUMBERS FROM 2 TO N.
#include <iostream>
using namespace std;

int isPrime(int n){
    int temp = 0;
    for(int i = 2;i<n;i++){
        if(n%i==0)
            temp+=1;
    }
    if(temp>0){
        return false;
    }else{
        return true;
    }
}

int prime(int n){
    for(int i = 1;i<n;i++){
        if(isPrime(i)==true)
            cout<<i<<endl;
    }
}

int main(){
    cout<<prime(50);
}

