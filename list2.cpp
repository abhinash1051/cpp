#include <iostream>
#include <list>
using namespace std;

//function to print the list 
void dispList(list<int> L){
	//declaring interator to the list
	list<int>::iterator l_iter;
	for(l_iter = L.begin(); l_iter !=L.end(); l_iter++)
		cout<<*l_iter<< " ";
	cout<<endl;
}

//Main function
int main()
{
    list<int>list1;
    list<int>list2;
    list<int>list3; 
    list<int>list4;

    list1.assign(5,100);
    cout<<"size of list1 :"<<list1.size()<<endl;
    cout<<"element of list :";
    dispList(list1);

    list2.assign(list1.begin(), list1.end());
	cout<<"size of list2: "<<list2.size()<<endl;
	cout<<"Elements of list2: ";
	dispList(list2);

    int arr[] = {10,34,55,67,67};
    list3.assign(arr,arr+4);
    cout<<"size of list3 :"<<list3.size()<<endl;
    cout<<"element of lists";
    dispList(list3);
    return 0;
    






    
}