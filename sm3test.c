#include "sm3.h"

int main(int argc, char *argv[])
{
	unsigned char Hash[32]={0};
	char* str="1212121212121212121212121212121212121212121212121212121212121212";
	int len;
	len=strlen(str);
	if(!SM3(str, len, Hash))
		printf("1 false\n");
	char *str2 = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";
	len=strlen(str2);
	if(!SM3(str2, len, Hash))
		printf("2 false\n");

	return 0;
}
