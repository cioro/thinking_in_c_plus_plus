//Dynamically create pieces of storage of the following types, using new:
// int, long, an array of 100 chars, an array of 100 floats. Print the 
// addresses of these and then free the storage
#include <iostream>
int main(){

  int * i = new int;
  *i = 7; 
  std::cout <<"Location of int: "<< i<<" and its value " << *i << std::endl;
  // delete i;

  long int * j = new long int;
  *j = 4.3e9;
  std::cout <<"Location of long int: "<< j <<" and its value " << *j << std::endl;
  delete i;
  delete j;
  
  char * array = new char[100];
  for (int c = 0; c < 10; c++){
    array[c] = c+97;
  }
  std::cout <<"Size of char " << sizeof(char) << "\n";
  for (int g = 0; g < 10; g++){
    std::cout <<"Location of char element: "<< (int*)array+g 
	      <<" and its value " << array[g] << std::endl;
  }

  delete[] array;
  

  double * f_array = new double[100];
  for (int c = 0; c < 10; c++){
    f_array[c] = c;
  }
  std::cout <<"Size of double " << sizeof(double) << "\n";
  for (int g = 0; g < 10;g++){
    std::cout <<"Location of float element: "<< f_array+g
	      <<" and its value " << *(f_array+g) << std::endl;
  }

  delete[] f_array;


  return 0;
}
