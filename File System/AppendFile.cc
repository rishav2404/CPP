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
    ofstream onFile;

    onFile.open("sampleText.txt", ios::app);
    auto start1 = high_resolution_clock::now();

    onFile << "Jai Mahakaal!" << endl; /* write data in the file */
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(end1 - start1).count();
    cout << "Execution time: " << duration1 << " ns" << endl;

    cout << "File Appended !" << endl;
}