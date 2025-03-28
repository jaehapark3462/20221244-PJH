#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �Լ� ����
double calculateAverage(int scores[], int size);
int getStudentScore(int scores[], int size, int studentNumber);
void printScore(int scores[], int size, double average, int option);
void deleteStudent(int* scores, size, int studentNumber);

//���� �Լ�
int main() {
	int* scores;
	int size = 30;
	int capacity = 30;
	int chocie, studentNumber;

	scores = (int*)malloc(capacity * sizeof(int));
	if (!scores) {
		printf("allocation error|n");
		return 1;
	}

	srand(time(0));
	for (int i = 0;i < size;i++) scores[i] = rand() % 101;
	printf("�Է¿Ϸ�|n");

	while (1) {
		printf("---�л� ���� ���� ���α׷�---|n");
		printf("1. �л����� �߰�|n");
		printf("2. �л����� ����|n");
		printf("3. �л����� �˻�|n");
		printf("4. �л����� ���(�ɼ� : |n");
		printf("5. �л����α׷� ����|n");
		scanf("%d", &choice);

		switch (choice) {
			case 1:      //add
				if (capacity - size < 5) {
					capacity += 10;
					int* newScores = realloc(scores, capacity * sizeof(int));
					if (!scores) {
						printf("allocation error|n");
						return 1;
					}
					int newSocre = rand() % 101;
					scores[size] = newScore;
					size++;
					printf("���ο� �л� �߰� : ��ȣ - %d, ���� - %d|n", size, newScore);
				}
				break;
			case 2:      //delete
				printf("������ �л� ��ȣ �Է�(1 ~ %d): ", size)
					scanf("%d", &studentNumber);
				deleteStudent(scores, size, studentNumber);
				break;
			case 3:
				printf("�˻��� �л� ��ȣ �Է�(1~%d): ", size)
					scanf("%d", &studentNumber);
				int score = getStudentScore(scores, size, studentNumber);
				if (score != -1) printf("%d�� �л� ���� : %d|n", stdentNumber);
				else     printf("�ش� �л��� ���� �л��Դϴ�|n");
				break;
			case 4:
				int option;
				scanf("%d", &option);
				double average = calculateAverage(scores, size);
				printScore(scores, size, average, option);
				break;
			case 5:
				free(scores);
				printf("���α׷� ����|n");
				break;
			default:
				printf("�߸��� �Է�|n");
				break;
		}

	}

	return 0;
}
void deleteStudent(int* scores, size, int studentNumber){
	if (studentNumber < 1 || studentNumber > size) {
		printf("�л���ȣ ����|n");
	}
	if (scores[studentNumber - 1] == -1) printf("���� �л��Դϴ�.|n");
	else {
		scores[studentNumber - 1] = -1;
		printf("%d �л� �����Ϸ�|n", studentNumber);
	}
}
//��� ��� �Լ�
double calculateAverage(int scores[], int size) {  }
