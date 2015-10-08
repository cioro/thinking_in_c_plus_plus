//Program that opens a file and counts the whitespace-separated words in that file.
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  ifstream input("file.txt");
  string word;
  int word_count = 0;
  while(input >> word){
    ++word_count;
  }
  cout << "Number of words : " << word_count << endl; 

  return 0;

}
