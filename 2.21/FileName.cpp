#include<stdio.h>
#include<string.h>
char* my_strstr( char* p1, char* p2)
{
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s2!='\0'&& * s1 == *s2)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
			{
				return cur;
			}
		cur++;
	}
}
int main()
{  
	char arr1[]="ab";
	char arr2[] = "abc";
    char * ret =my_strstr(arr1, arr2);
   
	if (ret != NULL)
	{
		printf("找到了");
		printf("%s", ret);
	}
	else
		printf("没有找到字符串");
	return 0;
}