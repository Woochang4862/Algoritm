#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(){

    //init
    int n, num[10]={0}, i, j, swapped;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &num[i]);

    //sort
    i=0;
    do{
        swapped=FALSE;
        i++;
        for(j=0;j<n-i;j++){
            if(num[j]>num[j+1]){//swap
                int tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
                swapped=TRUE;
            }
        }
    }while (swapped);

    //print
    for(i=0;i<n;i++)
        printf("%d ", num[i]);
    return 0;
}
