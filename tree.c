#include <stdio.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node NODE;	
int main() {
	NODE n5 = { 90, NULL, NULL }, n4 = { 60, NULL, NULL }, n3 = { 10, NULL, NULL },
		n2 = { 70, &n4, &n5 }, n1 = { 25, &n3, NULL }, n0 = { 50, &n1, &n2 };

	NODE* p;
	p = &n0;
	printf("%d\n", p->data);
	printf("%d\n", p->left->data);
	printf("%d\n", p->left->left->data);
}
