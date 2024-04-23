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
    string str;
    ifstream inFile; /* ifstream---> class , inFile---> we created object of class */
    
    auto start = high_resolution_clock::now();
    inFile.open("sampleText.txt");
    auto end = high_resolution_clock::now();
    auto duration = duration_cast <nanoseconds> (end - start).count();
    cout << "Execution time: " << duration << " ns" << endl;

    auto start1 = high_resolution_clock::now();
    while (getline(inFile, str)){
        cout << str;
    }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast <nanoseconds> (end1 - start1).count();
    cout << "Execution time: " << duration1 << " ns" << endl;
    

    inFile.close();
}
