#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  ifstream MyReadFile("mytext.txt");

  if (!MyReadFile.is_open()) {
    cout << "Error opening file." << endl;
    return 1;
  }

  string line;

  while (getline(MyReadFile, line)) {

    string operators = "";
    for (int i = 0; i < line.length(); i++) {
      if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '%'  || line[i] == '=') {
        operators += line[i];
      }
    }

    if (!operators.empty()) {
      cout << "Operators in line \"" << line << "\":  " << operators << endl;
    }
  }

  MyReadFile.close();

  return 0;
}
