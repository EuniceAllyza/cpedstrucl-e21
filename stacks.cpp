//Ruiz
#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};

int main() {
  Stack * s = new Stack(100);

  s -> display();
  s -> push(1);
  s -> display();
  s -> push(2);
  s -> display();
  s -> push(3);
  s -> display();
  s -> push(4);
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> push(10);
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  s -> pop();
  s -> display();
  return 1;
}
