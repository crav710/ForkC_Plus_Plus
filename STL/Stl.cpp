#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Standard Template Library (STL)::
-> Storing Collection of data in Data Structures . Arrangement of data to utilize efficiently time and space.
-> STL helps in managing space efficiently. 
-> Built in Library to use all data structures.
-> 


Types of Data Structures :: 
-> LinkedList (single and Double) 
	->(to solve the space issue faced by array(size of array can't be increased,pre allocation))
	->(new node insertion is easy).
-> Stack   (LIFO)
-> Queue   (FIFO)
-> Dequeue ()
-> PQ		
-> Map 
-> Set 

STL Classes :: (algorithms,Containers,Iterators)
Containers (contains collection of data(stack,queue,array etc ))
Iterators  ( to access these containers iterators are availbale)
Algorithms (Search,Sort,Binary search,reverse, concat,copy , union , intersection , merge, heap)

Containers list (template classes)
-> vector 
	-> Dynamically allocated array, self managed array.  
	-> push_back()
	-> pop_back()
	-> insert()
	-> remove()
	-> size()
	-> empty()
-> list
	-> Doubly Linked List 
	-> push_front()
	-> pop_front()
	-> above functions of vector()
-> forward_list 
	-> single linked list 
-> deque 
	-> Same as vector , Double ended queue (from both end you can insert and delete)
-> priority_queue
	-> always the largest value will be deleted. 
	-> heap data structure 
	-> max heap 
	-> push()
	-> pop()
	-> empty()
	-> size()
-> stack 
	-> LIFO 
-> set 
	-> unique elements (does not maintain the order)
-> multiset 
	-> allows duplicate elements 
-> map 
	-> hash table (unique keys )
	-> key value pair 
	-> keys are sorted. 
-> multimap
	-> duplicate keys are allowed.
	-> but same key value pair should not be there.


Iterators :: 

*/

void DemoSTL(){
	vector<int> v={2,4,6,8,10};
	v.push_back(20);
	v.push_back(30);
	vector<int>::iterator itr;
	cout<<"using iterator"<<endl;
	for(itr=v.begin();itr!=v.end();itr++)
		cout<<++*itr<<endl;
	cout<<"using for each loop"<<endl;
	for(int x:v)
		cout<<x<<endl;


}
int main(int argc, char const *argv[])
{
	DemoSTL();
	return 0;
}
