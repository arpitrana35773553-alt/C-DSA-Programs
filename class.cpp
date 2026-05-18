#include <iostream>
using namespace std;
class Student{
    public:
    int rollno;
    void display(){
        cout<<rollno;
    }
};
int main(){
    Student s1;
    s1.rollno = 7;
    s1.display();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int marks;
    public:
    void input(){
        cin >> rollno >> name >> marks;
    }
    void display(){
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks;
    }
};
int main(){
    Student s1;
    s1.input();
    s1.display();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
    int employeeID;
    string name;
    double salary;

    public:
    void input(){
        cin >> employeeID >> name >> salary;
    }
    void display(){
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Salary: "<<salary; 
    }
};
int main(){
    Employee e1;
    e1.input();
    e1.display();
}

#include <iostream>
#include <string>
using namespace std;
class Credentials{
    private:
    string username;
    string password;
    public:
    void member(){
        cin >> username;
        cin >> password;
        cout << username << " " << password;
    }
};
int main(){
    Credentials c;
    c.member();
    return 0;
}


#include <iostream>
using namespace std;
class Occurence{
    private:
    int num;
    int digit;
    public:
    void input(){
        cin >> num;
        cin >> digit;
    }
    int countOccurence(){
        int count = 0;
        while(num > 0){
            int check = num % 10;
            if(check == digit){
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};
int main(){
    Occurence o;
    o.input();
    int ans = o.countOccurence();
    cout << ans;
}


#include <iostream>
using namespace std;
class Main{
    public:
    string name;
    int roll;
    void getting(string n, int r){
        name = n;
        roll = r;
        cout << "Name = "<<name<<" Roll no = "<<roll<<endl;
    }
};
int main(){
    Main s1;
    s1.getting("Doraemon",1);
    s1.getting("Nobita",2);
    cout<<s1.name<<endl;
    Main s2;
    s2.getting("Kavya",3);
    cout<<s2.name<<endl;
}

#include <iostream>
using namespace std;
class Main{
    public:
    void sum(int num , int num2){
        cout<<"Sum = "<<num + num2;
    }
    void multiply(int num, int num2){
        cout<<"Product = "<< num * num2;
    }
    void division(int num , int num2){
        cout<<"Division = "<<num / num2;
    }
    void subtract(int num , int num2){
        cout<<"Difference = "<<num - num2;
    }
};
int main(){
   Main m;
   int num;
    int num2;
    char symbol;
   while(true){
    cin >> num;
    cin >> num2;
    cin >> symbol;
    if(symbol == '+'){
        m.sum(num,num2);
    }else if(symbol == '-'){
        m.subtract(num,num2);
    }else if(symbol == '*'){
        m.multiply(num,num2);
    }else if(symbol == '/'){
        m.division(num,num2);
    }else{
        return 0;
    }
   }
}

#include <iostream>
using namespace std;
class calculator{
    public:
    void addition(int a, int b){ //// Normal function declaration
        cout<<"Addition = "<<a+b<<endl;
    }
    int sub (int a, int b){  // inline funtion
        return a-b;
    }
    void multiplication(int a, int b);

    static void division(int a, int b){ ////Decalaration with static
        cout<<"Division = "<<a/b<<endl;
    }
};

void calculator::multiplication(int a, int b){
    cout<<"Multiplication = "<<a*b;
}

int main(){
    calculator c;
    c.addition(10,20);
    cout<<"Subtraction = "<<c.sub(200,10)<<endl;
    c.multiplication(10,20);
    cout<<endl;
    calculator::division(200,10);
}

// Write a C++ program to demonstrate the use of public and private access specifiers using a class Student.
#include <iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    void setmarks(){
        cout<<"Enter the marks: ";
        cin >> marks;
    }
    void display(){
        cout<<"The marks are: "<<marks;
    }
};
int main(){
    student s;
    s.setmarks();
    s.display();
}


Write a C++ program to create a class BankAccount.

The class should contain:

account number as a private data member
balance as a private data member

Create the following public member functions:

deposit()
→ to add money to balance
withdraw()
→ to subtract money from balance if sufficient balance is available
display()
→ to display account number and current balance

In the main() function:

create an object of the class
input account details
perform deposit and withdrawal operations
display final balance

#include <iostream>
using namespace std;
class BankAccount{
    private:
    int accountno;
    int balance;
    public:
    void deposit(int n){
        balance = n;
    }
    void withdraw(int m){
        if(balance > m){
            balance = balance - m;
        }else{
            cout<<"Insufficient balance";
        }
    }
    void display(){
        cout<<"Balance = "<<balance;
    }
};
int main(){
    BankAccount b;
    b.deposit(1000);
    b.withdraw(5000);
    b.display();
}

#include <iostream>
using namespace std;
class Prices{
    private:
    int price;

    public:
    Prices(){
        price = 500;
        cout<<"Constructor Called"<<endl;
    }
    void display(){
        cout<<price;
    }
};
int main(){
    Prices p;
    p.display();
}

#include <iostream>
using namespace std;
class Rectangle{
    private:
    int l;
    int b;
    public:
    Rectangle(){
        cin>> l;
        cin>> b;
    }
    void display(){
        cout<<l*b;
    }
};
int main(){
    Rectangle r;
    r.display();
}
 
#include <iostream>
#include <string.h>
using namespace std;
class Name{
    private:
    string name;
    public:
    Name(){
        name = "Iron Man";
    }
    void display();
};

void Name::display(){
    cout<<name;
}

int main(){
    Name n;
    n.display();
}