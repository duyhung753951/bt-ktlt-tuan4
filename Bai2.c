#include<stdio.h>

int max(int *a, int n);

int main(){
    int a[6]={3,4,2,1,5,6};
    printf("%d", max(a, 6));
    return 0;
}

int max(int a[], int n)
{
    if(n == 1){
        return a[0];
    }else{
        return max(a, n-1)<(a[n-1])?a[n-1]:max(a, n-1);
    }
}
