/*
________________________________________________________________________________
    Sam Kinsella
    source1.cpp
    This file id the main file for the exacutable 'master'
    usage is :
      ./master -h
      ./master [-h] [-s i] [-t time] datafile
________________________________________________________________________________
*/
#include <ctype.h>
#include <getopt.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <cstdlib.h>
#include <string.h>
#include <iostream.h>

const int MAX_CHILDREN = 20;
const int MAX_TIME = 100;

int s = MAX_CHILDREN;
int t = MAX_TIME;

int main(int argc, char** argv){

  //clean up printing for easy view
  setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

  bool boolFlag = true;
  //get options from the command line arguments
  while(true){
    int myInt = getopt(argc, argv, "h:s:t:");

    if(myInt == -1)
      break;

    switch(myInt){

      case 'h':
        std::cout << "\nSomeone calling for help?\n";
        std::cout << "This program is goint to compute the sum of integers using";
        std::cout << " a BINARY TREE OF PROCESSES.\n";
        std::cout << "This program will make use of multiple processes using";
        std::cout << " shared memory and signals to communicate between processes\n";
        std::cout << "Exiting...\n\n\n";
        return 0;

      case 's':
        if(!isdigit(*optarg) || (s = atoi(optarg)) < 0){
          cout << "Invalid amount of children. Max amount is 20." << endl;
          boolFlag = false;
        }
        break;

      case 't':
        if(!isdigit(*optarg) || (t = atoi(optarg)) < 0){
          cout << "Invalid amount of children. Max amount is 20." << endl;
          boolFlag = false;
        }
        break;

      default:
        boolFlag = false;
    }
  }

  //if there is invalid input, print usage
  if (!boolFlag){
    std::cout << "\nTry this: ./master -h\n";
    return 0;
  }

}

}
