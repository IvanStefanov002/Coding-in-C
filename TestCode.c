#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 6){
        printf("number > 6", number);
        }
    else{
        printf("number is < 6", number);
        }
    return 0;

    int number = 0;
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &number);

    printf("The day is ");
    switch(number)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("not a valid number");
            break;

    }

    int i, k, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (k = 1; k <= i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;

    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    int sum=0;
    if(num2<num1){
        int temp = num1;
        num1=num2;
        num2=temp;
    }
    for(int i = num1+1;i<num2;i++)
    {
        sum+=i;
    }
    printf("Sum = %d",sum);

    int num1,num2;
    int sum=0;
    int proizv=1;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    if(num2<num1){
        int temp = num1;
        num1=num2;
        num2=temp;
    }
    for(int i = num1+1;i<num2;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        else
        {
            proizv*=i;
        }
    }
    printf("Sum = %d\n",sum);
    printf("Proizv = %d",proizv);
    return 0;
    */

    int K=0;
    int sum=0;
    int rows=0;
    printf("Enter K: ");
    scanf("%d",&K);
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++)
    {
        int N=0;
        printf("Enter N: ");
        scanf("%d", &N);
        if(N>K && N%3==0)
            {
                sum = sum + 1;
            }
    }
    printf("%d", sum);
    return 0;



}
