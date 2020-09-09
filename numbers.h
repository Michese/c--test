#include <iostream>
#include <locale>

namespace numbers {
using namespace std;

class Numbers
{
private:
    int operand1, operand2;

public:
    Numbers()
    {
        this->operand1 = 0;
        this->operand2 = 0;
    }
    Numbers(int operand1, int operand2)
    {
        this->operand1 = operand1;
        this->operand2 = operand2;
    }
    void set(int operand1, int operand2)
    {
        this->operand1 = operand1;
        this->operand2 = operand2;
    }
    void print()
    {
        cout << "Операнд1: " << this->operand1 << endl;
        cout << "Операнд2: " << this->operand2 << endl;
    }
};

}