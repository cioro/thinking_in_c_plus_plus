#include <iostream>
using namespace std;

class sculpt{
private:
  int x;  
public:
  sculpt();
  ~sculpt();
  void func(int i, int j, int k);
  // void func(int i, int j);
  //void func(int i);
  //void func();
};
sculpt::sculpt(){
  x = 0;
  std::cout << "Inside constructor \n";
}

sculpt::~sculpt(){
  std::cout << "Inside destructor \n";
}

void sculpt::func(int i = 9 , int j = 8 , int k = 7 ){
   std::cout << "Inside fnc " << i <<"\t" << j << "\t" << k <<  "\n"; 
  //  std::cout << "Inside fnc0 \n"; 
}
/*
void sculpt::func(int i){
  std::cout << "Inside fnc1 " << i << "\n"; 
}

void sculpt::func(int i,int j){
  std::cout << "Inside fnc2 " << i <<"\t" << j <<  "\n"; 
}

void sculpt::func(int i,int j,int k){
  std::cout << "Inside fnc3 " << i <<"\t" << j << "\t" << k <<  "\n"; 
}*/

int main(){
  sculpt bone;
  bone.func();
  bone.func(1);
  bone.func(1,2);
  bone.func(1,2,3);
}
