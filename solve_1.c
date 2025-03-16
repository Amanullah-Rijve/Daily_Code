/*
If the total selling price of 15 items and the total
profit earned on them is input through the keyboard,
write a program to find the cost price of one item.

 */
#include<stdio.h>
int main(){

int total_sell;
printf("Enter The Total Selling Price Of 15 items: ");
scanf("%d",&total_sell);

int profit;
printf("Enter The Profit: ");
scanf("%d",&profit);

 int price_of_one_item = (total_sell / 15);
 printf("Price Of One Item Is: %d", price_of_one_item);


return 0;
}
