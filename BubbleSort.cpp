#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int size;
    // Get command line input
    if (argc > 1) {
        size = stoi(argv[1]);
    } else {
        size = 10000;
    }
    cout << "Looking for size: " << size << endl;
    
    // TODO: Declare a vector of longs to store the numbers
    
    // TODO: Read size numbers from numbers.txt
    
    // TODO: Print the vector size (to make sure it matches the size printed above)
    
    // TODO: Bubble Sort the vector
    
    // TODO: Print the first and last ten numbers from the vector to the console

    return 0;
}
