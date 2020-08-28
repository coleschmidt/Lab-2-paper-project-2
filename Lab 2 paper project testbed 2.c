#include <stdio.h>
#include <math.h>

int gl = 5;

int main(){
	int i =7;
	float v;
	v = 3.14;
	printf("i=%d v=%f", i, v);
	
	i = i * gl;
	v = v * gl;
	printf("%d is %f\n", i, sqrt(i));
	
	if (v < 0){
		printf("%f is negative\n", v);
	}
	else if(v > 0){
		printf("%f is positive\n", v);
	}
	else if(v == 0){
		printf("%f is equal to zero\n", v);
	}
	
	float f = 4.51;
	
	if (f - (int)f == 0){
		printf("%f is an interger", f);
	}
	
	else{
		printf("%f is not an interger", f);
	}
	
	float sq = sqrt(i);
	
	if((sq - floor(sq)) == 0){
		printf("%d is perfect square.", i);
	}
	
	else {
		printf("\n%d is not a perfect square", i);
	}
	
	return(0);
}
