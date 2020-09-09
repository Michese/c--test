#include <locale>
#include <iostream>
#include "numbers.h"
// #include "stack.h"
#include "singleton.h"

// using namespace stack;
using namespace singleton;

int main()
{
    setlocale(LC_ALL, "Russian");
    Stack st1;
    st1.push(24);
    st1.push(225);
    st1.push(14);
    st1.print();

    Singleton single(st1);
    single.getStack()->push(3);
    // if (single.getStack().push(34))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    // single.getStack().push(4521);
    // single.getStack().push(21);
    // st1.push(33);
    // single.pushStack(6325);
    single.getStack()->print();
    cout << "последний: " << single.getStack()->pop() << endl;
    cout << "Длина: " << single.getStack()->getLength() << endl;

    return 0;
}
