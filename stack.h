#include <iostream>

namespace stack
{
    using namespace std;

    class Stack
    {
    protected:
        int arr[10];
        int length;

    public:
        Stack()
        {
            this->length = 0;
        }
        bool print()
        {
            bool result;
            try
            {
                for (int i = 0; i < this->length; i++)
                {
                    cout << "Элемент №" << i << ": " << this->arr[i] << endl;
                }
                result = true;
            }
            catch (...)
            {
                result = false;
            }

            return result;
        }

        bool push(int number)
        {
            bool result;

            try
            {
                if (this->length >= 10)
                {
                    throw false;
                }
                this->arr[this->length] = number;
                ++this->length;
                result = true;
            }
            catch (...)
            {
                result = false;
            }
            return result;
        }

        int getLength()
        {
            return this->length;
        }

        int pop()
        {
            int number;
            try
            {
                number = this->arr[this->length - 1];
                this->arr[this->length - 1] = 0;
                --this->length;
            }
            catch (...)
            {
                number = 0;
            }

            return number;
        }

        bool reset()
        {
            bool result;
            try
            {
                for (int i = 0; i < this->length; i++)
                {
                    this->arr[i] = 0;
                }
                this->length = 0;
                result = true;
            }
            catch (...)
            {
                result = false;
            }

            return result;
        }

        int maxLength()
        {
            this->length = 10;
            return this->length;
        }
    };
} // namespace stack
