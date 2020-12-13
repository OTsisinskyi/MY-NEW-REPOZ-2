#pragma once
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
        name = "0";
        mass = 0;
        amount = 0;
        price = 0;
    }

    ~Candy() {}

    Candy(Candies type_candies, string name, double mass, double amount, double price)
    {
        this->type_candies = type_candies;
        this->name = name;
        this->mass = mass;
        this->amount = amount;
        this->price = price;
    }

    void Ate();
};

class DinnerTime
{
public:
    int day;
    double time;
    Candy candy;

    DinnerTime(int day, double time, Candy name_of_candy)
    {
        this->day = day;
        this->time = time;
        this->candy = name_of_candy;
    }

    void findTheMostExp(Candy* candies, string name);
    void Eat();
};