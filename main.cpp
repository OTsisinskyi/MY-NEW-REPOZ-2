#include "Header.h"

int main() {
    Candies type_1 = popcorn;
    Candies type_2 = snack;
    Candies type_3 = cake;
    Candies type_4 = chips;
    Candies type_5 = pancakes;
    Candy Candies[5];
    Candies[0] = Candy(type_1, "Popcorn", 0.5, 0, 50);
    Candies[1] = Candy(type_2, "Snack", 0.33, 0, 20);
    Candies[2] = Candy(type_3, "Cake", 3, 0, 80);
    Candies[3] = Candy(type_4, "Chips", 0.5, 2, 60);
    Candies[4] = Candy(type_5, "Pancakes", 1, 2, 90);


    DinnerTime time(16, 20.30, Candies[2]);
    time.findTheMostExp(Candies, "name");
    time.Eat();
}