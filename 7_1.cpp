//Create a Text class that contains a string objct to hold the text of a file.
//Gie it two constructors: a default constructor and a constructor that takes a 
//string argument that is the name of the file to open. When the second construc
//tor is used, open the file and read the contents into the string member object.
//Add a member function contents() to return the strong so (for example) it can
//be printed. In main(), open a file using Text and print the contents
#include <iostream>
#include <fstream>
#include <string>  

class Text{
private:
  std::string text_lines;
public:
  Text();
  Text(const std::string file_name);
  ~Text();
  const std::string contents();
};

Text::Text(){
  std::cout << "Inside default constructor. Empty string\n";
}

Text::Text(const std::string file_name){
  std::ifstream infile;
  infile.open(file_name, std::ifstream::in);
  std::string tmp;
  while(!infile.eof()){
    getline(infile,tmp);
    text_lines+=tmp;
    text_lines+="\n";
  }
  std::cout << "Inside constructor \n";
  std::cout << "Text initialised to :\n";
  std::cout << text_lines << std::endl;
}

Text::~Text(){
  std::cout <<"Inside destructor\n"; 
}

const std::string Text::contents(){
  return text_lines;
}


int main(){
  std::cout <<"Inside main.\n";
  
  Text empty;

  Text tales("albada.txt");

  std::cout << "In main, print text using contents method \n";
  
  std::cout << tales.contents() << std::endl;

}
