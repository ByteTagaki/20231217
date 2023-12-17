#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL && src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含‘\0’字符
//	while (*dest++ = *src++)
//	{
//	    ;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	//strcpy--字符串拷贝
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	 int* const p = &num;
//	//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p莱改变*p（num）的值
//	//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	*p = 20;//err 
//	printf("%d\n", num);
//	return 0;
//}
int my_srtlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdefg";
	int len = my_srtlen(arr);
	printf("%d\n", len);
	return 0;
}
 
