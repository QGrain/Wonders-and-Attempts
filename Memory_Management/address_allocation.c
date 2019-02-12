#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW 3
#define COL 5
//extern print();

void Display_address(int a[][COL], int rowsize);
char *hex2bin(char *hex);
int char2int(char hex);

int main(void)
{
	int a[ROW][COL] = {0};
	Display_address(a, ROW);
	return 0;
}


void Display_address(int a[][COL], int rowsize)
{
	int i, j;
	for (i = 0; i < rowsize; ++i) {
		for (j = 0; j < COL; ++j) {
			printf("a[%d][%d]'s address is hex: %p, decimal: %d\n", i, j, &a[i][j], &a[i][j]);
		}
		printf("\n");
	}
	
	
	return;
}

/*char *hex2bin(char *hex)
{
	int hex_len = strlen(hex);
	int bin_len = hex_len * 4;
	int i, hex_int, bin_ptr = bin_len;
	char *bin = (char *)malloc(sizeof(char) * bin_len);
	
	memset(bin, 48, bin_len);

	for (i = 0; i < hex_len; ++i) {
		hex_int = char2int(hex[i]);
		while (hex_int != 0) {
			bin[--bin_ptr] = (char)hex_int % 2;
			hex_int /= 2;
		}
	}
	return bin;
}

int char2int(char hex)
{
	if (hex <= '9' && hex >= '0') {
		return (int)hex-'0';
	}
	else if (hex <= 'F' && hex >= 'A') {
		return (int)10+hex-'A';
	}
	else {
		return -1;
	}
}
*/


