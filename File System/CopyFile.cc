/*
To Display data in Console
*/

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
    ifstream inFile;
    ofstream onFile;
    char str;

    inFile.open("sampleText.txt");
    onFile.open("copy.txt");

    auto start1 = high_resolution_clock::now();
    while (inFile.get(str))
    {
        onFile.put(str);
    }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(end1 - start1).count();
    cout << "Execution time: " << duration1 << " ns" << endl;

    cout << "Copied!\n";
    inFile.close();
    onFile.close();
}
