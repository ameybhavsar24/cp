#include <iostream>
#include <set>

using namespace std;

int main(int argc, char **argv)
{
	set<int> s;
	s.insert (3);
	s.insert (5);
	cout << s.count (3) << "\n"; 
	cout << s.count (4) << "\n"; 
	s.erase (3);
	s.insert (4);
	for (int *x : s) {
		cout << x << "\n";
	}
	return 0;
}
