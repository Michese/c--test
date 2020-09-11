#include <iostream>
#include "stack.h"

namespace singleton
{
    using namespace std;
    using namespace stack;

    class Singleton
    {
    protected:
        Stack st;

    public:
        Singleton() {}
        Singleton(Stack st)
        {
            this->st = st;
        }
        ~Singleton()
        {
            delete &this->st;
        }
        void run()
        {
        }

        Stack *getStack()
        {
            return &this->st;
        }

        Singleton &getSingleton()
        {
            return *this;
        }

        void pushStack(int number)
        {
            this->st.push(number);
        }
    };
} // namespace singleton
