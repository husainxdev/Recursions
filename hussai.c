#include<stdio.h>
int main()
{
int arry[10];
int sum=0;
printf("Enter your number : ");
for (int i = 0; i <10 ; i++)

{
    scanf("%d",&arry[i]);
}
for (int i = 0; i <10 ; i++){
    sum+= arry[i];

}

printf("array : %d\n ",sum);

}