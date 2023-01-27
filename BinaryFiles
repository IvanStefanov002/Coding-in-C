#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Store{
    char name [31];
    int ID;
    char expiryDate[21];
    int price;
}Store;

int count;
void WriteToBinary(Store *prod);
void WriteToText(Store *prod);
void ReadFromFile();

int main()
{
    remove("in.bin");
    remove("data.txt");

    Store *product;
    product = (Store*)calloc(2, sizeof(Store));

    count = 0;
    strcpy(((product + count)->name), "Product1");
    ((product + count)->ID)=1;
    strcpy(((product + count)->expiryDate), "2021.01.11");
    ((product + count)->price)=1;
    printf("Name -> %s\n", ((product + count)->name));
    printf("ID -> %d\n", ((product + count)->ID));
    printf("Expiry Date -> %s\n", ((product + count)->expiryDate));
    printf("Price -> %d\n", ((product + count)->price));
    WriteToBinary((product + count)); //записвам в бинарен
    WriteToText((product + count)); //записвам в текстови


    count = 1;
    strcpy(((product + count)->name), "Product2");
    ((product + count)->ID)=2;
    strcpy(((product + count)->expiryDate), "2022.02.22");
    ((product + count)->price)=2;
    printf("Name -> %s\n", ((product + count)->name));
    printf("ID -> %d\n", ((product + count)->ID));
    printf("Expiry Date -> %s\n", ((product + count)->expiryDate));
    printf("Price -> %d\n", ((product + count)->price));
    WriteToBinary((product + count));
    WriteToText((product + count));

    ReadFromFile(); // чета

    return 0;
}

void WriteToBinary(Store *prod){
    int sizeArt;
    FILE* fp;
    if((fp = fopen("in.bin","ab+")) == NULL)
    {
        printf("Error opening the file!");
        exit(10);
    }
    sizeArt=((sizeof(prod->name))); //вземам размера

    if(fwrite(&sizeArt,sizeof(int),1,fp)!=1) printf("writing error");
    if(fwrite((prod->name),sizeArt,1,fp)!=1) printf("writing error");
    if(fwrite(&(prod->ID), sizeof(int),1,fp)!=1) printf("writing error");
    if(fwrite((prod->expiryDate), 21,1,fp)!=1) printf("writing error");
    if(fwrite(&(prod->price), sizeof(int),1,fp)!=1) printf("writing error");
    fclose(fp);
}

void WriteToText(Store *prod){
    FILE* fp;
    if((fp = fopen("data.txt","a+")) == NULL)
    {
        printf("Error opening the file!");
        exit(10);
    }

    fprintf(fp, "%s %d %s %d", prod->name, prod->ID, prod->expiryDate, prod->price);

    rewind(fp);

    fclose(fp);
}

void ReadFromFile()
{
    Store prod;
    int sizeArt;

    FILE* fp;
    if((fp=fopen("in.bin","rb"))==NULL)
    {
        printf("Error opening the file!");
        exit(11);
    }

    printf("---------- Binary File Data ----------\n");
    for(;;)
    {
        if(feof(fp) != 0) {
            break;
        }
        if(fread(&sizeArt,sizeof(int),1,fp)!=1)
        {
            break;
        }
        if(fread((prod.name),1,sizeArt,fp)!=sizeArt)
        {
            printf("reading error bin name"); break;
        }
        if(fread(&prod.ID,sizeof(int), 1,fp)!=1)
        {
            printf("reading error bin ID"); break;
        }
        if(fread((prod.expiryDate),1,21,fp)!=21)
        {
            printf("reading error bin expiryDate"); break;
        }
        if(fread(&prod.price, sizeof(int), 1,fp)!=1)
        {
            printf("reading error bin price"); break;
        }
        printf("Bin Name: %s\n",(prod.name));
        printf("Bin ID: %d\n",prod.ID);
        printf("Bin ExpDate: %s\n",(prod.expiryDate));
        printf("Bin Price: %d\n",prod.price);
        printf("----------\n");
    }
    fclose(fp);


    FILE* fpTxt;
    if((fpTxt = fopen("data.txt","r")) == NULL)
    {
        printf("Error opening the TXT file!");
        exit(10);
    }
    printf("---------- Text File Data ----------\n");
    for(;;) {
        if(feof(fpTxt)) {
            break;
        }
        fscanf(fp, "%s %d %s %d", prod.name, &prod.ID, prod.expiryDate, &prod.price);
        printf("Txt Name: %s\n",(prod.name));
        printf("Txt ID: %d\n",(prod.ID));
        printf("Txt ExpDate: %s\n",(prod.expiryDate));
        printf("Txt Price: %d\n",(prod.price));
        printf("----------\n");
    }
    fclose(fpTxt);
}
