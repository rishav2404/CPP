#include <iostream>
using namespace std;

class ABC {
    static ABC* instances[20];   // Static array to hold up to 20 object pointers
    static int count;            // To track the number of created instances

    // Private constructor to prevent external instantiation
    ABC() {}

    public:
    static ABC* get_inst() {
        if (count < 20) {
            instances[count] = new ABC;
            return instances[count++];
        } else {
            cout << "Only 20 instances allowed!" << endl;
            return nullptr;
        }
    }
};

// Initialize the static members
ABC* ABC::instances[20] = {nullptr};// Initialize array elements to nullptr
int ABC::count = 0;

int main() {
    for (int i = 0; i < 22; ++i) {  // Attempting to create 22 instances (2 will fail)
        ABC* obj = ABC::get_inst();
        cout << "Instance " << i + 1 << ": " << obj << endl;
    }
    
    return 0;
}