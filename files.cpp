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