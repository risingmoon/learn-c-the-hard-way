#include <stdio.h>

int main()
{
	int age = 10;
	//Uninitialized
	int height;

	//Missing variable age
	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);

	return 0;
}
