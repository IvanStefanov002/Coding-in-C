#include <stdio.h>
#include <stdlib.h>

//zadanie: Даден е двумерен масив с n реда и m стълба. Да се генерира едномерен масив,
//елементите на който са подредените по големина най-големи общи делители на
//всички двойки елементи на двумерния масив.

void BubbleSortEven(int a[], int array_size){
    int s, k, temp, p;
    for(s=0;s<(array_size - 1); ++s){
        for(k=0;k<array_size;++k){
            if(a[k] > a[k+1]){
                temp = a[k+1];
                a[k+1] = a[k];
                a[k]=temp;
            }
        }
    }
    for(p=0;p<array_size; p++){
        printf("%d ", a[p]);
    }
}

void BubbleSortOdd(int a[], int array_size){
    int s, k, temp, p;
    for(s=0;s<(array_size - 1); ++s){
        for(k=0;k<array_size-1;++k){
            if(a[k] > a[k+1]){
                temp = a[k+1];
                a[k+1] = a[k];
                a[k]=temp;
            }
        }
    }
    for(p=0;p<array_size; p++){
        printf("%d ", a[p]);
    }
}
int main()
{
    //initializing N and M
    int N,M;
    printf("insert rows of massive N: ");
    scanf("%d", &N);
    printf("insert columns of massive M:");
    scanf("%d", &M);

    //initializing massive
    int twoDArray[N][M];

    //Filling the massive
    int counter=0;
    int temp;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("twoDArray[%d][%d] = ", i,j);
            scanf("%d", &temp);
            twoDArray[i][j] = temp;
            counter++;
        }
    }
    //printing the massive
    printf("Your twoDArray massive is: \n");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", twoDArray[i][j]);
        }
        printf("\n");
    }

    //casting twoDArray to OneDArray
    int oneDArray[N*M];
    int index=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            oneDArray[index]=twoDArray[i][j];
            index++;
        }
        printf("\n");
    }

    printf("Your 1D Array is: \n");
    for(int i=0; i<N*M; i++)
    {
        printf("%d ",oneDArray[i]);
    }
    printf("\n");

    if(counter%2==0)
    {
        int massive[M*N];
        int num1;
        int num2;
        int massive_count=0;
        for(int i=0; i<N*M; i+=2)
        {
            num1 = oneDArray[i];
            num2 = oneDArray[i+1];
            int gcd, remainder, numerator, denominator;
            if (num1 > num2)
            {
                numerator = num1;
                denominator = num2;
            }
            else
            {
                numerator = num2;
                denominator = num1;
            }
            remainder = numerator % denominator;
            while (remainder != 0)
            {
                numerator   = denominator;
                denominator = remainder;
                remainder   = numerator % denominator;
            }
            gcd = denominator;
            massive[massive_count] = gcd;
            massive_count++;
            printf("GCD of %d and %d = %d\n", num1, num2, gcd);
        }
        printf("\nYour 1D massive is: \n");
        for(int i=0; i<massive_count; i++)
        {
            printf("%d ",massive[i]);
        }
        //massive sorting
        printf("\n Your sorted 1D massive is: \n");
        BubbleSortEven(massive, massive_count);
        return 0;
    }
    else
    {
        int massive[M*N];
        int num1;
        int num2;
        int massive_count=0;
        for(int i=0; i<N*M-1; i+=2)
        {
            num1 = oneDArray[i];
            num2 = oneDArray[i+1];
            int gcd, remainder, numerator, denominator;
            //remainder = ostatuk
            //numerator = chislitel
            //denominator = znamenatel
            if (num1 > num2)
            {
                numerator = num1;
                denominator = num2;
            }
            else
            {
                numerator = num2;
                denominator = num1;
            }
            remainder = numerator % denominator;
            while (remainder != 0)
            {
                numerator   = denominator;
                denominator = remainder;
                remainder   = numerator % denominator;
            }
            gcd = denominator;
            massive[massive_count] = gcd;
            massive_count++;
            printf("GCD of %d and %d = %d\n", num1, num2, gcd);
        }
        massive[massive_count] = oneDArray[counter-1];
        printf("\nYour 1D massive is: \n");
        for(int i=0; i<massive_count+1; i++)
        {
            printf("%d ",massive[i]);
        }
        //massive sorting
        printf("\n Your sorted 1D massive is: \n");
        BubbleSortOdd(massive, massive_count+1);
        return 0;
    }
}
