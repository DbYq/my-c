//����
#include<stdio.h>
#include<string.h>//strlen��ͷ�ļ�
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d ", strlen(arr));//strlen�Ǽ������鳤�ȣ�'\0'֮ǰ���ַ��������������Ϊ6
//	printf("%d ", sizeof(arr));//sizeof�Ǽ�����ռ�ռ��С�������Ϊ7
//	return 0;
//}

//��ά����
	//��ά����Ĵ�����int arr1[3][4];//ָ�������е���˼
	//char arr2[3][4];
	//double arr3[3][4];
	//��ά����ĳ�ʼ����
	//int arr[3][4] = { 1,2,3,4,5 };��ʱ��һ�е�4�Ѿ���������5�����ڵڶ���
	//int arr[3][4] = { {1,2},{3,4} };��ʱ��һ�з���1��2���ڶ��з���3��4.
	//int arr[][4]={1,2,3,4};ע���ά�����п���ʡ�Զ��в���ʡ��
int main()
{
	int arr[3][4] = { {1,2,3,4},{4,6,2} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}