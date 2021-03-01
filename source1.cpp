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
  while (true) {
		int c = getopt(argc, argv, "h:s?:t?:");

		if (c == -1) break;

		switch (c) {
			case 'h':
        cout << "\nSomeone calling for help?" << endl;
        cout << "This program is goint to compute the sum of integers using";
        cout << " a BINARY TREE OF PROCESSES.\n";
        cout << "This program will make use of multiple processes using";
        cout << " shared memory and signals to communicate between processes\n";
        cout << "Exiting...\n\n\n";
        return 0;

			case 's':
				/* Check if "s" argument is not a digit or less than 0. */
				if (!isdigit(*optarg) || (s = atoi(optarg)) < 0) {
          cout << "invalid timeout time " << optarg << endl;
					done = false;
				}
				break;
			case 't':
				/* Check if "t" argument is not a digit or less than 0. */
				if (!isdigit(*optarg) || (t = atoi(optarg)) < 0) {
					cout << "invalid timeout time " << optarg << endl;
					done = false;
				}
				break;
			default:
				done = false;
		}
	}

  return 0;
}
