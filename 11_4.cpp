//Write a function that takes a pointer argument, modifies what the 
//pointer points to, and then returns the destination of the pointer
// as a reference.
#include <iostream>
using namespace std;
int& func(int* ip){
  (*ip)++;
  //int &ir = *ip;
  return *ip;
}
int main(){
  int* ip;
  *ip = 1;
  cout << *ip << endl;
  int &ir = func(ip);
  cout <<ir << endl;

}
