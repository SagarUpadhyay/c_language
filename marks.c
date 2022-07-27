#include<stdio.h>

int main(){
    int physics,chemistry,maths;
    float total;
    printf("Enter your marks in physics :\n");
    scanf("%d",&physics);
    printf("Enter your marks in chemistry  :\n");
    scanf("%d",&chemistry);
    printf("Enter your marks in maths :\n");
    scanf("%d",&maths);
    total = (physics+chemistry+maths)/3;
    if((total<40) || physics<33 || chemistry<33 || maths<33){
    
        printf("Yours Total perscentage is %f and you are fail \n",total);
    }
    else{
        printf("Your Total perscentage is : %f and You are pass\n\t",total);
    }
    
    return 0;
}