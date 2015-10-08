//
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream input("file.txt");
  string line;
  while(getline(input,line)){
    v.push_back(line);
  }
  for(int i = v.size()-1; i >= 0; --i) {
    cout << i << " : " << v[i] << endl;
  }
  return 0;
}///:~
