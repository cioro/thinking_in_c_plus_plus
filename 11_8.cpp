//Create a function that takes a char& arguments and modifies that argument.
//In main() print out a char variable, chall your function for that variable,
//and print it out again to prove to yourself that it has been changed.
//How does this affect program readability?
#include <iostream>
using namespace std;

void func(char& cref){
  cref++;
}

int main(){
  char d = 'd';
  cout << d << endl;
  func(d);//User cannot tell that the value is being modified. 
          //No indication the var is being passed by reference. 
          //Harder to read. 
  cout << d << endl;
}
