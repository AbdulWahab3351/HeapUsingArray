#ifndef MIN_HEAP_H
#define MIN_HEAP_H

template<typename T>
class MinHeap
{
	T* data;
	int maxNodes;
	int nodesCount;

	void displayDescendant(int);
	void swap(T& temp1, T& temp2);
	int getMinChild(int left, int right);
public:
	void preOrder();
	MinHeap(int max);
	~MinHeap();
	T getMin();
	void insert(T val);
	void removeMin();
};
#endif // !MIN_HEAP_H


