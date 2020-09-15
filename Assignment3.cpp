/*#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
template<typename T>
class node {
public:
	T pval;
	T x;
	T pow;
	node<T>*next;
};
template<typename T>
void pushpow(node<T>*&front, T pwr) {
	if (front == NULL) {
		node<T>*front;
		front = new node<T>;
		front->pow = pwr;
		front->x = 'X';
		front->pval = '4';
		front->next = NULL;
	}
	else {
		node<T>*newnode, *curr = front;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		newnode = new node<T>;
		newnode->pow = pwr;
		newnode->x = 'X';
		newnode->pval = '4';
		newnode->next = NULL;
		curr->next = newnode;
	}
}
template<typename T>
void writelist(node<T>*front) {
	while (front != NULL) {
		cout << front->pval << front->x << front->pow << "--->";
		front = front->next;
	}
}
int main() {
	node<int>*P;
	string func;
	P = NULL;
	cout << "Enter a polynomial : ";
	cin >> func;
	int start;
	for (int i = 0;func[i] != '\0';i++) {
		if (func[i] == 'x'&&func[i + 1] == '^') {
			start =int(func[i + 2]);
			break;
		}
	}
	while (start != -2) {
		pushpow(P, start);
		start--;
	}
	writelist(P);
}*/