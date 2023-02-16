#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Predmet
{
    int math[11];
    int bel[11];
    int it[11];
};
typedef struct Predmet Predmet;

struct student
{
    char name[16];
    char surname[16];
    char lastname[16];
    int class_num;
    struct Predmet subject;
};
typedef struct Student student;

student *data;
int counter=1;

void AddGrade(char *predmet, int grade, int cnum);
double CalcGrades(int *clas);
void AddStudent(char *name, char *surname, char *lastname, int class_num);



void AddStudent(char *name, char *surname, char *lastname, int class_num)
{
    data = (struct Student*)realloc(data, ++counter);
    if(data==NULL){
        printf("asdasd");
    }//proverka
    strcpy(data[counter-1].name,name);
    strcpy(data[counter-1].surname,surname);
    strcpy(data[counter-1].lastname,lastname);
    data[counter-1].class_num=class_num;
}

AddGrade(char *predmet, int grade, int cnum)
{
    int j;
    for(int i=1;i<counter;i++){
        if(data[i].class_num==cnum)
        {
            if(strcmp(predmet,"math")==0)
            {
                for(int j=1;j<11;j++){
                    if(data[counter-1].subject.math[j]==0){
                        data[counter-1].subject.math[j]==grade;
                    }
                }
                if(j>10){printf("already max amount of marks";}
            }
            else
                if(strcmp(predmet,"bel")==0)
            {
                for(int j=1;j<11;j++){
                    if(data[counter-1].subject.bel[j]==0){
                        data[counter-1].subject.bel[j]==grade;
                    }
                }
                if(j>10){printf("already max amount of marks";}
            }
            else
                if(strcmp(predmet,"it")==0)
            {
                for(int j=1;j<11;j++){
                    if(data[counter-1].subject.it[j]==0){
                        data[counter-1].subject.it[j]==grade;
                    }
                }
                if(j>10){printf("already max amount of marks";}
            }
        }
    }
}

double CalcGrades(int *clas)
{
    double grades=0;
    int broi;
    for(int i=1;i<counter;i++)
    {
        if(data[i].class_num/100==clas)
        {
            for(int j=1;j<11;j++)
            {
                if(data[i].subject.math[j]!=0){
                    broi++;
                    grades+=data[i].subject.math[j];
                }
                if(data[i].subject.bel[j]!=0){
                    broi++;
                    grades+=data[i].subject.bel[j];
                }
                if(data[i].subject.it[j]!=0){
                    broi++;
                    grades+=data[i].subject.it[j];
                }
            }
        }
    }
    return grades/broi;
}

void Writing()
{
    FILE *fp = fopen("fail.bin","wb");
    if(fp==NULL){

    }
    for(int i=1;i<=counter;i++){
        if(fwrite(data[i],sizeof(struct Student),1,fp)!=1){}//greshka v pisane
    }
    close(fp);
}

void Chetene()
{
    FILE *fp = fopen"director.txt", "r");
    char row[200];
    while(fp!=EOF){
        if(fgets(row,200,fp)==NULL){break;};
        int class_num=(row[0]-'0')*10000+(row[1]-'0')*1000+(row[2]-'0')*100+(row[3]-'0')*10+row[4];
        data[counter-1].class_num=class_num;
        int temp=0;
        int current=7;
        for(int i=current;i<strlen(row);i++,current++)
        {
            if(row[i]!=' '){
                data[counter-1].name[temp++]=row[i];
            }
        }
        data[counter-1].name[temp++]=row[i]='\0';
        current++;

        for(int i=current;i<strlen(row);i++,current++)
        {
            if(row[i]!=' '){
                data[counter-1].surname[temp++]=row[i];
            }
        }
        data[counter-1].name[temp++]=row[i]='\0';
        current++

        for(int i=current;i<strlen(row);i++,current++)
        {
            if(row[i]!=' '){
                data[counter-1].lastname[temp++]=row[i];
            }
        }
        data[counter-1].name[temp++]=row[i]='\0';

        current+=5;
        int pos=1;
        for(int i=current;i<strlen(row);i++,current++)
        {
            if(row[i]>='2'||row[i]<='6')data[counter-1].subject.math[pos++]=row[i]-'0';
            else
                if(row[i]=' ')continue;
            else break;
        }
        current+=3;

        for(int i=current;i<strlen(row);i++,current++)
        {
            if(row[i]>='2'||row[i]<='6')data[counter-1].subject.bel[pos++]=row[i]-'0';
            else
                if(row[i]=' ')continue;
            else break;
        }
        current+=3;

        for(int i=current;i<strlen(row);i++,current++)
        {
            if(row[i]>='2'||row[i]<='6')data[counter-1].subject.it[pos++]=row[i]-'0';
            else
                if(row[i]=' ')continue;
            else break;
        }

    }
    fclose(fp);
}
