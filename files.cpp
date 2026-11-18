#include <fstream>
#include <iostream>
using namespace std;
int main() {
  string s = "First file";

  ofstream myfile("example.txt");
  myfile << s;
  myfile << endl;
  myfile << s;
  myfile << endl;
  myfile << s;
  myfile.close();

  ifstream infile("example.txt");
  string line;
  while (getline(infile, line))
    cout << line << endl;

  infile.close();

    cout << line;
  return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout("file.txt");
  fout<<3<<"\n";
  fout<<5<<"\n";
  fout.close();

  ifstream fin("file.txt");
  int a,b;
  fin>>a;
  fin>>b;
  fin.close();

  int result = a+b;
  ofstream fout2("file.txt",ios:: app);
  fout2<<result;
  fout2.close();
  return 0;
}


////////////WRITING AND READIN INTO A FILE/////////////

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream fout;
  fout.open("student.txt");
  if(fout.is_open()){
    cout << "File Opened successfully" << endl;
  }else{
    cout << "Unable to open the file" << endl;
  }
  fout << "Student Name = Arpit\n";
  fout << "Student Roll no. = 3577\n";
  fout << "Course = Btech CSE\n";

  fout.close();
  
  ifstream fin;
  fin.open("student.txt");
  if(fin.is_open()){
    cout << "File opened successfully\n";
  }else{
    cout << "Unable to open the file\n";
  }
  string line;
  while(getline(fin,line)){
    cout << line << endl;
  }
  fin.close();
}


/////////////ADDING THE DETAILS OF A STUDENT INTO A FILE///////////////
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string name;
  int roll_number;
  int mark1 , mark2, mark3;
  cout << "Enter the student Name " << endl;
  getline(cin,name);
  cout << "Enter the roll number " << endl;
  cin >> roll_number;
  cout << "Enter the marks " << endl;
  cin >> mark1 >> mark2 >> mark3;
  int percentage = ((mark1 + mark2 + mark3)*100)/300;
  ofstream fout;
  fout.open("student.txt",ios::out);
  if(fout.is_open()){
  fout << name << endl;
  fout << roll_number << endl;
  fout << percentage << endl;
  cout << "Data inserted successfully" << endl;
  }else{
    cout << "Unable to open the file" << endl;
  }
  fout.close();
  ifstream fin;
  fin.open("student.txt",ios::in);
  string line;
  while(getline(fin,line)){
    cout << line << endl;
  }
  fin.close();
}

/////////////ADDING AND SEARCHING STUDENT RECORDS SEQUENTIALLY////////////////
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of students. " << endl;
    cin >> n;
    cin.ignore();
    string name;
    int roll_number;
    int mark1, mark2 ,mark3;
    ofstream fout;
    fout.open("students1.txt",ios::out);
    cout << "Enter the details ";
    for(int i = 0;i < n;i++){
      cout << "Enter the name: ";
      getline(cin,name);
      cout << "Enter the roll_number: ";
      cin >> roll_number;
      cout << "Enter the marks: ";
      cin >> mark1 >> mark2 >> mark3;
      float percentage = ((mark1 + mark2 + mark3)*100)/300;
      cin.ignore();
      fout << name << endl;
      fout << roll_number << endl;
      fout << mark1 <<" "<< mark2 <<" "<< mark3 <<" "<< endl;
      fout << percentage << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("students1.txt",ios::in);
    string line;
    while(getline(fin,line)){
      cout << line << endl;
    }
    fin.close();
    fin.clear();
    int m;
    cout << "Enter the roll number to find: ";
    cin >> m;
    bool found = false;
    fin.open("students1.txt",ios::in);
    if(fin.is_open()){
      string name;
      string rollnumber;
      string marks;
      string percentage;
      while(getline(fin,name)){
        getline(fin,rollnumber);
        getline(fin,marks);
        getline(fin,percentage);
      if(stoi(rollnumber) == m){
        cout << "Student found!" << endl;
        cout << name << endl;
        cout << rollnumber << endl;
        cout << marks << endl;
        cout << percentage << endl;
        found = true;
        break;
      }
    }
    if(!found){
      cout << "Student not found!";
    }
    }else{
      cout << "Unable to open the file.";
    }
    fin.close();
}


////////WRITING AND PRINTING STUDENT RECORDS IN BINARY FILES USING SEQUENTIAL APPROACH//////////////
#include <iostream>
#include <fstream>
using namespace std;
struct students{
  int roll_number;
  char name[20];
  float marks;
};

int main(){
  students s;
  int n;
  cout << "Enter the number of students. ";
  cin >> n;
  ofstream fout("studentb.dat",ios::binary);
  for(int i = 0;i < n;i++){
    cout << "Enter the Roll Number: ";
    cin >> s.roll_number;
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the marks: ";
    cin >> s.marks;

    fout.write((char*)&s,sizeof(students));
  }
  fout.close();

  ifstream fin("studentb.dat",ios::binary);
  fin.seekg(0);
  while(fin.read((char*)&s,sizeof(students))){
    cout << "Roll No.: " << s.roll_number << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "--------------------------" << endl;
  }
  fin.close();
}


