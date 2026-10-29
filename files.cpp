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