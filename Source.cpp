#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
//strcat
//strncat
//strcpy
//strncpy
//strcmp
//strncmp
//strtok
//atoi
//itoa
//strlwr
//strupr
//toupper
//tolower

void my_strNcpy(char* buff, const char* source, int n) {
	while (*source != '\0' && n!=0) {
		 *buff=*source;
		 buff++;
		 source++;
		 n--;
	}
	*buff = '\0';}

int main(void) {
	char strarr[30][50];
	int index = 0;

	char buff[200] = "This is, the example, for my students!!!";
	char tmp[50];
	char *context;
	char *token;
	token = strtok_s(buff, " ,!", &context);

	while (token) {
		strcpy_s(strarr[index++], token);
		token = strtok_s(context, " ,!", &context);
	}

	for (int i = 0; i < index-1; i++)
	{
		for (int j = 0; j < index - 1 - i; j++)
		{
			if (strcmp(strarr[j], strarr[j + 1]) == 1)
			{
				strcpy_s(tmp, strarr[j]);
				strcpy_s(strarr[j], strarr[j + 1]);
				strcpy_s(strarr[j + 1], tmp);
			}
		}
	}

	for (int i = 0; i < index; i++)
	{
		cout << strarr[i] << endl;
	}





	system("pause");
	return 0;}


