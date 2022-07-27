#include<stdio.h>

int main(){
    int a, rating;
    printf("Enter the value of a is :");
    scanf("%d",&a);
    (a<5)?printf("A is less than 5\n"):printf("A is not less than 5\n");
    printf("Enter your rating in (1,5) :\n");
    scanf("%d",&rating);
    switch(rating){
        case 1:
        printf("your rating is 1\n");
        break;
          case 2:
        printf("your rating is 2\n");
        break;
        case  3:
        printf("your rating is 3\n");
        break;
         case 4:
        printf("your rating is 4\n");
        break;
        case 5:
        printf("your rating is 5 and your Work is Completely done\n");
         break;
            default:
            printf("Invalid rating ");}
    
    
    return 0;
}
    