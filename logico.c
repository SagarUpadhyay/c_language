#include<stdio.h>

int main(){
    int age; 
    int vipPass = 0 ;
    //vipPass = 1;
    printf("Enter Your age :\n");
    scanf("%d",&age);
    if((age<=70 && age>=18) || vipPass==1){
        printf("You are above 18 and less than 70, you can drive\n");

    }
    else{
        printf("You cannot drive");
    }
    return 0;
}