// source1.cpp
#include <iostream> // header in standard library

using namespace std;

int main(int argc, char *argv[]){
  int counter;
  printf("\nThe program name is: %s",argv[0]);
  if(argc == 1){
    printf("You did not put anything else in the command line.");
    cout << "Allocating memory...\n\n";
  }
  if(argc >2){
    if(argv[1] == "-h"){
      cout <<"The help command has been called.\n");
      cout <<"This program is designed to compute the sum of n integers" &
             " using a binary tree of processes." << endl;
      cout <<"Multiple processes will be " &
             "implemented using shared memory."<< endl;
    }
  }


  return 0;
}
