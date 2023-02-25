//https://github.com/YaDmitryE/D.Z.2.3

#include <stdio.h>

int main()
{
	int password_1, password_2;
	
	printf("input password_1:");
	scanf("%i", &password_1);
	
	printf("input password_2:");
	scanf("%i", &password_2);
	
	if ((password_1 == 1234) && (password_2 == 4321)) {
		printf("Access OK");
	}
	else {
		printf("Access ERROR");
	}
	return 0;
}
