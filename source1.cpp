// source1.cpp
#include <stdlib.h>
#include <string>
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

      if(string(argv[1]) == "-h"){    //basic help function
        cout << "\n\nSomeone calling for help?" << endl;
        cout << "This program is goint to comput the sum of integers using";
        cout << "a BINARY TREE OF PROCESSES.\n";
        cout << "This program will make use of multiple processes using";
        cout << "shared memory and signals to communicate between processes\n";
        cout << "Exiting...\n\n\n";
        return 0;
      }



    }

    if(string(argv[1]) == "-s" && string(argv[2]) == "i"){
      const int defaultChildren = 20;
      cout << "\n\nThis is where the forking action happens!" << endl;
    }
    else if(string(argv[1]) == "-s" && string(argv[2]) == "x"){
      //indicate the number of children alowed to exist
      //default: 20
      const int defaultChildren = 20;
      cout << "\n\nBy default, only 20 children "
           << "are allowed to exist at a time." << endl;

    }
    else if((string(argv[2]) == "-t" || string(argv[3]) == "t"){
      if(string(argv[3] == "time" || argv[4] == "time")){
        cout << "By default, the program will terminate after 100 seconds.\n";
      }
      else{
        cout << "The command you're looking for is '-t time'" << endl;
        return 0;
      }
    }

  return 0;
}
