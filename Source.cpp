#include<iostream>
#include<string>
using namespace std;
template<typename T>
class node
{
public:
	T data;
	node<T>*link;
};
template<typename T>
void push(node<T>**head, T item) {
	node<T>*newnode;
	newnode = new node<T>;
	newnode->data = item;
	newnode->link = *head;
	*head = newnode;
}
template<typename T>
void pop(node<T>**head) {
	node<T>*front;
	front = new node<T>;
	front = *head;
	*head = front->link;
	delete front;
}
template<typename T>
void reset(node<T>**head) {
	node<T>*temp;
	while (*head != NULL) {
		temp = new node<T>;
		temp = *head;
		*head = temp->link;
		delete temp;
	}
}
template<typename T>
void erasevalue(node<T>*&head, T target) {
	node<T>*curr, *prev = nullptr;
	curr = head;
	bool found = false;
	while ((curr != nullptr) && found == false) {
		if (curr->data == target) {
			if (prev == nullptr)
				head = head->link;
			else
				prev->link = curr->link;
			delete curr;
			found = true;
		}
		else {
			prev = curr;
			curr = curr->link;
		}
	}
}
template<typename T>
void printlist(node<T>*head) {
	while (head != NULL) {
		cout << head->data << "->";
		head = head->link;
	}
	cout << "NULL";
}
int main() {
	node<int>*p;
	p = new node<int>;
	int number;
	int choice;
	p = NULL;
	while (1 == 1) {
		cout << "Add an element to the list : (Enter 1) " << endl;
		cout << "Print the list : (Enter 2) " << endl;
		cout << "Delete an element from the list : (Enter 3) " << endl;
		cout << "Reset the list : (Enter 4) " << endl;
		cout << "Delete a number  : (Enter 5) " << endl;
		cout << "-------------------------------------" << endl;
		cout << "Choice ---> ";
		cin >> choice;
		if (choice == 1) {
			cout << "Please enter a number : ";
			cin >> number;
			push(&p, number);
		}
		if (choice == 2) {
			printlist(p);
			cout << endl;
		}
		if (choice == 3)
			pop(&p);
		if (choice == 4)
			reset(&p);
		if (choice == 5) {
			cout << "Please enter the number which you will delete : ";
			cin >> number;
			erasevalue(p,number);
		}
		cout << endl;
	}
}