#include <stdio.h>

int main(){

    //init
    int n, num[10]={0}, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &num[i]);

    //sort
    for ( i = 1; i < n; i++ )
    {
        int tmp = num[(j=i)];
        while ( --j >= 0 && tmp < num[j] ){
            num[j+1] = num[j];
            num[j] = tmp;
        }
    }

    //print
    for(i=0;i<n;i++)
        printf("%d ", num[i]);
    return 0;
}
