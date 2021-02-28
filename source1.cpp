// source1.cpp
#include <stdlib.h>
#include <string>
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){

  int argumentCount = 0;

  cout << "Hi, I'm just running a quick check.";
  cout << " You typed in " << argc << " argument(s):\n\n";

  do{
  /*for(int i = 0; i <= argc; i++){    //checking the user input for errors

    if(argc == 1){
      cout << argv[i] << "\n";
      cout << "I see that you have not put any input in..... Exiting.\n\n";
      argumentCount++;
      return 0;
    }
    else{
      argumentCount++;
    }
    if(string(argv[i]) == "-h"){    //basic help function
      cout << argv[i] << "\n";
      cout << "\n\nSomeone calling for help?" << endl;
      cout << "This program is goint to compute the sum of integers using";
      cout << " a BINARY TREE OF PROCESSES.\n";
      cout << "This program will make use of multiple processes using";
      cout << " shared memory and signals to communicate between processes\n";
      cout << "Exiting...\n\n\n";
      argumentCount = argumentCount + 1;
      return 0;
    }
    else if(string(argv[i]) == "-s" && string(argv[i+1]) == "i"){
      cout << argv[i] << " ";
      cout << argv[i+1] << "\n";
      cout << "This is where the forking action happens!" << endl;
      argumentCount = argumentCount + 2;

    }
    else if(string(argv[i]) == "-s" && string(argv[i+1]) == "x"){
      //indicate the number of children alowed to exist
      //default: 20
      const int defaultChildren = 20;
      cout << argv[i] << " ";
      cout << argv[i+1] << "\n";
      cout << "By default, only 20 children "
           << "are allowed to exist at a time.\n" << endl;
      argumentCount = argumentCount + 2;
    }
    else if(string(argv[i]) == "-t"){
      if(string(argv[i+1]) == "time"){
        cout << argv[i] << " ";
        cout << argv[i+1] << "\n";
        cout << "By default, the program will terminate after 100 seconds.\n";
        argumentCount = argumentCount + 2;
      }
      else{
        cout << "\nThe command you're looking for is '-t time'" << endl;
        argumentCount++;
        return 0;
      }
    }

  }*/


  switch(argumentCount){
    case 0:
      if(argc == 1){
        cout << argv[argumentCount] << "\n";
        cout << "I see that you have not put any input in..... Exiting.\n\n";
        argumentCount++;
        return 0;
      }
      else{
        argumentCount++;
      }

    case 1:
      if(string(argv[argumentCount]) == "-h"){    //basic help function
        cout << argv[argumentCount] << "\n";
        cout << "\n\nSomeone calling for help?" << endl;
        cout << "This program is goint to compute the sum of integers using";
        cout << " a BINARY TREE OF PROCESSES.\n";
        cout << "This program will make use of multiple processes using";
        cout << " shared memory and signals to communicate between processes\n";
        cout << "Exiting...\n\n\n";
        argumentCount = argumentCount + 1;
        return 0;
      }
      else if(string(argv[argumentCount]) == "-s" &&
              string(argv[argumentCount+1]) == "i"){
        cout << argv[argumentCount] << " ";
        cout << argv[argumentCount+1] << "\n";
        cout << "This is where the forking action happens!" << endl;
        argumentCount = argumentCount + 2;

      }
      else if(string(argv[argumentCount]) == "-s" &&
              string(argv[argumentCount+1]) == "x"){
        //indicate the number of children alowed to exist
        //default: 20
        const int defaultChildren = 20;
        cout << argv[argumentCount] << " ";
        cout << argv[argumentCount+1] << "\n";
        cout << "By default, only 20 children "
             << "are allowed to exist at a time.\n" << endl;
        argumentCount = argumentCount + 2;
        break;
      }
      else if(string(argv[argumentCount]) == "-t"){
        if(string(argv[argumentCount+1]) == "time"){
          cout << argv[argumentCount] << " ";
          cout << argv[argumentCount+1] << "\n";
          cout << "By default, the program will terminate after 100 seconds.\n";
          argumentCount = argumentCount + 2;
          break;
        }
        else{
          cout << "\nThe command you're looking for is '-t time'" << endl;
          argumentCount++;
          return 0;
        }
      }

    case 3:
      if(string(argv[argumentCount]) == "-t"){
        if(string(argv[argumentCount+1]) == "time"){
          cout << argv[argumentCount] << " ";
          cout << argv[argumentCount+1] << "\n";
          cout << "By default, the program will terminate after 100 seconds.\n";
          argumentCount = argumentCount + 2;
        }
        else{
          cout << "\nThe command you're looking for is '-t time'" << endl;
          argumentCount++;
          return 0;
        }
      }

  }
}while(argumentCount != argc);



  return 0;
}
