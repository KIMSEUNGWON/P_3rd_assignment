//2��°�� ū�� ã�� ���α׷�
#include<stdio.h>

int main(void)
{

	int i, n;
	float arr[100],SecondMax=0;//�ι�°�� ū���� ���� �̸�

	printf("Enter total number of element(1 to 100) ");
	scanf("%d", &n);
	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%f", &arr[i]);

	}

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
		{
			SecondMax = arr[0];//1 1�� 2������ ��������� 2��° ū���� ����� 
			arr[0] = arr[i];//2
			
			printf("%f\n", SecondMax);
		}
		else if (arr[i] > SecondMax&&arr[i] < arr[0] || arr[0] == SecondMax)//�ߺ��� ���� ������ �ι�° ���� ã�� ��
		{
			SecondMax = arr[i];
		}
	}

	printf("Largest element = %.2f\n", arr[0]);
	printf("Second Largest element = %.2f", SecondMax);


	return 0;


}