#include <stdio.h>

long factorial(long num1){
	long accumulate = 1;
	for(;num1 > 0 ; num1--){
		accumulate = accumulate * num1;
	}
	return accumulate;
}

int main(){
  	long result;
  	long i;
  	for (i = 0; i < 20; i++){
  		result = factorial(i);
 		printf("Here is the factorial:\t %ld\n", result);
	}
	return 0;
}
