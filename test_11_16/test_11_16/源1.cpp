#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k ,i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ���,�±���%d", i);
			break;
		}
	}
	if (i == sz)
		printf("û�ҵ�");
	return 0;
}
//������ͨ���ҷ�


