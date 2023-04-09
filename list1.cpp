#include <iostream>
#include <list>
using namespace std;

//function to print the list 
void displayList(list<int> L){
	//declaring interator to the list
	list<int>::iterator l_iter;
	for(l_iter = L.begin(); l_iter !=L.end(); l_iter++)
		cout<<*l_iter<< " ";
	cout<<endl;
}

//Main function
int main() {
	list<int>	ilist;

	//empty();
	if(ilist.empty())
		cout<<"List is empty"<<endl;
	else
		cout<<"List of not empty"<<endl;

	//push_front() and push_back()
	ilist.push_front(10);
	ilist.push_front(20);
	ilist.push_front(30);
	ilist.push_front(11);
	ilist.push_front(22);
	ilist.push_back(40);
	ilist.push_back(50);
	cout<<"List elemets aftre push_front(), push_back()"<<endl;
	displayList(ilist);

	//insert()
	list<int>::iterator it;
	it = ilist.begin();
	ilist.insert(it,100);
	ilist.insert(it,200);
	ilist.insert(it,300);
	cout<<"List element after insert()"<<endl;
	displayList(ilist);

	//size()
	cout<<"size of the list is: "<<ilist.size()<<endl;

	//sort()
	ilist.sort();
	cout<<"List elements after sort()"<<endl;
	displayList(ilist);

	//reverse()
	ilist.reverse();
	cout<<"List elements after reverse()"<<endl;
	displayList(ilist);

	//remove()
	//removeing 100 from the List
	ilist.remove(100);
	cout<<"List elements after remove()"<<endl;
	displayList(ilist);

	//remove_if()
	//removeing elements divisible by 50
	ilist.remove_if([](int n) {return (n%50==0); });
	cout<<"List elements after remove_if()"<<endl;
	displayList(ilist);

	//front() and back()
	cout<<"First (front) element of the list: "<<ilist.front()<<endl;
	cout<<"Last (back) element of the list: "<<ilist.back()<<endl;

	//pop_front() and pop_back()
	ilist.pop_front();
	ilist.pop_back();
	cout<<"List element are pop_front() and pop_back()"<<endl;
	displayList(ilist);

	//begin() and end()
	//printing all elements with begin(() and end()
	//begin() and end() can be used with iterator
	list<int>::iterator l_itr;
	cout<<"List elements (using begin() and end()"<<endl;
	for (l_itr = ilist.begin(); l_itr != ilist.end(); l_itr++)
		cout<< *l_itr<< " ";
	cout<<endl;

	//rbegin() and rend()
	//printing all elements witn rbegin() and rend()
	//rbegin() and rend() can be used with reverse_iterator
	list<int>::reverse_iterator l_ritr;
	cout<<"List elements (using rbegin() and rend()"<<endl;
	for (l_ritr = ilist.rbegin(); l_ritr != ilist.rend(); l_ritr++)
		cout<< *l_ritr<< " ";
	cout<<endl;

	//assign()
	list<int> list2;
	list2.assign(5,100);
	cout<<"List2 elements after assign()"<<endl;
	displayList(list2);

	//merge()
	ilist.merge(list2);
	cout<<"List elements after merge()"<<endl;
	displayList(ilist);

	//unique()
	ilist.unique();
	cout<<"List  elements after unique()"<<endl;
	displayList(ilist);

	//erase()
	//it can be used with the iterator 
	it = ilist.begin();
	ilist.erase(it);
	cout<<"List elements after erase()"<<endl;
	displayList(ilist);

	return 0;
}