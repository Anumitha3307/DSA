#include<stdio.h>
int countDigits(int n) {
    // code here
    int count = 0;
    do{
        n = n/10;
        count++;
    }while(n>0);
    return count;
}
int main(){
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int count = countDigits(n);
    printf("number of digits in %d is %d",n,count);
    return 0;
}