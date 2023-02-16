
#include<stdio.h>
#include <stdlib.h>

void writening();
void reading();

main()
{
    char choise;
    do
    {
        printf("Enter 1 for writing in file and 2 for reading!\n");
        choise=getchar();
        fflush(stdin);
    }
    while(choise!='1'&&choise!='2');
    switch(choise)
    {
    case '1':
        writening();
        break;
    case '2':
        reading();
        break;
    }
    return 0;
}
void writening()
{
    int j;
    char car_brand[10];
    char car_model[5];
    int engine_cm3;
    int price;
    char registry;
    int unique_num;

    FILE *fp;
    printf("enter car brand: ");
    gets(car_brand);
    j=((sizeof(car_brand)));

    printf("enter unique code of car: ");
    scanf("%d", &unique_num);
    printf("enter car model: ");
    scanf("%s",&car_model);
    printf("enter size of engine: ");
    scanf("%d", &engine_cm3);
    printf("enter price: ");
    scanf("%d", &price);
    printf("registered? Y/N: ");
    scanf("%s", &registry);
    if((fp=fopen("withIn3","ab"))==NULL) printf("the file cant open");
    if(fwrite(&unique_num,sizeof(int),3,fp)!=1) printf("writening error");
    if(fwrite(&j,sizeof(char),1,fp)!=1) printf("writening error");
    if(fwrite(&car_brand,sizeof (car_brand),1,fp)!=1) printf("writening error");
    if(fwrite(&car_model,sizeof(char),1,fp)!=1) printf("writening error");
    if(fwrite(&engine_cm3,sizeof (int),1,fp)!=1) printf("writening error");
    if(fwrite(&price,sizeof(int),1,fp)!=1) printf("writening error");
    if(fwrite(&registry,sizeof(char),1,fp)!=1) printf("writening error");
    fclose(fp);
}
void reading()
{
    char car_brand[10];
    char car_model[5];
    int engine_cm3;
    int price;
    char registry;
    int unique_num;
    int unique_num1;
    FILE *fp;
    printf("enter the unique code of a car: ");
    scanf("%d",&unique_num1);
    if((fp=fopen("withIn3","rb"))==NULL)
        printf("the file cant open");
    for( ; ;)
    {
        if(fread(&unique_num,sizeof(int),1,fp)!=1)
        {
            printf("reading error1");
            break;
        }
        if(fread(&car_brand,sizeof(char),1,fp)!=1)
        {
            printf("reading error2");
        }
        if(fread(&car_model,sizeof(char),1,fp)!=1)
        {
            printf("reading error3");
        }
        if(fread(&engine_cm3,sizeof(int),1,fp)!=1)
        {
            printf("reading error4");
        }
        if(fread(&price,sizeof(int),1,fp)!=1)
        {
            printf("reading error5");
        }
        if(fread(&registry,1,1,fp)!=1)
        {
            printf("reading error6");
        }
        if(unique_num==unique_num1)
        {
            printf("%d ", unique_num);
            printf("%c ", car_brand);
            printf("%c ", car_model);
            printf("%d ", engine_cm3);
            printf("%d ", price);
            printf("%c", registry);
            break;
        }
    }
    fclose(fp);
}


/*
#include<stdio.h>
void writening();
void reading();

main()
{
    char choise;
    do
    {
        printf("Enter 1 for writening in file and 2 for reading!\n");
        choise=getchar();
        fflush(stdin);
    }
    while(choise!='1'&&choise!='2');
    switch(choise)
    {
    case '1':
        writening();
        break;
    case '2':
        reading();
        break;
    }
    return 0;
}
void writening()
{
    int i,number,j;
    double price;
    char article[50];
    FILE *fp;
    printf("enter the string less than 50\n");
    gets(article);
    j=((sizeof(article)));

    printf("enter the number");
    scanf("%d",&number);
    printf("enter the price");
    scanf("%lf",&price);
    if((fp=fopen("withIn2","ab"))==NULL) printf("the file cant open");
    if(fwrite(&number,sizeof(int),1,fp)!=1) printf("writening error");
    if(fwrite(&j,sizeof(int),1,fp)!=1) printf("writening error");
    if(fwrite(article,sizeof (article),1,fp)!=1) printf("writening error");
    if(fwrite(&price,sizeof(double),1,fp)!=1) printf("writening error");
    fclose(fp);
}
void reading()
{
    int i,number,number1;
    char article[50];
    double price;
    FILE *fp;
    printf("enter the number");
    scanf("%d",&number1);
    if((fp=fopen("withIn2","rb"))==NULL)
        printf("the file cant open");
    for( ; ;)
    {
        if(fread(&number,sizeof(int),1,fp)!=1)
        {
            printf("reading error");
            break;
        }
        if(fread(&i,sizeof(int),1,fp)!=1)
        {
            printf("readung error");
            exit(1);
        }
        if(fread(article,1,i,fp)!=i)
        {
            printf("reading error");
            exit(7);
        }
        if(fread(&price,sizeof(double),1,fp)!=1)
        {
            printf("reading error");
            exit(5);
        }
        if(number==number1)
        {
            printf(" %d ",number);
            printf(article);
            printf(" %g",price);
            break;
        }
    }
    fclose(fp);
}
*/
