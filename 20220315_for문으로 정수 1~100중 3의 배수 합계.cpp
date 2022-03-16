#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	
	for(i = 0; i <= 100; i+=3){
		
			sum = sum + i;
			printf("%d ", i);
		
	}
	printf("\n1 ~ 100의 정수 중 3의 배수의 합: %d\n", sum);
	
	return 0;
}
