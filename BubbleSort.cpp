#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    int size;
    // Get command line input
    if (argc > 1) {
        size = stoi(argv[1]);
    } else {
        size = 10000;
    }
    cout << "Looking for size: " << size << endl;

    // Declare a vector of longs to store the numbers
    vector<long> longs;

    // Read size numbers from numbers.txt
    // Opens a file input stream
    ifstream fIn;
    fIn.open("./numbers.txt");

    int value;
    // Keep looping while the stream is in a good state and we are not at the end of the file
    while (fIn && fIn.peek() != EOF) {
        // Read the value and push to vector
        fIn >> value;
        longs.push_back(value);
    }
    fIn.close();

    // Print the vector size (to make sure it matches the size printed above)
    cout << "Vector size: " << longs.size() << endl;

    // Bubble Sort the vector
    int numPasses = 0, i;
    long temp;
    bool haveSwapped = true;
    while (haveSwapped) {
        haveSwapped = false;
        for (i = 0; i + 1 < longs.size() - numPasses; ++i) {
            // Compare items at indices i and i+1 and swap if necessary
            if (longs[i] > longs[i + 1]) {
                temp = longs[i];
                longs[i] = longs[i + 1];
                longs[i + 1] = temp;
                // Update haveSwapped
                haveSwapped = true;
            }
        }
        // Update numPasses
        ++numPasses;
    }

    // Print the first and last ten numbers from the vector to the console
    cout << "First ten numbers: ";
    for (int i = 0; i < 9; ++i) {
        cout << longs[i] << ", ";
    }
    cout << longs[9] << "." << endl;

    cout << "Last ten numbers: ";
    for (int i = longs.size() - 10; i < longs.size() - 1; ++i) {
        cout << longs[i] << ", ";
    }
    cout << longs[longs.size() - 1] << "." << endl;

    return 0;
}
