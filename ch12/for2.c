#include <stdio.h>
int main(void)
{
    int i,input_num,count=0;
    
    printf("숫자를 입력하시오:");
    scanf("%d", &input_num);
    
    for(i=1; input_num >= i ; i++ ) {
         if((input_num%i)==0){
            printf("%d\n", i);
            count++;
            }
   
    }
     printf("약수의 갯수는 %d", count);
    return 0;    

}