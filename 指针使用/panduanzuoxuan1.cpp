#include<stdio.h>
#include<stdlib.h>
#include<string>
//用指针左旋字符串
int main()
{
	char str[] = "0";
	scanf("%s", str);
	char zuoxuan[] = "0";
	char shuru[] = "0";
	scanf("%s", shuru);
	char *p = str;
	char *q = zuoxuan;
	int a = 2;//要左旋第几个
	int b = strlen(str);//7
	int i = 0;
	int c = 0;
	for (a = 0; a <= b; ++a)
	{
		
		if (0 == a)
		{
			//puts(str);
			c = 0;
		}
		else
		{
			for (i = a - 1; i <= b; ++i)
			{
				*(q + c) = *(p + i);
				++c;
			}
			for (i = 0; i < a - 1; ++i)
			{
				*(q + c - 1) = *(p + i);
				++c;
			}
			*(q + c - 1) = '\0';
			c = 0;
			//puts(zuoxuan);
			//printf("%c\n", *(p + 1));
		}
		int jieshou = strcmp(shuru, zuoxuan);
		//printf("%d\n", jieshou);
		if (0 == jieshou)
		{
			printf("是这个字符串的左旋\n");
			break;

		}
		else if (b == a)
		{
			jieshou = strcmp(shuru, zuoxuan);
			if (0 == jieshou)
			{
				printf("是左旋后的字符串\n");
				//break;
			}
			else
			{
				printf("不是左旋后的字符串\n");
				//break;
			}
			
		}		
	}
	
	system("pause");
	return 0;
}