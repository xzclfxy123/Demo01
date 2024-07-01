/*
题干：输入一个字符串（可能包含空格，长度不超过50），输出该串的长度。
输入格式：输入在一行中给出1个长度不超过50的字符串s。
输出格式：在一行中输出s的串长。

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	gets(s);
	int x = strlen(s);
	printf("%d",x);
}
