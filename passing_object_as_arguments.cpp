#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }
    // Pass object as argument and return object
    Number add(Number n) {
        Number result;
        result.value = value + n.value;
        return result;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {

    Number n1(10);
    Number n2(20);
    
    // n2 is passed as an object
    Number n3 = n1.add(n2);

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    cout << "Sum: ";
    n3.display();

    return 0;
}