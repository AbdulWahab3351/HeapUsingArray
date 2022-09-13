#include<iostream>
using namespace std;
#include"MinHeap.h"
#include"MaxHeap.h"

int main()
{
	MinHeap<int> h(50);
	h.insert(6);
	h.insert(2);
	h.insert(-57);
	h.insert(726);
	h.insert(873);
	h.insert(-84);
	h.insert(34632);
	h.insert(-847843);
	h.insert(778);
	h.insert(0);
	h.insert(8636);
	h.insert(8437);
	
	for (int i = 0; i < 12; i++)
	{
		cout << " " << h.getMin();
		h.removeMin();
	}
	
	//h.preOrder();
	
	return 0;
}