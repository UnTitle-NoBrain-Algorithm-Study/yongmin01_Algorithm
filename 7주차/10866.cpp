#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string order;
    int X;

    deque<int> dq;
    for (int i = 0; i < N; i++)
    {
        cin >> order;

        if (order == "push_front")
        {
            cin >> X;
            dq.push_front(X);
        }
        else if (order == "push_back")
        {
            cin >> X;
            dq.push_back(X);
        }
        else if (order == "pop_front")
        {
            if (dq.empty() == true)
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (order == "pop_back")
        {
            if (dq.empty() == true)
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (order == "size")
        {
            cout << dq.size() << "\n";
        }
        else if (order == "empty")
        {
            if (dq.empty() == true)
            {
                cout << 1 << "\n";
            }
            else cout << 0 << "\n";
        }
        else if (order == "front")
        {
            if (dq.empty() == true)
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << dq.front() << "\n";
            }
        }
        else if (order == "back")
        {
            if (dq.empty() == true)
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << dq.back() << "\n";
            }
        }
    }

    return 0;
}