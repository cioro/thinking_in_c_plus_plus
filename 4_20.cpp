/*
 * How big is a structure? Print the size of various structures.Create 
 * structures that have datamemebers only and ones that have data members 
 * and function members. Then create a structure that has non members at all.
 * Print out the sizes of all of these. Explain the reason for the 
 * result of the structure with no data members at all. 
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Sevillano{
  string name;
  int age;
  void initialise(string user_arg){name = user_arg;};
  void ozu(){cout << "Ozu que calor!" << endl;};
};

struct dad{
  int size;
};

struct emptiness{
 void ozu(){cout << "Ozu que calor!" << endl;};
};

int main(){

  //cout << " Struct with data members and functions ";
  Sevillano Manolo;
  cout << sizeof(Sevillano) << endl;
  //cout << " Struct Sevillano after initalising ";
  //Manolo.initialise("Manuel Titos Molina");
  //cout << sizeof(Manolo)<< endl;
  dad Jesus;
  emptiness Kundera;
  cout << sizeof(dad)<< endl;
  cout << sizeof(emptiness)<<endl;
}
