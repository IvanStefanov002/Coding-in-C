#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5]={3,5,2,3,8};
    FILE * fp;
    fp = fopen("file.txt", "w");
    if((fp = fopen("file.txt", "w"))!=NULL){
        fputs("File created\n", fp);
        fputs("Your massive of numbers is: ", fp);
        for(int i=0;i<5;i++){
            fprintf(fp, "%d ", numbers[i]);
        }
        fputs("\n", fp);
        for(int i=0;i<5;i++){
            if(numbers[i]%2==0){
                fprintf(fp, "%d is odd\n", numbers[i]);
            }else{
                fprintf(fp, "%d is even\n", numbers[i]);
            }
        }

        int temp;
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4 - i; ++j )
            {
                if (numbers[j] > numbers[j+1])
                {
                    temp = numbers[j+1];
                    numbers[j+1] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
        fprintf(fp, "Your sorted massive of numbers is: ");
        for (int i=0;i<5;i++){
            fprintf(fp, "%d ", numbers[i]);
        }
    }else{
        fputs("Unable to create file\n", fp);
    }
    fclose(fp);
    return 0;
}
