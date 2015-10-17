//Write a program in which you try to (1)Create a reference that is not
//initialised when it is created. (2) Change a reference to refer to 
//another object after it is initialised. (3) Create a NULL reference
#include <iostream>
using namespace std;

int main(){
  int q=9;
  int p=10;
  const char &ref_q_char = NULL; // Compiler returns warning: converting to non-pointer type ‘char’ from NULL [-Wconversion-null]
  //!  const int &ref_q_int; //error: ‘ref_q_int’ declared as reference but not initialized
   const int &ref_p_int=p;
   //! ref_p_int = q; // error: assignment of read-only reference ‘ref_p_int’
  cout << ref_q_char << endl;
  return 0;
}
