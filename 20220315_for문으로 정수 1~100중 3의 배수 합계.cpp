#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	
	for(i = 0; i <= 100; i+=3){
		
			sum = sum + i;
			printf("%d ", i);
		
	}
	printf("\n1 ~ 100�� ���� �� 3�� ����� ��: %d\n", sum);
	
	return 0;
}
