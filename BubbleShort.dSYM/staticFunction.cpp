/*#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member to keep track of objects

public:
    // Constructor increments the count for each new object
    Counter() {
        count++;
    }

    // Static function to get the current object count
    static int getObjectCount() {
        return count;
    }
};

// Initialize the static data member outside the class
int Counter::count = 0;

int main() {
    // Creating objects of Counter class
    Counter c1, c2, c3, c4, c5;

    // Accessing the static function without creating an object
    cout << "Total objects created: " << Counter::getObjectCount() << endl;

    return 0;
}*/


//Example :- 2
#include <iostream>
using namespace std;

class MathUtils {
public:
    // Static function to add two numbers
    static int add(int a, int b) {
        return a + b;
    }

    // Static function to multiply two numbers
    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    // Using static functions without creating an object of MathUtils
    int sum = MathUtils::add(5, 3);
    int product = MathUtils::multiply(4, 6);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
