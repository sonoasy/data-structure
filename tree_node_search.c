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

	
	while (1) {
		NODE* p;
		p = &n0;
		int key;
		printf("key를 입력하시오 ");
		scanf("%d", &key);
		if (key == 0) {
			break;
		}
		while (p) {
			if (p->data == key) {
				printf("yes\n");
				break;
			}
			else {
				if (p->data > key) {
					p = p->left;
					if (p == NULL) {
						printf("no\n");
					}
					else{
						if (p->data == key) {
							printf("yes\n");
							break;
						}
					}
				}
				else {
					p = p->right;
					if (p == NULL) {
						printf("no\n");
					}
					else {
						if (p->data == key) {
							printf("yes\n");
							break;
						}
					}
				}
			}
			
		}

	}

}
