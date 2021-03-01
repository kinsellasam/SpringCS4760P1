// source1.cpp
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <cmath>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <time.h>
#include <fstream> // header in standard library



using namespace std;
const int DEFAULT_CHILDREN = 20;
const int DEFAULT_TIME_SEC = 100;

int s = DEFAULT_CHILDREN;
int t = DEFAULT_TIME_SEC;
bool flag = false;

int main(int argc, char *argv[]){

  //clean the screen
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  bool done = false;
  while (true){
		int c = getopt(argc, argv, ":s:t:h");

		if(c == -1){
      break;
    }

		switch(c){
			case 'h':
        cout << "\nSomeone calling for help?" << endl;
        cout << "To run this program: ./master [-s INT] [-t INT] datafile\n";
        return 0;

			case 's':
        /* Check if "t" argument is not a digit or less than 0. */
        if(!isdigit(*optarg) || (t = atoi(optarg)) < 0 || (s = atoi(optarg)) > DEFAULT_CHILDREN){
          cout << "ERROR: INVALID INPUT: " << optarg << endl;
          if(s > DEFAULT_CHILDREN){
            cout << "Maximum number of children is 20. Exiting.\n\n";
          }
          else if(optarg < 0){
            cout << "Number of children must be positive. Exiting.\n\n";
          }
          else{
            cout << "Children must be given as a whole number. Exiting.\n\n";
          }
          done = false;
        }
        else{
          cout << s << endl;
        }
        break;

			case 't':
				/* Check if "t" argument is not a digit or less than 0. */
				if(!isdigit(*optarg) || (t = atoi(optarg)) < 0 || (t = atoi(optarg)) > DEFAULT_TIME_SEC){
          cout << "ERROR: INVALID INPUT: " << optarg << endl;
          if(t > DEFAULT_TIME_SEC){
            cout << "Maximum amount of time is 100 sec. Exiting.\n\n";
          }
          else if(optarg < 0){
            cout << "Number of seconds must be positive. Exiting.\n\n";
          }
          else{
            cout << "Seconds must be given as a whole number. Exiting.\n\n";
          }
        }
        else{
          cout << t << endl;
        }
				break;

			default:
				done = false;
		}
	}

  return 0;
}
