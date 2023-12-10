#include<stdio.h>  //Heder file.

int maximum (int,int,int);   //declear a variable type and make a function.
int main(){                     // main function start point.
	int x,y,z;                  //declear  variable name. 
	printf("Enter thtee Integer value");  //we request to user to inter 3 integer type input. 
	scanf("%d %d %d", &x,&y,&z);           // here console take and prosses our input.
	printf("the maximum value is: %d", maximum(x,y,z));  // here prosses maximun and minimum value.
}

int maximum( int x, int y,int z){  //here we call the function and check by condition.
	int max=x;
	if(y>max)
	max=y;
	if(z>max)       //check condition.
	max=z;
	return max;
}
