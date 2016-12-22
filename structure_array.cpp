#include <iostream>
#include <conio.h>
using namespace std;
void display (struct Book[]);
void insert (int, int, double, struct Book[]);
void del (int, struct Book[]);
void swap (int, int, struct Book []);
struct Book {
  	int copies;
  	double price;
}book[5];
	
int main()
{
	int arr[20]={1,2,3,4,5,6,7,8,9,10};
	while(1)
	{
		system ("cls");
		int choice, copies, position, p2;
		double price;
		cout << "Array Manipulation\n";
		cout << "[1] Display \n";
		cout << "[2] Insert \n";
		cout << "[3] Delete \n";
		cout << "[4] SWAP \n";
		cout << "[5] Exit \n";
		cout << "Enter choice: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				{
					display(book);
				} break;
			case 2:
				{
					cout << "Enter number of copies: ";
					cin >> copies;
					cout << "Enter price: ";
					cin >> price;
					cout << "Enter position: ";
					cin >> position;
					insert(position,copies,price,book);
					display(book);
				} break;
			case 3:
				{
					cout << "Enter position: ";
					cin >> position;
					del(position,book);
					display(book);
				} break;
			case 4:
				{
					cout << "Enter position 1: ";
					cin >> position;
					cout << "Enter position 2: ";
					cin >> p2;
					swap(position,p2,book);
					display(book);
				} break;
			case 5:
				{
					exit(1);
				} break;
			
			default: cout << "Invalid Choice!\n"; break;					
		}
		cout << endl;
		system("pause");
	}
	getch();
	return 0;
}

void display(struct Book book[])
{
	for(int i=0; i<5; i++)
	{
		cout << "[" << i << "]" << book[i].copies << endl;
		cout << "[" << i << "]" << book[i].price << endl;
	}
}

void insert(int position, int copies, double price, struct Book book[])
{
	int i;
    Book temp[5];
    book[position].copies=copies;
    for(i=position; i<5; i++){
        temp[i-position].copies=book[i].copies;
        temp[i-position].price=book[i].price;
    }

    book[position].copies=copies;
    book[position].price=price;
    for (i=position; i<5; i++){
        if(book[i].copies != 0){
			book[i+1].copies=temp[i-position].copies;
 			book[i+1].price=temp[i-position].price;
 		}
	}
}

void del(int position, struct Book book[]){
	int i;
	for (i=position; i<5; i++)
	{
		book[i]=book[i+1];
	}
	book[position].copies=0;
 	book[position].price=0;
}

void swap (int position, int position2, struct Book book[])
{
	Book temp[5];
    temp[position]=book[position];
    book[position]=book[position2];
    book[position2]=temp[position];

	for(int i=0; i<5; i++)
	{
		cout << "[" << i << "]" << book[i].copies << endl;
		cout << "[" << i << "]" << book[i].price << endl;
	}
}
