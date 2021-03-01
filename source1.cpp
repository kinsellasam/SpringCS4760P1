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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

const int MAX_CHILDREN = 20;
const in MAX_TIME = 100;

int main(int argc, char** argv){

  //clean up printing for easy view
  setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

  programName = argv[0];

  bool boolFlag = true;
  //get options from the command line arguments
  while(true){
    int myInt = getopt(argc, argv, "h:s:t:");

    if(myInt == -1)
      break;

    switch(myInt){

      case 'h':
        usage(EXIT_SUCCESS);

      case 's':
        if(!isnotdigit(*optarg) || (s = atoi(optarg)) < 0){
          error("Invalid amount of children. Max amount is 20.")
          boolFlag = false;
        }
        break;

      case 't':
        if(!isnotdigit(*optarg) || (s = atoi(optarg)) < 0){
          error("Invalid amount of children. Max amount is 20.")
          boolFlag = false;
        }
        break;

      default:
        boolFlag = false;
    }
  }

  //if there is invalid input, print usage
  if (!boolFlag) usage(EXIT_FAILURE);

  /* Check if an input file was supplied. */
  if (argv[optind] == NULL) {
    error("missing input file");
    usage(EXIT_FAILURE);
}

}
