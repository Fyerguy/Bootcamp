#include <stdio.h>
int main() {
	int iVar; //Declaration
	iVar = 10; //Assignment
	char cVar = '!'; //Declaration and initialization
	float fVar = 1.0e2, fVar2;
	iVar = (int)fVar; //cast
	fVar2 = iVar * 2; //promote
	printf("Hey, world%c V%.1f\n", cVar, fVar2 / iVar);
	return 0;

}
