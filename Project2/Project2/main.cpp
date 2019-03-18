#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
int strLength(char* str1);
int strCmp(char* str1, char* str2);

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
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

			printf("Input First String : ");
			scanf("%s", str1);
			printf("Input Second String : ");
			scanf("%s", str2);

			printf("return : %d\n", strCmp(str1, str2));
			break;
		default:printf("다시 입력\n");		break;

			return 0;
		}
		printf("\nPress Any Key to Continue\n");
		char key = getch();
		_getch();
		system("cls");
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


int strCmp(char* str1, char* str2) {
	int ret = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	printf("첫번째 문자열의 아스키값 : ");
	for (int i = 0; i < strLength(str1); i++) {
		if (str1[i] != str2[i]) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		}
		printf("%d ", str1[i]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	}
	printf("\n");

	printf("두번째 문자열의 아스키값 : ");
	for (int i = 0; i < strLength(str2); i++) {
		if (str1[i] != str2[i]) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		}
		printf("%d ", str2[i]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	}
	printf("\n");
	if (strLength(str2) > strLength(str1))
		ret = strLength(str2);
	else
		ret = strLength(str1);

	for (int i = 0; i < ret; i++) {
		if (str1[i] > str2[i])
			return 1;
		else if (str1[i] < str2[i])
			return -1;
	}
	
	if (str1[ret] > str2[ret])
		return 1;
	else if (str1[ret] < str2[ret])
		return -1;
	else
		return 0;
}
