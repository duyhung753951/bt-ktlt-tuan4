#include<stdio.h>

int sum(int a[], int n);

int main(){
    int a[6]={3,4,2,1,5,6};
    printf("%d", sum(a, 6));
    return 0;
}

int sum(int a[], int n)
{
    if(n == 1){
        return a[0];
    }else{
        return a[n-1]+sum(a, n-1);
    }
}
