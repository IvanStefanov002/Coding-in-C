#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void stars()
{
    int n=0;
    int i=0;
    int k=0;
    printf("number of rows: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

char square_char()
{
    char z = 0;
    printf("Insert a char: ");
    scanf("%c", &z);

    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c\n", z);
    printf("%c        %c", z, z);
    printf("\n");
    printf("%c        %c", z, z);
    printf("\n");
    printf("%c        %c", z, z);
    printf("\n");
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);
    printf("%c", z);

    return 0;
}

char triangle_char()
{
    char s;
    printf("Insert a char: ");
    scanf("%c", &s);

    printf("     %c\n", s);
    printf("    %c %c\n", s, s);
    printf("   %c   %c\n", s, s);
    printf("  %c     %c\n", s, s);
    printf(" %c%c%c%c%c%c%c%c%c",s,s,s,s,s,s,s,s,s);
    printf("\n");
    printf("\n");
    printf(" %c%c%c%c%c%c%c%c%c\n",s,s,s,s,s,s,s,s,s);
    printf("  %c     %c\n", s, s);
    printf("   %c   %c\n", s, s);
    printf("    %c %c\n", s, s);
    printf("     %c\n", s);

    return 0;
}

int metrics_converter()
{
    int inches = 0;
    float mm,cm,dm,m = 0;
    printf("insert inches: ");
    scanf("%d", &inches);

    mm = inches * 25.4;
    cm = inches * 2.54;
    dm = inches * 0.254;
    m = inches * 0.0254;

    printf("%d inches are equal to:\n", inches);
    printf("%f mm\n", mm);
    printf("%f cm\n", cm);
    printf("%f dm\n", dm);
    printf("%f m", m);

    return 0;
}

float celsius_to_fahrenheit()
{
    float celsius, fahrenheit;
    printf("Insert celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("%f converted to fahrenheit = %f", celsius, fahrenheit);

    return 0;
}

int trapec()
{
    int a=0;
    int b=0;
    int h=0;
    printf("insert a: ");
    scanf("%d", &a);
    printf("insert b: ");
    scanf("%d", &b);
    printf("insert h: ");
    scanf("%d", &h);

    int area = 0;
    area = ((a+b)*h)/2;
    printf("area = %d cm^2", area);

    return 0;
}

int Trigonometry()
{
    int Xa,Xb,Ya,Yb = 0;
    int a,b,area=0;
    printf("enter Xa: ");
    scanf("%d", &Xa);
    printf("enter Ya: ");
    scanf("%d", &Ya);
    printf("enter Xb: ");
    scanf("%d", &Xb);
    printf("enter Yb: ");
    scanf("%d", &Yb);

    printf("A(%d;%d)\t", Xa, Ya);
    printf("B(%d;%d)\n", Xb, Yb);

    a=fabs(Xb-Xa);
    b=fabs(Yb-Ya);
    area = a*b;

    printf("%d", area);

    return 0;
}

int main()
{
    //function
    return 0;
}
