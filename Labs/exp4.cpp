#include <iostream>
using namespace std;

// Inline Function
inline int add(int a, int b){
    int c = a + b;
    return c;
}

// Default Argument Function
void data(string name = "Student"){
    cout << "Hi, " << name << endl;
}

// Function Overloading
int multiply(int a, int b){
    return a * b;
}

double multiply(double a, double b){
    return a * b;
}

int main(){
    int d = 10;
    int e = 20;

    cout << "----Inline Function----" << endl;
    cout << add(d, e) << endl;
    cout << add(30, 40) << endl;
    cout << endl;

    cout << "----Default Argument----" << endl;
    cout << "With argument : ";
    data("Shivam");
    cout << "Default argument : ";
    data();

    cout << endl;

    cout << "----Function Overloading----" << endl;
    cout << "Integer Multiplication : " << multiply(5, 4) << endl;
    cout << "Double Multiplication : " << multiply(5.5, 2.0) << endl;

    return 0;
}