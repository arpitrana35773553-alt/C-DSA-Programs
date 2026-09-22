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
// }

#include <iostream>
#include <string.h>
using namespace std;
struct students{
    string name;
    int marks;
};
int main(){
    students s;
    cin >> s.name;
    cin >> s.marks;
    cout<<s.name;
    cout<<s.marks;
}

}

#include <iostream>
using namespace std;
union students{
    char name[20];
    int marks;
};
int main(){
    students s;
    cin >> s.name;
    cin >> s.marks;
    cout<<s.name;
    cout<<s.marks;
}

#include <iostream>
using namespace std;
enum days{
    sunday,
    monday,
    tuesday,
    wednesday
};

int main(){
    days d;
    d = sunday;
    cout<<d<<endl;
    d = wednesday;
    cout<<d;
}

#include <iostream>
#include <string.h>
using namespace std;
class Student{
    public:
    string name;
    int classroom;
    string gender;
    int roll_no;
    void print(){
        cout<<name;
    }
};
int main(){
    Student s1;
    s1.name = "Iron Man";
    cout<<"Name: "<<s1.name;
    s1.print();
}

#include <iostream>
using namespace std;
class Sum{
    public:
    int num1;
    int num2;
    int sum(){
        return this->num1 + num2;
    }
    void print(){
        cout << num1 <<" "<< num2;
    }
};
int main(){
    Sum s1;
    s1.num1 = 5;
    s1.num2 = 10;
    cout<<s1.sum()<<endl;
    s1.print();
}


#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int Area(){
        return this->length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout<<"Area = "<<r1.Area()<<" cm"<<endl;
    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    Rectangle r2;
    cout<<"Enter length: ";
    cin >> r2.length;
    cout<<"Enter Breadth: ";
    cin >> r2.breadth;
    cout<<"Area = "<<r2.Area()<<" 'cm"<<endl;
    cout<<"Perimeter = "<<r2.perimeter();
}

#include <iostream>
using namespace std;
class Bank{
    public:
    int balance;
    int pin;
    Bank(int balance, int pin){
        this->balance = balance;
        this-> pin = pin;
    }
    void withdraw(int money , int pin){
        if(this->pin == pin){
            balance -= money;
            cout<<"Transaction Successfull"<<" "<<endl<<"balance = "<<balance;
        }else{
            cout<<"Wrong pin";
        }
    }
    void deposit(int money){
        balance += money;
    }
};
int main(){
    Bank b1(1000,1234);
    
    b1.withdraw(100,123);
}

#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    int age;
    string gender;
    Employee(string name,int age, string gender){
        this -> name = name;
        this -> age = age;
        this -> gender = gender;

    }
    void isEligible(){
        if(gender == "male" && age > 21){
            cout << "true";
        }else if(gender == "female" && age > 20){
            cout<< "true";
        }else{
            cout<< "false";
        }
        cout<< endl;
    }
    void print(){
        cout << "Name = "<< name <<endl<< "Age = " << age <<endl<< "Gender = " << gender<<endl;
    }
};

int main(){
    int n;
    cout << "Number of members: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        string name, gender;
        int age;

        cin >> name >> age >> gender;

        Employee e(name, age, gender);
        e.isEligible();
        e.print();
    }
    int n;
    int age;
    string name, gender;
    cout << "number of members: =";
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> name;
        cin >> age;
        cin >> gender;
    }
    string name;
    cin >> name;
    int age;
    cin >> age;
    string gender;
    cin >> gender;
    Employee e1(name,age,gender);
    e.isEligible();
    e.print();
    Employee e1(name,age,gender);
    e1.isEligible();
    e1.print();
}

#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    double salary;
    void input(){
        cin >> id;
        cin >> name;
        cin >> salary;
    }
    void print(){
        cout << id << endl;
        cout << name << endl;
        cout << salary << endl;
    }
};
int main(){
    Employee e1;
    e1.input();
    Employee e2;
    e2.input();
    if(e1.salary > e2.salary){
        e1.print();
    }else if(e1.salary < e2.salary){
        e2.print();
    }else{
        cout << "Both employees have same salary";
    }
}

#include <iostream>
#include <iomanip>
using namespace std;
class Calculate{
    public:
    int length;
    int breadth;
    void input(){
        cout <<"Enter the length: ";
        cin >> length;
        cout <<"Enter the breadth: ";
        cin >> breadth;
    }
    inline int Area(){
        return length * breadth;
    }
    inline int Perimeter(){
        return 2*(length + breadth);
    }
    void output(){
        cout << "Area = "<< setw(5) <<Area() << endl;
        cout << "Perimeter = "<< setw(5) <<Perimeter();
    }
};
int main(){
    Calculate c1;
    c1.input();
    c1.output();
}

#include <iostream>
using namespace std;
class Reverse{
    private:
    int x;
    public:
    void input(){
        cout << "Enter the function: ";
        cin >> x;
    }
    friend int reverse(Reverse r);
};
int reverse(Reverse r){
    int num = 0;
    while(r.x > 0){
        int digit = r.x % 10;
        num = (num * 10) + digit;
        r.x = r.x / 10;
    }
    return num;
}
int main(){
    Reverse r;
    r.input();
    cout << reverse(r);
}

#include <iostream>
using namespace std;
class Salary{
    public:
    double salary;
    void input(){
        cout << "Enter the original salary: ";
        cin >> salary;
    }
    void updateSalary(double salary){
        salary = (salary*2) + 5000;
        cout << "Updated Salary = "<< salary << endl;
    }
    void output(){
        cout << "Original salary = "<<salary;
    }
};
int main(){
    Salary s;
    s.input();
    s.updateSalary(s.salary);
    s.output();
}

#include <iostream>
#include <iomanip>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int marks1, marks2, marks3;
    void input(){
        cout << "Enter the name of student: ";
        cin.ignore();
        getline(cin,name);
        cout << "Enter the roll number: ";
        cin >> rollno;
        cout << "Enter the marks of students: ";
        cin >> marks1 >> marks2 >> marks3;
    }
    int totalMarks(){
        return marks1 + marks2 + marks3;
    }
    double percentage(){
        return (totalMarks()/300.0)*100;
    }
    void studentDetails(){
        cout << "Name = " << name << endl;
        cout << "Roll no = " << rollno << endl;
        cout << "Marks = " << marks1 << " " << marks2 << " " << marks3 <<endl;
        cout << "Total Marks = " << totalMarks() << endl;
        cout << "Percentage = " << fixed << setprecision(2) << percentage() << endl;
    }
};
int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore();
    Student s[n];
    for(int i = 0;i < n;i++){
        s[i].input();
    }
    for(int i = 0;i < n;i++){
        s[i].studentDetails();
    }
}

#include <iostream>
using namespace std;
class Wallet{
    public:
    string ownerName;
    int walletId;
    double balance = 0.0;
    static int totalWallet;
    Wallet(){
        totalWallet++;
    }

    void input(){
        cout << "Enter name: ";
        cin.ignore();
        getline(cin,ownerName);
        cout << "Enter wallet id: ";
        cin >> walletId;
    }

     void displayWalletDetails(){
        cout << "Name = " << ownerName << endl;
        cout << "Wallet id = " << walletId << endl;
        cout << "Initial Balance = " << balance << endl;
    }

    void addMoney(int amount){
        balance = balance + amount;
        cout << "Transaction Succesfull" << endl;
    }

    void spendMoney(int amount){
        if(balance >= amount){
            balance = balance - amount;
        }else{
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayBalance(){
        cout << "Final Balance = "<<balance << endl;
    }
    static void displayWalletCount(){
        cout << "Total Wallets = " << totalWallet << endl;
    }
};
int Wallet::totalWallet = 0;
int main(){
    int n;
    cout << "Enter the number of wallets: ";
    cin >> n;
    Wallet w[n];
    for(int i = 0;i < n;i++){
        w[i].input();
    }
    for(int i = 0;i < n;i++){
        w[i].displayWalletDetails();
        int addmoney, spendmoney;
        cout << "Enter amount to add: ";
        cin >> addmoney;
        w[i].addMoney(addmoney);
        cout << "Amount to withdraw: ";
        cin >> spendmoney;
        w[i].spendMoney(spendmoney);
        w[i].displayBalance();
    }
    Wallet::displayWalletCount();
    return 0;
}


#include <iostream> 
#include <string.h>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int book_id;
    string status;
    bool available;
    static int count;

    Book(){
        count++;
    }
    void input(){
        cout << "Enter the book title: " << endl;
        cin.ignore();
        getline(cin,title);
        cout << "Enter the author name: " << endl;
        getline(cin,author);
        cout << "Status: ";
        getline(cin, status);
        cout << "Enter the book_id:" << endl; 
        cin >> book_id;
    }

    void displayBookDetails(){
        cout << "Title = " << title << endl;
        cout << "Author Name = " << author << endl;
        cout << "Status = " << status << endl;
        cout << "Book Id = " << book_id << endl;
    }

    void issueBook(){
        if(available){
            cout << "Book Issued";
            available = false;
        }
    }

    void returnBook(){
        cout << "Book Returned";
        available = true;
    }

    void checkStatus(){
        if(available){
            cout << "Available";
        }else{
            cout << "Not Available";
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    Book b[n];
    for(int i = 0;i < n;i++){
        b[i].input();
    }

    for(int i = 0;i < n;i++){
        b[i].displayBookDetails();
        b[i].issueBook();
        b[i].returnBook();
        b[i].checkStatus();
    }
}


