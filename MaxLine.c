#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXSIZE 1001
int main()
{
    char line[MAXSIZE];
    char maxLine[MAXSIZE];

    maxLine[0]='\0';

//    while (gets(line)!=NULL)
    while (fgets(line,MAXSIZE,stdin)!=NULL)
    {
        if (strlen(maxLine)<strlen(line))
        {
            strcpy(maxLine, line);
        }
    }
    puts(maxLine);
    printf("Max line is: %s\nLength: %u", maxLine, strlen(maxLine));

    return 0;
}
