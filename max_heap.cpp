#include<iostream>
#include<queue>

//직접 모두 구현하기 보다는 <queue> 사용
//일반 큐와 차이점은 스택같은 top을 사용함

using namespace std;

int main() {
	//우선순위 큐는 우선순위가 값이 큰게 높거나(max heap) 값이 작은게 높은(min heap)을 기준으로 먼저 내보냄
	//Max heap 구현
	//priority_queue<T,Container,Compare> 


	priority_queue<int> p; //
	priority_queue<int, vector<int>, less<int>> q; //큰거부터 내보냄
	int size;

	q.push(6);
	q.push(4);
	q.push(1);
	q.push(0);
	q.push(-1);
	q.push(3);

	q.pop();//스택과 달리 원소를 삭제함

	// 4 3 1 0 -1
	while (!q.empty()) {
		cout << q.top();
		q.pop();
	}




}
