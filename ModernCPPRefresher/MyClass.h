#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() { cout << "MyClass constructor called" << endl; }
    ~MyClass() { cout << "MyClass destructor called" << endl; }
    void SayHello() { cout << "Hello from MyClass!" << endl; }
};