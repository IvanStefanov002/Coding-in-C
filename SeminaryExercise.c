#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <string.h>

/*
int numbers()
{
    int n1;
    printf("Insert n1: ", n1);
    scanf("%d", &n1);

    int n2;
    printf("Insert n2: ", n2);
    scanf("%d", &n2);
}

int max_number()
{
    int n1=0;
    int n2=0;
    printf("Insert n1: ", n1);
    scanf("%d", &n1);
    printf("Insert n2: ", n2);
    scanf("%d", &n2);
    if (n1>n2){
        printf("n1 is bigger than n2\n");
        printf("\n");
    }
    if (n2>n1){
        printf("n2 is bigger than n1\n");
        printf("\n");
    }
}

int min_number()
{
    int n3=0;
    int n4=0;
    printf("Insert n1: ", n3);
    scanf("%d", &n3);
    printf("Insert n2: ", n4);
    scanf("%d", &n4);
    if (n3>n4){
        printf("n4 is lower than n3");
    }
    if (n4>n3){
        printf("n3 is lower than n4");
    }
}

void function_while()
{
    int number=-1, arr[100], ctr=0;
    int max=INT_MIN, min=INT_MAX;
    while (number!=0)
    {
        printf("insert number: ");
        scanf("%d", &number);
        if (number==0){
            break;
        }
        arr[ctr]=number;
        ctr++;
    }
    for(int i=0;i<ctr;i++){
        printf("%d ", arr[i]);
        }
    for(int j=0;j<ctr;j++){
        if (arr[j]>max){
            max=arr[j];
        }
        if (arr[j]<min){
            min=arr[j];
        }
    }
    printf("\n");
    printf("min = %d", min);
    printf("\n");
    printf("max = %d", max);
}

int third_task()
{
    int people=10;
    srand(time(NULL));
    int x = rand()%people+1;
    printf("%d", x);
}

int time_func()
{
    int input_hour=0;
    int input_minutes=0;
    printf("input hour: ");
    scanf("%d", &input_hour);
    printf("input minutes: ");
    scanf("%d", &input_minutes);
    int minutes=0;
    int hour=0;
    minutes = input_minutes + 15;
    if (minutes < 60)
    {
        printf("The time is: %d:%d", input_hour, minutes);
    }
    if (minutes >= 60)
    {
        int new_minutes=0;
        hour = input_hour + 1;
        new_minutes = minutes - 60;
        if (0<=new_minutes<10){
            if (hour>23){
                hour = 23-input_hour;
                printf("The time is: %d:%d", hour, new_minutes);
            }else{
                printf("The time is: %d:0%d", hour, new_minutes);
            }
        }else{
            if (10<=new_minutes<60){
                if (hour>23){
                    hour = 23-input_hour;
                    printf("The time is: %d:%d", hour, new_minutes);
                }else{
                    printf("The time is: %d:%d", hour, new_minutes);
                }
            }
            }
    }
}

int number_points()
{
    int total_points=0;
    int bonus_points=0;
    int num=0;
    printf("input number: ");
    scanf("%d", &num);
    if (num <=100){
        bonus_points += 5;
        total_points=num + bonus_points;
        if (num%2==0){
            bonus_points+=1;
            total_points+=1;
        }
        if (num%10==5){
            bonus_points+=2;
            total_points+=2;
        }
    }
    if(num<=1000 && num>100){
        bonus_points = bonus_points + (num/5);
        total_points=num + bonus_points;
        if (num%2==0){
            bonus_points+=1;
            total_points+=1;
        }
        if (num%10==5){
            bonus_points+=2;
            total_points+=2;

        }
    }
    if (num>1000){
    bonus_points = bonus_points + (num/10);
    total_points=num + bonus_points;
        if (num%2==0){
            bonus_points+=1;
            total_points+=1;
        }
        if (num%10==5){
            bonus_points+=2;
            total_points+=2;
        }
    }
        printf("bonus points: %d\n", bonus_points);
        printf("total points: %d", total_points);
}

int sports_competitors(){
    int num1,num2,num3=0;
    printf("input competitor's 1 time: ");
    scanf("%d", &num1);
    printf("input competitor's 1 time: ");
    scanf("%d", &num2);
    printf("input competitor's 1 time: ");
    scanf("%d", &num3);

    int sum_time_b=0;
    int sum_time_l=0;
    sum_time_b=num1+num2+num3;
    sum_time_l=num1+num2+num3;
    int counter=0;
    int new_sum=0;

    if (sum_time_b>60){
        sum_time_b-=60;
        counter++;
        if (sum_time_b>60){
            sum_time_b-=60;
            counter++;
            new_sum=sum_time_b;
            if (new_sum>=10){
                printf("The time is: %d:%d", counter, new_sum);
            }
        }
        if (new_sum<10){
            printf("The time is: %d:0%d", counter, sum_time_b);
        }
    }
    if (sum_time_l<60){
        printf("The time is: 0:%d", sum_time_l);
    }

    //function test(); is second solution.
}


int test(){
    int num1,num2,num3=0;
    printf("input competitor's 1 time: ");
    scanf("%d", &num1);
    printf("input competitor's 1 time: ");
    scanf("%d", &num2);
    printf("input competitor's 1 time: ");
    scanf("%d", &num3);
    int counter=0;
    int sum=0;
    sum=num1+num2+num3;

    while (sum>60){
        sum-=60;
        counter++;
    }
    if (sum>10){
        printf("time: %d:%d", counter,sum);
    }else{
        printf("time: %d:0%d", counter,sum);
    }
}


int rectangle(){
    int x,x1,x2,y,y1,y2=0;
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if (x1<x2 && y1<y2){
        if (x>=x1 && y>=y1 && x<=x2 && y<=y2){
            printf("inside!");
        }else{
            printf("outside!");
        }
    }else{
        printf("invalid data!");
    }
}


int student_transport(){
    int kilometres=0;
    float price=0;
    printf("input kilometres: ");
    scanf("%d", &kilometres);

    if (kilometres>=20 && kilometres<100){
        price=kilometres * 0.09;
        printf("You travel by bus! Trip price is: %f", price);
    }
    if (kilometres>=100){
        price=kilometres * 0.06;
        printf("You travel by train! Trip price is: %f", price);
    }
    if (kilometres<20){
        char dayperiod[6];
        printf("Choose day period - day/night: ");
        scanf("%s", &dayperiod);
        if (strcmp(dayperiod, "day") == 0){
            price=kilometres*0.79;
        }
        if (strcmp(dayperiod, "night") == 0){
            price=kilometres*0.90;
        }
        price+=0.70;
        printf("You travel by taxi! Trip price is: %f", price);
    }
}
*/

int main()
{
    //func();
    return 0;
}
