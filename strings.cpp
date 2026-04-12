#include <iostream>
using namespace std;
int main(){
    char str[] = "hello"; 
    cout<<str[2]<<endl;
}

///////////INPUT IN STRINGS////////
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter char array: ";
    // cin >> str; //// WHEN WE USE cin THEN THE INPUT WE GIVE AFTER SPACE IS NOT PRINTED 
    // cin.getline(str,100);////IT SOLVES OUR PREVIOUS PROBLEM AND IS USED TO TAKE INPUT ESPECIALLY IN STRINGS
    cin.getline(str,100,'a');////INPUT USING DELIMITER MEANS NOTHING WILL BE PRINTED AFTER $ SIGN
    cout<<"Output: "<<str<<endl;
}

