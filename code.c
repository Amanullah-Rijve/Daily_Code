#include<stdio.h>
int main(){
    /// aso code kri
    /// student grading system

    printf("Enter Your Mark: ");
    int mark;
    scanf("%d",&mark);

    /// condition

    if(mark<=100 && mark>=80){
        printf("You Have Got A+");
    }else if(mark<=79 && mark>=70){
        printf("You Have Got A");
    }else if(mark<=69 && mark>=60){
        printf("You Have Got B");
    }else if(mark<=59 && mark>=50){
        printf("You Have Got C");
    }else if(mark<=49 && mark>=40){
        printf("You Have Got D");
    }else{
        printf("Apni Fail");
    }

return 0;
}
