#include <iostream>
#include "animal.h"

namespace cat
{
    using namespace animal;
    using namespace std;

    class Cat : public Animal
    {
    public:
        Cat(string name, string color) : Animal(name, color) {}
        Cat(string name, string color, int paws) : Animal(name, color, paws) {}

        void say()
        {
            cout << "Meow" << endl;
        }

        void printPaws() {
            cout << this->paws << endl;
        }
    };
} // namespace cat