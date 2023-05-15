#include <iostream>
#include <cstdlib>
#include "pow.h"
using namespace std;

int main(int argc, char* argv[]){
    float x = atof(argv[1]);
    int y = atoi(argv[2]);
    
    cout << pow(x,y) << endl;
}
