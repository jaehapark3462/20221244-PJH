#include <stdio.h>

void main()
{
	int scores[10] = { 0 };

	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Á¡¼ö ÀÔ·Â :");
		scanf_s("%d", &scores[i]);
		total += scores[i];
	}

	printf(" ÃÑÁ¡ : %d Æò±Õ : %.2lf", total, (double)total / 10);


}