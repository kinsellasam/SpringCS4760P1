// source1.cpp
#include <stdlib.h>
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){
    cout << "Hi, just running a quick check.";
    cout << " you typed in " << argc << " arguments:\n";

    for(int i = 0; i < argc; i++)
      cout << argv[i] << "\n";

    if(argv[1] == "-h"){
      cout << "The help function was called." << endl;
      exit(EXIT_SUCCESS);
    }
  return 0;
}
