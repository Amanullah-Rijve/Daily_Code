#include<stdio.h>
int main(){

int cow,hen,cow_save=0,hen_save=0;

printf("Enter Number of Cow: ");
scanf("%d",&cow);

printf("Enter Number of Hen: ");
scanf("%d",&hen);

if(cow<0 || hen<0){
    printf("Enter Valid Number\n");
}

switch(cow){

case 1:
    cow_save = 5000;
    break;

case 2:
    cow_save = 10000;
    break;
case 3:
    cow_save= 15000;
    break;
//default:
    //printf("Out of Number\n");

}

switch(hen){

case 1:
    hen_save = 100;
    break;

case 2:
    hen_save=200;
    break;

case 3:
    hen_save= 300;
    break;
//default:
   // printf("Out of Number\n");
   // break;
}

int total_save = (cow_save+hen_save);
printf(" Total Savings = %d\n", total_save);

return 0;
}
