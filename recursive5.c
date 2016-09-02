#include<stdio.h>

void main(){
   int num = 0;
   int n=0;
   printf("Enter The Value Of 'N': ");
   scanf("%d", &n);

    print(num,n);


}
int print(num,n){
    if(num<=8){
            int result=0;
                result =((pow(2,num))*n);
         printf("%d ",(result));
         print(num+1,n);
    }
}
