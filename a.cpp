
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




///////////////DATE - 06-03-2026///////////////


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




/////////////////////DATE - 07-03-2026/////////


//////////////////////PROBLEM 1//////////////////
// WRITE A FUNCTION TO CONVERT A DECIMAL NUMBER TO THE BINARY NUMBER
#include <iostream>
using namespace std;

int binary(int decinum){
    int ans = 0;
    int pow = 1;
    while(decinum>0){
        int rem = decinum%2;
        decinum = decinum/2;
        ans+=(rem*pow);
        pow*=10;
    }
     return ans;
}

int main(){
    cout<<binary(50);
}

////////////////////PROBLEM 2 ////////////////////////
// WRITE A FUNCTION TO CONVERT BINARY NO. TO DECIMAL
#include <iostream>
#include <cmath>
using namespace std;
int decimal(int binary){
    int ans = 0;
    int power = 0;
    while(binary>0){
        int rem = binary%10;
        binary = binary/10;
        ans+=(rem*(pow(2,power)));
        power++;
    }
    return ans;
}
int main(){
    cout<<decimal(0001011);
}

////////////////////PROBLEM 3///////////////////////
// FIND THE SUM SUM OF ALL EVEN FROM 1 TO 50 USING FUNCTIONS 
#include <iostream>
using namespace std;
int even(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    cout<<even(50);
}

////////////////////PROBLEM4///////////////////////
// PRINT ALL TEH PRIME NO.'S FROM 1 TO 20 USING FUNCTIONS
#include <iostream>
using namespace std;
int isPrime(int n){
    int temp = 0;
    for(int i =2;i<n;i++){
        if(n%i==0)
        temp+=1;
    }
    if(temp>0){
        return false;
    }else{
        return true;
    }
}

int main(){
    for(int i = 1;i<=20;i++){
        if(isPrime(i)==true){
            cout<<i<<"  ";
        }
    }
}


///////////////////////PROBLEM 5//////////////////////////
// PRINT THE PATTERN F USING FUNCTIONS
#include <iostream>
using namespace std;
void pattern(){
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(i==0||j==0||i==2&&j<3){
            cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    pattern();
}


///////////////////PROBLEM 6///////////////////////
// PRINT EVEN DIGITS OF A NUMBER USING FUNCTIONS
#include <iostream>
using namespace std;
int even(int n){
    int sum = 0;
    while(n>0){
        int rem = n%10;
        if(rem%2==0)
            sum+=rem;
        n = n/10;
    }
    return sum;
}

int main(){
    cout<<even(35427);
}

/////////////////////PROBLEM 7//////////////////////
// SUM OF ODD DIGITS OF A NUMBER USING FUNCTIONS
#include <iostream>
using namespace std;
int odd(int n){
    int sum = 0;
    while(n>0){
        int rem = n%10;
        if(rem%2!=0)
            sum+=rem;
        n = n/10;
    }
    return sum;
}

int main(){
    cout<<odd(3577);
}

///////////////PROBLEM 8/////////////////////////
// CHECK THE NUMBER IS PLAINDROME OR NOT USING THE FUNCTIONS
#include <iostream>
using namespace std;
void palindrome(int n){
    int rev = 0;
    int original_num = n;
    while(n>0){
        int digit = n%10;
        rev = rev*10+digit;
        n=n/10;
    }
    if(rev == original_num){
        cout<<"palindrome";
    }else{
        cout<<"Not Palindrome";
    }
}

int main(){
    palindrome(122103);
}


//////////////////////PROBLEM 9////////////////////
// CHECK THE NUMBER IS PRIME PALINDROME OR NOT USING THE FUNCTIONS
#include <iostream>
using namespace std;
bool palindrome(int n){
    int original = n;
    int rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev*10+digit;
        n=n/10;
    }
    if(rev==original){
        return true;
    }else {
        return false;
    }
}

char* checkPrime(int n){
    if(palindrome(n)==true){
        int temp = 0;
        for(int i = 2;i<n;i++){
            if(n%i==0)
            temp+=1;
        }
        if(temp==0){
            return "palindrome and prime";
        }else{
            return "Not Prime but Palindrome";
        }
    }
}



int main(){
    cout<<checkPrime(3534);
}

/////////////////-09-03-2026///////////////////

///////////////PROBLEM1//////////////////
//CHECK IF A NUMBER IS A STRONG NUMBER OR NOT USING FUNCTIONS
#include <iostream>
using namespace std;
int fact(int n){
    int product = 1;
    for(int i =n;i>=1;i--){
        product = i*product;
    }
    return product;
}
 int digit(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+= fact(digit);
        n=n/10;
    }
    return sum;
 }

 void check(int n){
    if(digit(n)==n){
        cout<<"Strong Number";
    }else{
        cout<<"Not a Strong Number";
    }
 }

 int main(){
    int a;
    scanf("%d",&a);
    check(a);
 }


/////////////////PROBLEM2//////////////////
//FIGURE OUT HOW A NUMBER IS POWER OF 2 
#include <iostream>
using namespace std;
void power(int n){
    float last = 0;
    while(n>1){
       last = n%2;
       if(n%2==1){
        last = 1;
        break;
       }
       n=n/2;
    }
    if(last==0){
        cout<<"Power of 2";
    }else{
        cout<<"Not a power of 2";
    }
}

int main(){
    int a;
    scanf("%d",&a);
    power(a);
}


/////////////////////PROBLEM 3////////////////////
//PRINT THE REVERSE OF A NUMBER USING FUNCTIONS
#include <iostream>
using namespace std;
int reverse(int n){
    int rev= 0;
    while(n>0){
        int digit = n%10;
        n = n/10;
        rev=rev*10+digit;
    }
    return rev;
}
int main(){
    int a;
    scanf("%d",&a);
    cout<<reverse(a);
}

////////////////PROBLEM 4///////////////////
//FIGURE OUT HOW A NUMBER IS POWER OF 2 WITHOUT USING LOOPS
#include <iostream>
using namespace std;
void check(int n){
    if(n>0 && (n&(n-1))==0){
        cout<<"Yes Power of 2";
    }else{
        cout<<"Not a Power of 2";
    }
}
int main(){
    int a;
    scanf("%d",&a);
    check(a);
}