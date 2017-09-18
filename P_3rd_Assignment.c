//2번째로 큰수 찾는 프로그램
#include<stdio.h>

int main(void)
{

	int i, n;
	float arr[100],SecondMax=0;//두번째로 큰수의 변수 이름

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
			SecondMax = arr[0];//1 1을 2번보다 먼저써줘야 2번째 큰수가 저장됨 
			arr[0] = arr[i];//2
			
			printf("%f\n", SecondMax);
		}
		else if (arr[i] > SecondMax&&arr[i] < arr[0] || arr[0] == SecondMax)//중복된 수가 있을때 두번째 수를 찾는 법
		{
			SecondMax = arr[i];
		}
	}

	printf("Largest element = %.2f\n", arr[0]);
	printf("Second Largest element = %.2f", SecondMax);


	return 0;


}