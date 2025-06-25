//Problem 8
#include <stdio.h>


int collatz(int n){
    int count=0;
    if(n<=0){
        printf("Undefined");
    }
    while(n!=1){
        if (n%2==0){
            n=n/2;
        } else if(n%2!=0) {
            n=n*3+1;
        } count++;
    }
    return count;
}


int main() {
    int n,result;
    scanf("%d",&n);
    result=collatz(n);
    printf("%d",result);
    return 0;
}
