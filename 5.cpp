#include <algorithm>
#include <deque>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	deque <int> deq(6, 1);
	list <int> l(6, 3);
	vector <int> vec;
	auto p = l.end() ;
	p--;
	int countl = 0;

	for (p; p != l.begin(); p--)
	{
		countl++;
		if (countl == 5) break;
	}

	for (auto i = l.begin(); i != l.end(); i++) cout << *i << " ";
	cout << endl;
	for (auto i = deq.begin(); i != deq.end(); i++) cout << *i << " ";
	cout << endl;


	countl = 0;
	for (auto i =deq.rbegin(); i != deq.rend(); i++)
	{
		vec.push_back(*i);
		countl++;
		if (countl == 5) break;

	}

	l.insert(p, vec.begin(), vec.end());

	for (auto i = l.begin(); i != l.end(); i++) cout << *i << " ";

}


