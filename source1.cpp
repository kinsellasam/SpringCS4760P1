// source1.cpp
#include <stdlib.h>
#include <string>
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){
  cout << "Hi, I'm just running a quick check.";
  cout << " You typed in " << argc << " argument(s):\n";

  for(int i = 0; i <= argc; i++){    //checking the user input for errors
    cout << argv[i] << "\n";

    if(argc == 1){
      cout << "I see that you have not put any input in..... Exiting.\n\n";
      return 0;
    }

    if(string(argv[1]) == "-h"){    //basic help function
      cout << "\n\nSomeone calling for help?" << endl;
      cout << "This program is goint to compute the sum of integers using";
      cout << " a BINARY TREE OF PROCESSES.\n";
      cout << "This program will make use of multiple processes using";
      cout << " shared memory and signals to communicate between processes\n";
      cout << "Exiting...\n\n\n";
      return 0;
    }

    if(string(argv[i]) == "-s" && string(argv[i+1]) == "i"){
      cout << argv[i+1] << "\n";
      cout << "\n\nThis is where the forking action happens!" << endl;
      return 0;
    }
    else if(string(argv[i]) == "-s" && string(argv[i+1]) == "x"){
      //indicate the number of children alowed to exist
      //default: 20
      const int defaultChildren = 20;
      cout << argv[i+1] << "\n";
      cout << "\n\nBy default, only 20 children "
           << "are allowed to exist at a time." << endl;
      break;
    }
    else if(string(argv[i]) == "-t" || string(argv[i]) == "t"){
      if(string(argv[i+1]) == "time" || string(argv[i+1]) == "time"){
        cout << "By default, the program will terminate after 100 seconds.\n";
      }
      else{
        cout << "The command you're looking for is '-t time'" << endl;
        return 0;
      }
    }
    else{
      cout << "No more commands were given. Exiting." << endl;
    }
  }



  return 0;
}
