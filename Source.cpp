#include "Header.h"

 void Candy:: Ate()
 {
     int allowable_amount = 2;
     if (mass * amount > allowable_amount) {
         cout << "\nYou are on diet!";
     }
     else {
         cout << "\nWhat delicious candies!";
     }
 }
       
void DinnerTime :: findTheMostExp(Candy* candies, string name)
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
    int number_of_candy = 3;
    for (int i = 0; i < number_of_candy; i++) {
        cout << "\nCandy: " << (candies[i].name) << " \nPrice :" << candies[i].price << endl;
    }
        
}

 void DinnerTime :: Eat()
 {
     candy.Ate();
 }



 


