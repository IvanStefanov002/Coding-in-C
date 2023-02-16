#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vegetables_price, fruits_price=0; // lv/kg
    float euro = 1.95;

    float vegetables_kg=0;
    float fruits_kg=0;

    float vegetables_sum=0;
    float fruits_sum=0;

    printf("Price for a kg of vegetables is: ");
    scanf("%f", &vegetables_price);
    printf("Price for a kg of fruits is: ");
    scanf("%f", &fruits_price);
    printf("How many kgs vegetables would you like? ");
    scanf("%f", &vegetables_kg);
    printf("How many kgs fruits would you like? ");
    scanf("%f", &fruits_kg);

    vegetables_sum = (vegetables_price*vegetables_kg)/euro;
    fruits_sum = (fruits_price*fruits_kg)/euro;

    printf("vegetables price in euro is: %f\n", vegetables_sum);
    printf("fruits price in euro is: %f", fruits_sum);


    return 0;
}
