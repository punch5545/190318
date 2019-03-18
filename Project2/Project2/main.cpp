#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int strLength(char* str1);
void strCmp(char* str1, char* str2);

int main() {
	char str1[255];
	char str2[255];
	
	while (true)
	{
		int input = 0;
		printf("Choose Funtion.\n1. Length of string\n2. Compare length of string\nInput >> ");
		scanf("%d", &input);

		switch (input) {
		case 1:
			printf("Input String : ");
			scanf("%s", str1);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			printf("Length : %dbyte\n", strLength(str1));
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			break;
		case 2:
			printf("Input First String : ");
			scanf("%s", str1);
			printf("Input Second String : ");
			scanf("%s", str2);

			strCmp(str1, str2);
			break;
		default:break;

			return 0;
		}
	}
}

int strLength(char* str1) {
	int i = 0;
	while (true) {
		if (str1[i] == '\0') {
			return i;
		}
		else i++;
	}
}


void strCmp(char* str1, char* str2) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("First string : %s, %dbyte\n", str1, strLength(str1));
	printf("Second string : %s, %dbyte\n", str2, strLength(str2));
	if (strLength(str1) > strLength(str2)) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("The first string is longer than second one.\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
		
	else if (strLength(str1) < strLength(str2)) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("The second string is longer than first one.\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("It both strings are same length\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
}
