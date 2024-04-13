#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool prime(int n, int x);


int main(){
    int n;
    scanf("%d",&n);
    if(prime(n, 2)){
        printf("YES");
    }else printf("NO");
    return 0;
}

//neu x^x > n nghia la da ra ngoai khoang lap i=2 -> sqrt(n) -> thoa man
bool prime(int n, int x)
{
    if(n <= 2) return(n==2) ? true : false;
    if(x*x > n) return true;
    if(n % x == 0) return false;
    return prime(n, x+1);
}
