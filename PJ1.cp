#include <stdio.h>

int main(){
	int i=0;
	int a;
	int b;
	while(i!=1 && i!=2){
	printf("Chose your menu\n");
	printf("1,Odd number\n");
	printf("2,Even number\n");
	printf("Input your number \n");
	scanf("%d",&i);
	printf("\n");}
	if(i==1)
	{
	printf("Please input your number to calculate\n");
	scanf("%d",&a);
	
    for (i = 1; i <= a; i++) {
        if(i % 2 != 0){
        printf ("%d, \n",i,a);
	}
    }}
    if(i==2)
	{
	printf("Please input your number to calculate\n");
	scanf("%d",&b);
	
    for (i = 1; i <= b; i++) {
    if(i % 2 == 0){
	printf ("%d, \n",i,b);
	}
    }}
}

