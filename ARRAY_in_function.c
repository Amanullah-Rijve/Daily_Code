#include<stdio.h>

int claSum(int a,int b,int c,int d){

return a+b+c+d;

}

int main(){

int sumArr[5];

sumArr[0] = claSum(56,78,8,9);
sumArr[1] = claSum(5,7,8,4);
sumArr[2] = claSum(67,69,9,1);
sumArr[3] = claSum(89,458,589,3);
sumArr[4] = claSum(1,2,3,4);

 for(int i= 0; i<5; i++){
    printf("The Result is: %d\n",sumArr[i] );
}


return 0;
}
