#include<stdio.h>

int main(){
    int a ,b;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d The number is Even ");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}