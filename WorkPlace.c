#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int w1,w2=0;
    int h1,h2=0;
    float work_place = 0.7*1.2;
    float number_work_places=0;
    int total_work_places=0;
    int left_place_size=0;
    int right_place_size=0;
    int hall=0;
    int left_side_workplaces=0;
    int right_side_workplaces=0;
    int hall_place=0;

    printf("insert w1: ");
    scanf("%d", &w1);
    printf("insert h1: ");
    scanf("%d", &h1);
    printf("insert w2: ");
    scanf("%d", &w2);
    printf("insert h2: ");
    scanf("%d", &h2);
    printf("One workplace has %f m^2\n", work_place);

    hall = 1*(h1+h2);

    left_place_size =  w1*h1;
    right_place_size= w2*h2;

    left_side_workplaces=left_place_size/work_place;
    right_side_workplaces=right_place_size/work_place;
    hall_place=hall/work_place;

    printf("hall workplaces: %d\n", hall_place);
    printf("left side workplaces: %d\n", left_side_workplaces);
    printf("right side workplaces: %d\n", right_side_workplaces);

    total_work_places = (left_side_workplaces + right_place_size) - hall_place-2;
    printf("total work places = %d", total_work_places);
    return 0;
}
