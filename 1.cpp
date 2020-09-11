#include <locale>
#include <iostream>
#include "cat.h"

using namespace cat;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    Cat cat("Вася", Cat::getRandomColor(), 4);
    cat.say();
    cat.printPaws();
    cout << cat.getColor() << endl;
    return 0;
}
