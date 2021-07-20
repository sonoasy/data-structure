#include <iostream>
#include <stack>

using namespace std;

int main(){

	stack<int> s;


	// top
	cout << "top element: " << s.top() << '\n';

  // push
	s.push(1);
	s.push(2);
	s.push(3);

	// pop
	s.pop(); // 3이 삭제


	// size
	cout << "스택 크기 " << s.size() << '\n';


	// empty
	cout << "비어있는지 확인 " << (s.empty() ? "Yes" : "No") << '\n';

	return 0;

}
