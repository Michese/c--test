#include <iostream>
#include <vector>
#include <random>
#include <string>

namespace animal
{
    using namespace std;

    class Animal
    {
    protected:
        int paws;
        string name;
        string color;

    public:
        Animal(string name, string color)
        {
            this->name = name;
            this->color = color;
        }
        Animal(string name, string color, int paws) : Animal(name, color)
        {
            this->paws = paws;
        }

        static string getRandomColor()
        {
            srand(time(NULL));
            string titleRandomColor = "";
            // string colors[] = {"Белый", "Черный", "Голубой", "Серый", "Жёлтый", "Оранжевый", "Коричневый"};
            vector <string> colors = {"Белый", "Черный", "Голубой", "Серый", "Жёлтый", "Оранжевый", "Коричневый"};
            int colorsSize = colors.size();
            int randomNumber = 0 + (rand() % colorsSize);
            titleRandomColor = colors[randomNumber];

            return titleRandomColor;
        }

        virtual void say()
        {
            cout << "???" << endl;
        }

        void sleep()
        {
            cout << this->name << " fell asleep" << endl;
        }

        void eat()
        {
            cout << this->name << " eats" << endl;
        }
        string getName()
        {
            return this->name;
        }
        string getColor()
        {
            return this->color;
        }
        int getPaws()
        {
            return this->paws;
        }
    };
} // namespace animal