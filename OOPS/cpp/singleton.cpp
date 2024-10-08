#include <iostream>
#include <mutex>
using namespace std;

class KushPatel {
public:
    // Delete copy constructor and assignment operator to prevent copying
    KushPatel(const KushPatel&) = delete;
    KushPatel& operator=(const KushPatel&) = delete;

    // Static method to get the single instance of the class
    static KushPatel& getInstance() {
        static KushPatel instance; // Guaranteed to be destroyed and instantiated on first use
        return instance;
    }

    void showMessage() {
        cout << "KushPatel instance address: " << this << endl;
    }

private:
    // Private constructor to prevent instantiation
    KushPatel() {
        cout << "KushPatel instance created." << endl;
    }

    // Private destructor
    ~KushPatel() {
        cout << "KushPatel instance destroyed." << endl;
    }
};

int main() {
    // Get the single instance of the KushPatel class
    KushPatel& instance1 = KushPatel::getInstance();
    instance1.showMessage();

    // Get the single instance again to demonstrate that it's the same instance
    KushPatel& instance2 = KushPatel::getInstance();
    instance2.showMessage();

    return 0;
}