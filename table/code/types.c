#include <stdio.h>
#include <stdlib.h>


int main(){
	void *array = malloc((sizeof(int) + sizeof(float) + sizeof(char))*2);
	int off1 = sizeof(int), off2 = sizeof(float), off3 = sizeof (char);

	int *i = array;
	*i = 10;

	float *f = array + off1 ;
	*f = 5.0;
	char *c = array + off1 + off2 ;
	*c = 'A';

	printf("int = %d, float = %f, char = %c\n", *(int*)array, *(float*)(array+off1), *(char*)(array + off1 + off2));
	return 0;
}
