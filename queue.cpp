#include <iostream>
#include <queue>
using namespace std;

void Clear()
{
    system("cls");
}

void Display_queue(queue<string> qu)
{

    while (!qu.empty())
    {
        cout << qu.front() << ", ";
        qu.pop();
    }

    cout << endl;
}

int main(int argc, char *argv[])
{

    Clear();

    // create varaiable
    int count;
    string value;
    queue<string> name;

    cout << "Count name: ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cin >> value;
        name.push(value);
    }

    cout << "Initial value of queue: ";
    Display_queue(name);

    name.pop();
    cout << "Final queue value: ";
    return 0;
}
