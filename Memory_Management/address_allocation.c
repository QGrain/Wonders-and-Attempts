#include <stdio.h>
#include <stdlib.h>

extern print();

int main(void)
{
	if (print()) {
		printf("test success!\n");
	}
	else {
		fprintf(stderr, "%s", GetLastError());
	}
	return 0;
}
