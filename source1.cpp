// source1.cpp
#include <stdlib.h>
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){
    cout << "Hi, just running a quick check.";
    cout << " you typed in " << argc << " arguments:\n";

    for(int i = 0; i < argc; i++){    //checking the user input for errors
      cout << argv[i] << "\n";

    /*if(argv[1] == "-h"){
      cout << "The help function was called." << endl;
      exit(EXIT_SUCCESS);*/

      if(argv[0] =="-h" || argv[0] == "--help"){    //basic help function
        cout << "Someone calling for help?" << endl;

        cout << "Exiting...\n\n\n";
        return 0;
      }

    }
  return 0;
}
