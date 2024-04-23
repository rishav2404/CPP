/*
To create and write file
*/

#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace chrono;

int main(){
    ofstream onFile;  /*ofstream---> class , onFile---> we created object */
    auto start = high_resolution_clock::now();
    onFile.open("sampleText1.txt");
    auto end = high_resolution_clock::now();
    auto duration = duration_cast <nanoseconds> (end - start).count();
    cout << "Execution time: " << duration << " ns" << endl;
    cout << "File created !" << endl;


    auto start1 = high_resolution_clock::now();
    onFile << "Hello Babes ! Fuck Yourself !!";  /* write data in the file */
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast <nanoseconds> (end1 - start1).count();
    cout << "Execution time: " << duration1 << " ns" << endl;
    cout << "Data written in the file !... Now closing the file..." << endl;
    onFile.close();
}