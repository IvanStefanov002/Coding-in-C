#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = {"adda"};
    int start = 0;
    int end = strlen(arr) - 1;
    while (end > start)
    {
        if (arr[start++] != arr[end--])
        {
            printf("%s is not a palindrome\n", arr);
            return;
        }
    }
    printf("%s is a palindrome\n", arr);
    return 0;
}
