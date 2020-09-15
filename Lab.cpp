/*#include<iostream>
#include<string>
#include<cmath>
using namespace std;
template<typename T>
class node
{
public:
	T pval;
	T xval;
	T pow;
	node<T>*next;
};
template<typename T>
void pushback(node<T>*&front, const T&pwr) {
	if (front == NULL) {
		front = new node<T>;
		front->pval;
		front->xval='X';
		front->pow = pwr;
		front->next=NULL;
	}
	else {
		node<T>*newnode, *curr = front;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		newnode = new node<T>;
		newnode->pval;
    	newnode->xval='X';
		newnode->pow = pwr;
		newnode->next = NULL;
		curr->next = newnode;
	}
}
template<typename T>
void integral(node<T>*&front) {
	node<T>*temp = front;
	while (front!= NULL) {
		front->pow = front->pow + 1;
		front->pval = (front->pval) / (front->pow);
		front = front->next;
	}
	front = temp;
}
template<typename T>
float calcpoly(node<float>*&front,const T& var) {
	node<float>*temp = front;
	float sum = 0;
	while (front != NULL) {
		sum = sum +front->pval*(pow(var, front->pow));
		front= front->next;
	}
	front = temp;
	return sum;
}
template<typename T>
void writelist(node<T>*front) {
	while (front != NULL) {
		if (front->next == NULL) {
			cout << front->pval << " " << char(front->xval) << " " << front->pow;
			break;
		}
		cout << front->pval << " " << char(front->xval) << " " << front->pow << " ---> ";
		front = front->next;
	}
}
template<typename T>
void pre(node<float>*front, const T &func) {
	node<float>*temp = front;
	int a=front->pow;
	if(isdigit(func[0]))
	front->pval= ((float)func[0]) - 48;
	else if(func[0]=='-')
		front->pval = (((float)func[1]) - 48)*-1;
	else if (func[0] == '+')
		front->pval = ((float)func[1]) - 48;
		while (a != 1) {
			front = front->next;
				a--;
				front->pval = 0;
		}
		for (int i = 2;func[i] != '\0';i++) {
			if (func[i] == '-' || func[i] == '+') {
				if(func[i] == '-')
				front->pval = (((float)func[i + 1])-48)*-1;
				if(func[i] == '+')
					front->pval = ((float)func[i + 1]) - 48;
				front = front->next;
			}
		}
	front = temp;
}
int main()
{   int choice,varx;
	float num;
	typename node<float>*p;
	p = NULL;
	string func;
	cout << "Enter the polynomial equation : ";
	cin >> func;
	for (int i = 0;func[i]!='\0';i++) {
		if (func[i] == 'x'&&func[i + 1] == '^') {
			num = (float)func[i + 2];
			num = num - 48;
			break;
		}
	}
	while (num != -1) {
		pushback(p,num);
		num = num - 1;
	}
	pre(p, func);
	cout << "The linked list representation of given polynomial : ";
	writelist(p);
	cout << endl;
	cout << "---------------------------------------------------------" << endl;
	while (1==1) {
		cout << "Select an operation : "<<endl;
		cout <<"1.  Calculate polynomial value  "<<endl;
		cout <<"2.  Calculate integral " << endl;
		cout <<"3.  Exit " << endl;
		cout << "--> ";
		cin >> choice;
		if (choice == 1) {
			cout << "Enter X : ";
			cin >> varx;
			cout << "The value of polynomial for X=" << varx << " : " << calcpoly(p, varx)<<endl;
			cout << "------------------------------------------------------" << endl;
		}
		if (choice == 2) {
			integral(p);
			cout << "The newly created linked list after calculating integral is : " << endl;
			writelist(p);
			cout << "--->1 C 0"<<endl;
			cout << "---------------------------------------------------------" << endl;
		}
		if (choice == 3) {
			cout << "Program is finished!";
			break;
		}
	}
}*/