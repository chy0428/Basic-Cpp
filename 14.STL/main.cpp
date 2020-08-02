#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> l;

	// push_back
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);
	l.push_back(8);
	l.push_back(9);
	l.push_back(10);

	// pop_back
	l.pop_back();

	// push_front
	l.push_front(4);
	l.push_front(3);
	l.push_front(1);
	l.push_front(0);

	// pop_front
	l.pop_front();

	// back and front
	cout << "list front value : " << l.front() << '\n';
	cout << "list end value : " << l.back() << '\n';

	// size
	cout << "list size : " << l.size() << '\n';

	// empty
	cout << "Is it empty? : " << (l.empty() ? "Yes" : "No") << '\n';

	// iterator
	list<int>::iterator begin_iter = l.begin();
	list<int>::iterator end_iter = l.end(); 

	// insert
	begin_iter++;
	l.insert(begin_iter, 2);

	// erase
	end_iter--; 
	l.erase(end_iter);

	// *iterator : 원소 접근
	cout << "list "<< distance(l.begin(), begin_iter)+ 1 << " element : " << *begin_iter << '\n';

	return 0;
}