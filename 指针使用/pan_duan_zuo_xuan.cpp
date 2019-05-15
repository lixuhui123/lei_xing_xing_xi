#include<stdio.h>
#include<stdlib.h>
#include<string>
void zuoxuan(int a);
{

}
int main()
{
	char str[] = "0";
	//gets(str);
	scanf("%s", str);
	int a = strlen(str);
	zuoxuan(a);
	puts(str);
	system("pause");
	return 0;
}
