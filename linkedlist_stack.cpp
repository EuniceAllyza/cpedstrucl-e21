#include<iostream>
#include<conio.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class stack{
    struct node *top;
    public:
    stack(){
        top=NULL;
    }
    void push();
    void show();
};

void stack::push(){
    int value;
    struct node *ptr;
    cout<<"\nPUSH Operation\n";
    cout<<"Enter a number to insert: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<<"\nNew item is inserted to the stack.";
}

void stack::show(){
	int n=0;
    struct node *ptr1=top;
    cout<<"\nThe stack is:";
    while(ptr1!=NULL){	
    	cout<<"\n["<<n<<"] "<<ptr1->data;
        ptr1=ptr1->next;
        n++;
    }
    cout<<"\n["<<n<<"]"<<" NULL\n";
}

int main()
{
    stack s;
    int choice;
    while(1)
    {
    	system("cls");
        cout<<"STACK USING LINKED LIST\n";
        cout<<"1:PUSH\n2:DISPLAY STACK\n3:EXIT";
        cout<<"\nEnter your choice(1-3): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.show();
                break;
            case 3:
                return 0;
                break;
            default:
                cout<<"\nPlease enter correct choice(1-3).";
                break;
        }
        getch();
    }
    return 0;
}
