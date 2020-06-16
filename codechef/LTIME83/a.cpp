#include <stdio.h>
//#include <string.h>

void copy(char[],char[]);
void add(char[],char[]);
void checkPalin(char[],char[]);


int main() {
	
	char s1[] = "hello cp";
	int n = sizeof(s1) / sizeof(s1[0]);
	
	//copy a string
	//declare a character array to store the copy
	char s2[n] = "d";
	copy(s1,s2);
	puts(s2);
	
	//add or concat a string
	char str1[] = "Google ", str2[] = "Classroom";
	int len1 = sizeof(str1)/sizeof(str1[0]);
	int len2 = sizeof(str2)/sizeof(str2[0]);
	char res[len1+len2];
	add(str1, str2, res);
	puts(res);
	
	
	
	return 0;
}

void copy(char s1[], char s2[]) {
	//copy s1 to s2
	int i = 0;
	while (s1[i] != '\0') {
		s2[i] = s1[i];
		i++;
	}
}

void add(char s1[], char s2[], char res[]) {
	int i = 0;
	int len = sizeof(s1) / sizeof(s1[0]);
	while (s1[i] != '\0') {
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0') {
		res[len+i] = s2[i];
		i++;
	}
}
