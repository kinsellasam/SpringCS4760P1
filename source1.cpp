// source1.cpp
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){

  char commandLineArg1 = argv[1];
  if(commandLineArg1 == '-h')
    cout << "help maessage goes here" << endl;
    
  cout << "Hello, World!" << endl;
  return 0;
}
