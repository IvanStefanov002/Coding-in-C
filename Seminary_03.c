#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int figures()
{
    int num=0;
    int a,b,ha=0;
    int Area=0;
    printf("insert number(1-square,2-rectangle,3-triangle,4-circle): ");
    scanf("%d", &num);

    switch(num){
    case 1:
        printf("The figure is Square\n");
        printf("insert a: ");
        scanf("%d", &a);
        Area = a*a;
        printf("Area = %d", Area);
        break;
    case 2:
        printf("The figure is Rectangle\n");
        printf("insert a: ");
        scanf("%d", &a);
        printf("insert b: ");
        scanf("%d", &b);
        Area = a*b;
        printf("Area = %d", Area);
        break;
    case 3:
        printf("The figure is Triangle\n");
        printf("insert a: ");
        scanf("%d", &a);
        printf("insert ha: ");
        scanf("%d", &ha);
        Area = (a*ha)/2;
        printf("Area = %d", Area);
        break;
    case 4:
        printf("The figure is Circle\n");
        float r=0;
        float Area_circle=0;
        printf("insert r: ");
        scanf("%f", &r);
        Area_circle = M_PI*r*r;
        printf("Area = %f", Area_circle);
        break;
    }
}

int swap_of_numbers()
{
    int a,b=0;
    int a1,b1=0;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a1=b;
    b1=a;
    printf("\n");
    printf("a = %d\n", a1);
    printf("b = %d\n", b1);
}

int odd_or_even()
{
    int number=0;
    char s;
    printf("insert number: ");
    scanf("%d", &number);

    if (number%2==0){
        printf("number is even!");
    }
    if (number%2!=0){
        printf("number is odd!");
    }
}

int dec_to_bin()
{
    int a[10];
    int number,i;
    printf("Enter the number to convert: ");
    scanf("%d",&number);
    for(i=0;number>0;i++){
    a[i]=number%2;
    number=number/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
}

int main()
{
    dec_to_bin();
    return 0;
}
