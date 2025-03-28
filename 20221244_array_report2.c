#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 함수 선언
double calculateAverage(int scores[], int size);
int getStudentScore(int scores[], int size, int studentNumber);
void printScore(int scores[], int size, double average, int option);
void deleteStudent(int* scores, size, int studentNumber);

//메인 함수
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
	printf("입력완료|n");

	while (1) {
		printf("---학생 성적 관리 프로그램---|n");
		printf("1. 학생정보 추가|n");
		printf("2. 학생정보 삭제|n");
		printf("3. 학생정보 검색|n");
		printf("4. 학생정보 출력(옵션 : |n");
		printf("5. 학생프로그램 종료|n");
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
					printf("새로운 학생 추가 : 번호 - %d, 점수 - %d|n", size, newScore);
				}
				break;
			case 2:      //delete
				printf("삭제할 학생 번호 입력(1 ~ %d): ", size)
					scanf("%d", &studentNumber);
				deleteStudent(scores, size, studentNumber);
				break;
			case 3:
				printf("검색할 학생 번호 입력(1~%d): ", size)
					scanf("%d", &studentNumber);
				int score = getStudentScore(scores, size, studentNumber);
				if (score != -1) printf("%d번 학생 점수 : %d|n", stdentNumber);
				else     printf("해당 학생은 없는 학생입니다|n");
				break;
			case 4:
				int option;
				scanf("%d", &option);
				double average = calculateAverage(scores, size);
				printScore(scores, size, average, option);
				break;
			case 5:
				free(scores);
				printf("프로그램 종료|n");
				break;
			default:
				printf("잘못된 입력|n");
				break;
		}

	}

	return 0;
}
void deleteStudent(int* scores, size, int studentNumber){
	if (studentNumber < 1 || studentNumber > size) {
		printf("학생번호 오류|n");
	}
	if (scores[studentNumber - 1] == -1) printf("없는 학생입니다.|n");
	else {
		scores[studentNumber - 1] = -1;
		printf("%d 학생 삭제완료|n", studentNumber);
	}
}
//평균 계산 함수
double calculateAverage(int scores[], int size) {  }
