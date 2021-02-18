#include <stdio.h>
#include<math.h>
struct point {
	int x, y;
};

double dist(int a, int b) {
	double result = 0;

	result = sqrt(pow(a, 2) + pow(b, 2));
	return result;
}

void swap(double A[], struct point p[],int n) {
	double max = A[0];
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (max < A[i]) {
			max = A[i];
			count = i;
		}
	}
	double tmp = A[count];
	A[count] = A[n - 1];
	A[n - 1] = tmp;
	//점선
	struct point tmpt;
	tmpt.x= p[count].x;
	tmpt.y = p[count].y;
	p[count].x=p[n-1].x;
	p[count].y = p[n - 1].y;
	p[n-1].x = tmpt.x;
	p[n - 1].y = tmpt.y;
	
}

int main() {
	struct point p[10] = { {5,2},{3,5},{2,2},{4,1},{1,5},{5,4},{3,7},{8,1},{6,2},{3,1} };
	double max = dist(p[0].x, p[0].y);
	double dis[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		dis[i] = dist(p[i].x, p[i].y);
	}
	for (int i = 10; i >1; i--) {
		swap(dis,p, i);
		
	}
	
	

	for (int i = 0; i < 10; i++) {
		printf("%d, %d\n", p[i].x, p[i].y);
	} 
}

 
