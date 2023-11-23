#include<stdio.h>
int main (){
	
	int n=0;
	printf("Please input your number\n");
	scanf("%d", & n);
	if( n>=80 && n<=100){
		printf("This number gread is: A+");
	}
	else if(n >=70){
		printf("This number gread is:B+\n");
	} 
	else if(n>=60){
		printf("This number gread is: C+\n");
	}
	else if (n>=50){
		printf("This number gread is: D+");
	}
	else if (n>40){
		printf(" This number gread is:E+\n");
	}
	else {
		printf("This number gread is: F");
	}
	return 0;
}
