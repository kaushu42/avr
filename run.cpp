#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv){
  string filename(argv[1]);
  string compile = "avr-g++ -g -Os -mmcu=atmega32 -c " + filename + ".cpp";
  system(compile.c_str());
  cout << compile << endl;
  compile = "avr-g++ -g -mmcu=atmega32 -o " + filename + ".elf " + filename + ".o";
  system(compile.c_str());
  cout << compile << endl;
  compile = "avr-objcopy -j .text -j .data -O ihex " + filename + ".elf " + filename + ".hex";
  system(compile.c_str());
  cout << compile << endl;

}
