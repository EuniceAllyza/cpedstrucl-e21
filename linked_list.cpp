#include <iostream>
#include <conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL;
    }

    void addValue(int value){  
        Node *n = new Node();   
        n->x = value;             
        n->next = head;                 
        head = n;         
		cout <<"You have pushed " << value;     
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;
        head = head->next;
        delete n;
        return ret;
    }
    
    void displayValue (){
    	tempo = head;
		while (head != 0)
		{
		Node *n = head;
		Node *t = tempo;
		int ret = n->x;
		head = head->next;
        cout << ret << endl;
	}
	head = tempo;
	}
	
	void updateValue (int pos, int num){
	}

private:
    Node *head; 
    Node *tempo;
};

int main() {
    LinkedList list;
	int choice;
while(1){
	system("cls");
	int value, num, pos;
	cout << "Linked List\n";
	cout << "[1] Push\n";
	cout << "[2] Pop\n";
	cout << "[3] Display\n";
	cout << "[4] Update\n";
	cout << "[5] Exit\n";
	cout << "Enter choice: ";
	cin >> choice;
	switch(choice){
		
		case 1:
			cout << "Enter value to push:";
			cin >> value;
			list.addValue(value);
			break;
			
		case 2:
			cout << "Poped "<<list.popValue() << endl;
			break;
			
		case 3:
			list.displayValue();
			break;
			
		case 4: 
		cout << "Enter position: ";
		cin >> pos;
		cout << "Enter number to swap: ";
		cin >> num;
	
		case 5:
			exit(1);
			
		default:
			cout << "Invalid input try again\n";
			break;
	}
	getch();
}
    return 0;
}
