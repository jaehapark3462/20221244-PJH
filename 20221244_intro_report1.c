#include <stdio.h>

void main()
{
	int scores[10] = { 0 };

	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("���� �Է� :");
		scanf_s("%d", &scores[i]);
		total += scores[i];
	}

	printf(" ���� : %d ��� : %.2lf", total, (double)total / 10);


}