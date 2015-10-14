#include <iostream>

class Simple{
private:
  int x;
public:
  Simple();
  Simple(int arg);
  ~Simple();
};

Simple::Simple(){
  std::cout << "Inside default constructor \n";
  x = 0;
}

Simple::Simple(int arg){
  x = arg;
  std::cout << "Inside constructor "<< x<<  " \n";
}

Simple::~Simple(){
 std::cout << "Inside destructor "<< x <<  " \n";
}

int main(){

  Simple s1;
  int x = 9;
  Simple s2(x);
}
