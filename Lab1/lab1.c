#include <stdio.h>

int main(){
	char c;
	int digits = 0;
	int characters = 0;
	while (c != EOF){
		c = getchar();
		if((c >= '0') && (c <= '9')){
			digits++;
			characters++;
		}
		if((c >= 'A') && (c <= 'z')){
			characters++;
		}
	}
	printf("%d characters, %d digits\n percentage of digits %.2f\n", characters, digits, ((float)(digits)/characters) * 100);
	return 0;
}
