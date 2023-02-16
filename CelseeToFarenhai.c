#include <stdio.h>
#include <stdlib.h>
/*
#define STEP 20

int main()
{
    const int LOWER_limit = 0;
    const int UPPER_limit = 300;
    int cel;
    float fahr;


    printf("Celsius to Fahrenheit Converter\n");
    printf("C\tF\n");

    for(cel=LOWER_limit; cel<=UPPER_limit; cel+=STEP){
        fahr = cel * 9./5 + 32;
        printf("%d\t%g\n",cel,fahr);

    }
//    printf("Hello world!\n");
    return 0;
}
*/

/*
int main()
{
    int lower,upper,step;
    int cel;
    float fahr;

    printf("lower=");
    scanf("%d", &lower);

    printf("upper=");
    scanf("%d", &upper);

    printf("step=");
    scanf("%d", &step);

    printf("Celsius to Fahrenheit Converter\n");
    printf("C\tF\n");

    for(cel=lower; cel<=upper; cel+=step){
        fahr = cel * 9./5 + 32;
        printf("%d\t%g\n",cel,fahr);

    }

    return 0;
}
*/

int main()
{
    char c;

    while((c=getchar())!=EOF){ //^Z = EOF
        putchar(c);
    }
    return 0;
}
