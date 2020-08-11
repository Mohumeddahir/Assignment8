#include<iostream>
#include"SimpleLinkedList.hpp"
using namespace std;


//testing my program to check out if it works with all 
//varring inputs.
int main(){
	//testing my constructor and copy contructor
	SimpleLinkedList t;
	SimpleLinkedList t1(t);
	//checking to comfirm if the list is initially empty.
	cout<<"return 1 if the list is empty or else return 0: "<<t.is_empty()<<endl;
	cout<<"the number of elements in the list is: "<<t.get_num_elements()<<endl;
	cout<<"the first element in the list is: "<<t.get_first_element()<<endl;
	//inserting some elements 
	t.insert_first("megan");
	t.insert_first("sonia");
	t.insert_first("khalid");
	t.insert_first("farhia");
	t.insert_first("sacdiya");
	t.insert_first("sumaya");
	cout<<"return 1 if the list is empty or else return 0: "<<t.is_empty()<<endl;
	cout<<"the number of elements in the list is: "<<t.get_num_elements()<<endl;
	cout<<"the first element in the list is: "<<t.get_first_element()<<endl;
	//printing out the list
	t.print_contents();
	//removing the first element from the list.
	t.remove_first();
	cout<<"the number of elements in the list is: "<<t.get_num_elements()<<endl;
	cout<<"the first element in the list is: "<<t.get_first_element()<<endl;
	//printing out after one remove
	t.print_contents();
	//more removes
	t.remove_first();
	t.remove_first();
	t.remove_first();
	t.remove_first();
	t.remove_first();
	cout<<"return 1 if the list is empty or else return 0: "<<t.is_empty()<<endl;
	cout<<"the number of elements in the list is: "<<t.get_num_elements()<<endl;
	cout<<"the first element in the list is: "<<t.get_first_element()<<endl;
	//printing out after all the removes.
	t.print_contents();
	
	//end of testing 
	cout<<"All done"<<endl;
	

	
return 0;
}
