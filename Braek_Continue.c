#include<stdio.h>
int main(){

int i;
for(i=0;i<=10;i++){
   if(i==5){
       break;
       continue;
   }
   printf("%d\n",i);
}

int i;
printf("Enter an integer:");
scanf("%d",&i);

for (i=1;i<=100;i++){
    printf("%d\n",i);
}

return 0;
}
