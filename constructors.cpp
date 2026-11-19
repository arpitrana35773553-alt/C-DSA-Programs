//////////////////////////COPY CONSTRUCTOR//////////////////
#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    int temp;
    student(int r, int s){
        roll = r;
        temp = s;
    }
    student(const student &obj){
        roll = obj.roll;
        temp = obj.temp;
    }
    void display(){
        cout << "-----------------" << endl;
        cout << roll << endl;
        cout << temp << endl;
    }
};
int main(){
    student s(90,100);
    student s1(s);
    s1.display();
}


//////////////DEEP COPYING IN CONSTRUCTORS////////////////////////
#include <iostream>
using namespace std;
class student{
    public:
    int *marks;
    student(int m){
        marks = new int;
        *marks = m;
    }
    student(const student &obj){
        marks = new int;
        *marks = *obj.marks;
    }
    void display(){
        cout << *marks << endl;
    }
};
int main(){
    student s(90);
    student s1(s);
    s1.display();
}


////////////////////////////INITIALIZER LISTS////////////////////////
#include<iostream>
using namespace std;

class Student{
int roll;
float marks;
public:
Student(int r,float m):roll(r),marks(m){
cout<<"Constructor called"<<endl;
}
void display(){
cout<<"Roll: "<<roll<<endl;
cout<<"Marks: "<<marks<<endl;
}
};

int main(){
Student s1(101,85.5);
s1.display();
return 0;
}