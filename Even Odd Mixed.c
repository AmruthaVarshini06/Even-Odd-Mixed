#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,l,e=0,o=0;
    while(n>0){
    	l = n % 10;
    	if(l%2==0){
    		e=1;
		}
		else{
			o=1;
		}
		n/=10;
	}
	if(e && o){
		printf("Mixed Number\n");
	}
	else if(e){
		printf("Even Number\n");
	}
	else if(o){
		printf("Odd Number\n");
	}
	return 0;
}
