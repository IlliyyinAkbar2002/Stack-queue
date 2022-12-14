#include <iostream>
#include <stack>
using namespace std;

void Clear()
{
    system("cls");
}

void display_stack(stack<string> stact)
{

    while (!stact.empty())
    {
        cout << stact.top() << ", ";
        stact.pop();
    }

    cout << endl;
}

int main(int argc, char *argv[])
{

    Clear();

    int count;
    string value;
    stack<string> color;

    // add element to the Stack
    cout << "Count value : ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cin >> value;
        color.push(value);
    }

    cout << "Initial stack size : ";
    display_stack(color);

    color.pop();
    cout << "Final stack size : ";
    return 0;
}
