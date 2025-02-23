#include<stdio.h>
#include<conio.h>
int main(){

int station;
printf(" Enter Station Number 1-16: ");
scanf("%d",&station);
printf("\n");

if(station==1){
    printf("Right Now Your Are in Motizil Station & The Next station is TSC");
    printf("\n");
}else if(station==2){
  printf("Right Now Your Are in TSC Station & The Next station is DU");
  printf("\n");
}else if(station==3){
  printf("Right Now Your Are in DU Station & The Next station is Montronaloy");
  printf("\n");
}else if(station==4){
  printf("Right Now Your Are in Montronaloy Station & The Next station is Sahbag");
  printf("\n");
}else if(station==5){
  printf("Right Now Your Are in Sahbag Station & The Next station is KarwanBazar");
  printf("\n");
}else if(station==6){
  printf("Right Now Your Are in KarwanBazar Station & The Next station is Farmgate");
  printf("\n");
}else if(station==7){
  printf("Right Now Your Are in Farmgate Station & The Next station is BizoySorony");
  printf("\n");
}else if(station==8){
  printf("Right Now Your Are in BizoySorony Station & The Next station is Agarwan");
  printf("\n");
}else if(station==9){
  printf("Right Now Your Are in Agargone Station & The Next station is Kazipara");
  printf("\n");
}else if(station==10){
  printf("Right Now Your Are in Kazipara Station & The Next station is Shewrapara");
  printf("\n");
}else if(station==11){
  printf("Right Now Your Are in Shewrapara Station & The Next station is Mirpur 10");
  printf("\n");
}else if(station==12){
  printf("Right Now Your Are in Mirpur 10 Station & The Next station is Mirpur 11");
  printf("\n");
}else if(station==13){
  printf("Right Now Your Are in Mirpur 11 Station & The Next station is Pollobi");
  printf("\n");
}else if(station==14){
  printf("Right Now Your Are in Pollobi Station & The Next station is Uttora South");
  printf("\n");
}else if(station==15){
  printf("Right Now Your Are in Uttora South Station & The Next station is Uttora Center");
  printf("\n");
}else if(station==16){
  printf("Right Now Your Are in Uttora Center Station & The Next station is Uttora North");
  printf("\n");
}else{
  printf("  Station Dosen't Exsist");
}

int gate = station;

if(gate == 9){

    printf("The Gate Will Open On the Right please maintain the gap");
}else{
  printf(" The  Gate Will Open on the Left please maintain the gap ");
}


getch();
}
