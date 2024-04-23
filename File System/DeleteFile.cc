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
    
    auto start1 = high_resolution_clock::now();
    int val = remove("copy.txt");
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast <nanoseconds> (end1 - start1).count();
    cout << "Execution time: " << duration1 << " ns" << endl;
    (val ==0) ? cout<<"Deleted!\n" : cout<<"Not deleted!\n";
}
