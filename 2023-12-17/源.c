#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL && src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
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
//	//strcpy--�ַ�������
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	 int* const p = &num;
//	//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;//err 
//	printf("%d\n", num);
//	return 0;
//}
int my_srtlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
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
 
