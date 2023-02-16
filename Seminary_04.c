#include <stdio.h>
#include <stdlib.h>

int second_exercise(){
    int n;
    scanf("%d\n", &n);

    int arr[n];
    int flag=0;
    for(int i=0;i<n/2;i++){
        scanf("%d", &arr[i]);
        }
    for (int i=1;i<n;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    /*
    for(int i=1;i<n;i++)
        {
        if(i%2==0 && arr[i]>arr[i-1]){flag=1;break;}
        if(i%2==1 && arr[i]<arr[i-1]){flag=1;break;}
        }
    if(flag==0)
    printf("YES");
    else
        printf("NO");

    for(int i=0;i<n;i++){
        if (arr[i-2]<arr[i-1] && arr[i-1]>arr[i]){
            printf("\nTrue!");
        }else{
            printf("\nFalse!");
        }
        i=i+3;
    }
    */
}

int main()
{
    second_exercise();
    return 0;
}
