#include <iostream>

class Number {
public:
    int value;

    Number(int v) : value(v) {}

    // Compare this number with another number
    Number* greater(Number* other) {
        // Use the 'this' pointer to access the member variable
        if (this->value > other->value) {
            return this;
        } else {
            return other;
        }
    }
};

int main() {
    Number num1(10);
    Number num2(20);

    Number* greaterNum = num1.greater(&num2);

    std::cout << "The greater number is: " << greaterNum->value << std::endl;

    return 0;
}

