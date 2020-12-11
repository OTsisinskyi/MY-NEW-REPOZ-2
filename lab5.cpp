#include <iostream>
#include <string>

using namespace std;

enum Candies
{
    popcorn,
    snack,
    cake,
    chips,
    pancakes,
};

class Candy
{
public:
    Candies type_candies;
    string name;
    double mass;
    double amount;
    double price;

    Candy()
    {
        name_type = NULL;
        name = NULL;
        mass = 0;
        amount = 0;
        price = 0;
    }

    ~Candy() {}
    Candy(TYPE name_type, string name, double mass, double amount, double price)
    {
        this->name_type = name_type;
        this->name = name;
        this->mass = mass;
        this->amount = amount;
        this->price = price;
    }

    void Ate()
    {
        int allowable_amount;
        if (mass * amount > allowable_amount) {
            cout << "\nYou are on diet!";
        }
        else {
            cout << "\nWhat delicious candies!";
        }
    }
};

class Dinnertime
{
public:
    int day;
    double time;
    Candy candy;

    Dinnertime(int day, double time, Candy nameofcandy)
    {
        this->day = day;
        this->time = time;
        this->candy = nameofcandy;
    }

    void Findthemostexp(Candy* candies, string name)
    {
        Candy max;
        max = candies[0];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4 - i; j++)
            {
                if (candies[j].price < candies[j + 1].price)
                {
                    max = candies[j];
                    candies[j] = candies[j + 1];
                    candies[j + 1] = max;
                }
            }
        }
        int number_of_candy;
        for (int i = 0; i < number_of_candy; i++) {
            cout << "\nCandy: " << (candies[i].name) << " \nPrice :" << candies[i].price << endl;
        }
    }

    void Eat()
    {
        candy.Ate();
    }
};

int main() {
    TYPE type_1 = popcorn;
    TYPE type_2 = snack;
    TYPE type_3 = cake;
    TYPE type_4 = chips;
    TYPE type_5 = pancakes;
    Candy Candies[5];
    Candies[0] = Candy(type_1, "Popcorn", 0.5, 0, 50);
    Candies[1] = Candy(type_2, "Snack", 0.33, 0, 20);
    Candies[2] = Candy(type_3, "Cake", 3, 0, 80);
    Candies[3] = Candy(type_4, "Chips", 0.5, 2, 60);
    Candies[4] = Candy(type_5, "Pancakes", 1, 2, 90);


    Dinnertime laba(16, 20.30, Candies[2]);
    laba.findthemostexp(Candies, "name");
    laba.eat();
}