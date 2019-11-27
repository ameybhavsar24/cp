#include <iostream>
#include <stack>

using namespace std;

void printStack(stack <int> s) {
	while(!s.empty()) {
		cout << '\t' << s.top();
		s.pop();
	}
	cout << '\n';
}

int main() {

	stack <int> s;
	s.push(10);
	s.push(40);
	s.push(70);
	s.push(26);
	s.push(-4);

	cout << "The stack is: ";
	printStack(s);

	

	return 0;
}