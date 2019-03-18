#include <stdio.h>

int main(){

    //init
    int n, num[10]={0}, i, j, minIndex;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &num[i]);

    //sort
    for(i=0;i<n;i++){
        minIndex=i;
        for(j=1+i;j<n;j++){//set min
            if(num[minIndex]>num[j])
                minIndex=j;
        }
        //swap
        int tmp=num[minIndex];
        num[minIndex]=num[i];
        num[i]=tmp;
    }

    //print
    for(i=0;i<n;i++)
        printf("%d ", num[i]);
    return 0;
}
