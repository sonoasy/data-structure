//헤더파일 중복 피하기
//정의는 초기화되는것 모두 포함
#ifndef P2
#define P2
enum level { freshman = 1, sophomore, junior, senior }; 
struct student {
	char name[20];
	enum level year;
	int score;
};
typedef struct student STUDENT;
void printParticipants(STUDENT S[], int n);
void printStudent(STUDENT S[], int n, char s1[]);
void printAvg(STUDENT S[], int n);
void printStudentsByYear(STUDENT S[], int n, enum level year);
#endif
