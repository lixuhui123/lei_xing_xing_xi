//#include<stdio.h>
//#include<stdlib.h>
////函数指针
////转移表
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	if (b != 0)
//		return a / b;
//
//}
//void test(int a, int b, int(*p)(int, int)
//{
//
//}
//int main()
//{
//	//int a[3][4];
//	//int(*p)[4];//数组指针
//	//int *q[3];//指针数组
//	//p = a;
//	///*for (int i = 0; i < 3; ++i)
//	//{
//	//	q[i] = a[i];数组名一定不能放在左值
//	//}*/
//	//int a[3][4];//a(int(*)[4])a[i](int *) a[i][j](int)
//	//int b[10];//b(int *) b[i](int)
//	/*add(2, 5);
//	int(*p)(int ,int);
//	p = add;
//	printf("%d\n", p(4, 5));
//	p = sub;
//	printf("%d\n", p(4, 5));*/
//	int(*p[])(int, int) = { add,sub,mul,Div };//函数指针数组
//	int n = sizeof(p) / sizeof(p[0]);
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d\n", p[i](4, 5));
//	}
//	test(4, 5, add);//函数指针作为函数的参数
//
//	system("pause");
//	return 0;
//}