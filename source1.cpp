// source1.cpp
#include <cstdlib>
#include <string>
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){
  const int DEFAULT_CHILDREN = 20;
  const int DEFAULT_TIME_SEC = 100;

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
      const int DEFAULT_CHILDREN = 20;
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
        cout << "Current Argument: " << argv[argumentCount];
        cout << "\nI see that you have not put any arguments in..... Exiting.\n\n";
        argumentCount++;
        return 0;
      }
      else{
        argumentCount++;
      }

      case 1:
        if(string(argv[argumentCount]) == "-h"){    //basic help function
          cout << "Current Argument: " << argv[argumentCount];
          cout << "\nSomeone calling for help?" << endl;
          cout << "This program is goint to compute the sum of integers using";
          cout << " a BINARY TREE OF PROCESSES.\n";
          cout << "This program will make use of multiple processes using";
          cout << " shared memory and signals to communicate between processes\n";
          cout << "Exiting...\n\n\n";
          argumentCount = argumentCount + 1;
          return 0;
        }
        else if(string(argv[argumentCount]) == "-s"){
          if(!argv[argumentCount+1]){
            cout << "You didn't put an argument for the children. Exiting...";
            return 0;
          }
          else{
            if(string(argv[argumentCount+1]) == "x"){
              cout << "Argument: " << argv[argumentCount];
              cout << "\nArgument: " << argv[argumentCount+1] << "\n";
              cout << "By default, only 20 children are allowed to exist at"
                   << " a time.\n\n" << endl;
              cout << "Exiting..." << endl;
              return 0;
            }
            else{
              int numOfChildren = atoi(string(argv[argumentCount+1]));

            }


          }
        }
        /*else if(string(argv[argumentCount]) == "-s" &&
                string(argv[argumentCount+1]) == "x"){
                  cout << "Argument: " << argv[argumentCount];
                  cout << "\nArgument: " << argv[argumentCount+1] << "\n";
                  cout << "By default, only 20 children "
               << "are allowed to exist at a time.\n\n" << endl;
          argumentCount = argumentCount + 2;
          break;
        }*/
        else if(string(argv[argumentCount]) == "-t"){
          if(argc == 2){
            cout << "\nThe command you're looking for is '-t time'" << endl;
            argumentCount++;
            return 0;
          }
          else{
              if(string(argv[argumentCount+1]) == "time"){
                cout << "Argument: " << argv[argumentCount];
                cout << "\nArgument: " << argv[argumentCount+1] << "\n";
                cout << "By default, the program will terminate after 100 seconds.\n\n";
                argumentCount = argumentCount + 2;
                return 0;
              }
              else{
                cout << "\nThe command you're looking for is '-t time'\n" << endl;
                argumentCount++;
                return 0;
              }
            }
          }


    case 3:
      if(string(argv[argumentCount]) == "-h"){    //basic help function
        cout << "Current Argument: " << argv[argumentCount];
        cout << "\nSomeone calling for help?" << endl;
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
                cout << "Argument: " << argv[argumentCount];
                cout << "Argument: " << argv[argumentCount+1] << "\n";
                cout << "This is where the forking action happens!\n\n" << endl;
                argumentCount = argumentCount + 2;
                break;
      }
      else if(string(argv[argumentCount]) == "-s" &&
              string(argv[argumentCount+1]) == "x"){
                cout << "Argument: " << argv[argumentCount];
                cout << "\nArgument: " << argv[argumentCount+1] << "\n";
                cout << "By default, only 20 children "
             << "are allowed to exist at a time.\n\n" << endl;
        argumentCount = argumentCount + 2;
        break;
      }
      else if(string(argv[argumentCount]) == "-t"){
        if(argc == 2){
          cout << "\nThe command you're looking for is '-t time'" << endl;
          argumentCount++;
          return 0;
        }
        else{
            if(string(argv[argumentCount+1]) == "time"){
              cout << "Argument: " << argv[argumentCount];
              cout << "\nArgument: " << argv[argumentCount+1] << "\n";
              cout << "By default, the program will terminate after 100 seconds.\n\n";
              argumentCount = argumentCount + 2;
              return 0;
            }
            else{
              cout << "\nThe command you're looking for is '-t time'\n" << endl;
              argumentCount++;
              return 0;
            }
          }
        }

    case 5:
      if(string(argv[argumentCount]) == "-h"){    //basic help function
        cout << "Current Argument: " << argv[argumentCount];
        cout << "\nSomeone calling for help?" << endl;
        cout << "This program is goint to compute the sum of integers using";
        cout << " a BINARY TREE OF PROCESSES.\n";
        cout << "This program will make use of multiple processes using";
        cout << " shared memory and signals to communicate between processes\n";
        cout << "Exiting...\n\n\n";
        argumentCount = argumentCount + 1;
        return 0;
      }

    default:
      cout << "Current Argument: " << argv[argumentCount];
      cout << "\nERROR: Comand line: " << argv[argumentCount];
      cout << "\nSomething was not correct. Check 'master -h'";
      cout << "\n for the proper syntax. Exiting...\n\n\n";
      return 0;
  }
}while(argumentCount != argc);



  return 0;
}
