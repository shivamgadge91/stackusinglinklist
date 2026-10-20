#include <iostream>
using namespace std;

const int MAX = 5;

class Stack
{
private:
    int a[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        top++;
        a[top] = x;
    }

    int pop(void)
    {
        int x = a[top];
        top--;
        return x;
    }

    int peek(void)
    {
        return a[top];
    }

    int full(void)
    {
        if (top == MAX - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int empty(void)
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void display(void)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << endl << a[i];
        }
    }
};

int main()
{
    int x;
    Stack s;

    if (!s.full()) s.push(999);
    if (!s.full()) s.push(888);
    if (!s.full()) s.push(777);
    if (!s.full()) s.push(666);
    if (!s.full()) s.push(555);
    if (!s.full()) s.push(444);

    cout << "Stack elements:";
    s.display();

    if (!s.empty())
    {
        x = s.pop();
        cout << endl << "Removed: " << x;
    }

    cout << endl << "Stack after pop:";
    s.display();

    if (!s.empty())
    {
        x = s.peek();
        cout << endl << "Top element is: " << x;
    }

    return 0;
}
/**/Stack elements:
555
666
777
888
999
Removed: 555
Stack after pop:
666
777
888
999
Top element is: 666
PS D:\shivam 127> 