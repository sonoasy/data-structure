#include<stdio.h>
#include<stdlib.h>

#define MAX 10

using namespace std;

struct Heap {
	int size = 0;
	int heap[MAX];

	int push(int value) {
		if (size == MAX) return - 1;

		heap[size] = value;
		update(size);
		size++;
	}
	int pop() {
		if (size == 0)return -1;
		int res = heap[0];
		heap[0] = heap[--size];
		downupdate(0);

		return res;
	}
	void update(int idx) {
		int c = idx;
		int p = (c - 1) / 2;

		while (c > 0 && heap[c] > heap[p]) {
			swap(c, p);
			c = p;
			p = (c - 1) / 2;
		}
	}
	void downupdate(int idx) {
		int p = idx;
		int c = 1;

		while(c <= size) {

			if (c < size && heap[c] < heap[c + 1])
				c++;
			if (heap[c] <= heap[p])break;
			swap(c, p);
			p = c;
			c = c * 2 + 1;



		}
	}
	int getSize() {
		return size;
	}
	void swap(int a, int b) {
		int temp = heap[a];
		heap[a] = heap[b];
		heap[b] = temp;
	}

};

int main() {


	Heap* heap = new Heap();

	for (int i = 0; i < MAX; ++i) {
		int value = rand() % 100;
		heap->push(value);
	}

	for (int i = 0; i < MAX; ++i) {
		printf("%d번째 pop()의 결과는 %d\n", i, heap->pop());
	}




}
