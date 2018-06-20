#include <stdio.h>

int aFunc(int arg1, float arg2) {
   int x = 1;
   printf("aFunc: x=%d, arg1=%d, arg2=%f\n",x, arg1, arg2); // What prints?
   arg1++; arg2++;
   return (arg1 * arg2);
}

int main( ) {
	// typical usage to index thru array
	int ix, iArray[3] = {1,2,3};
	for (ix = 0; ix < 3; ix++ )  {
		printf("\n%d", iArray[ix]);
	}
	for (ix = 3; ix-- ;/*no increment here*/ ) // test includes step
		printf("\n%d", ix); // no need for { }

	// weird use below -- ignore white space!
	for (ix = 0, printf("\nHi!\n"); //init(step 1)
 	    ix++ < 10;/*test(step 2)*/ printf("You're awesome!\n"))//increment(step 3)
		;

	int x = 5;
	int z = aFunc(x, 4.0);
	printf("main: x=%d, z=%d\n", x, z); //?
	return 0;
}
