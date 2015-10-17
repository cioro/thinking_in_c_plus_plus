//Create a simple class with an overloaded operator++. Try calling this 
//operator in both pre- and postfix form and see what kind of compiler warning
// you get

#include <iostream>
#include <string>
using namespace std;


class Simple{
  unsigned char s;
public:
  Simple(unsigned char ss = 97 ) : s(ss) {}

  const Simple& operator++(){ //Prefix
    cout << "++Simple\n";
    s++;
    return *this;
  }

  const Simple operator++(){ //Postfix
    cout << "Simple++\n";
    Simple before(s);
    s++;
    return before;
};

