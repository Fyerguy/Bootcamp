#include <stdio.h>
#include "factorial.h"
int main(){
  	long result;
  	long i;
  	for (i = 0; i < 4; i++){
  		result = factorial(4);
 		printf("Here is the factorial:\t %ld \t\t\t %d\n", result, i);
	}
	return 0;
}
