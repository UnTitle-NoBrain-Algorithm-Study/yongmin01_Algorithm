#include <iostream>
#include <vector>

using namespace std;

bool func (string arr)
{
    vector<char> ps;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == '(')
        {
            ps.push_back('(');
        }
        else if (arr[i] == ')')
        {
            if (ps.empty())
            {
                return false;
            }
            else
            {
                ps.pop_back();
            }
        }
    }
    if (ps.empty()) return true;
    else return false;
}

int main()
{
    int T;
    cin >> T;

    vector<string> arr;
    for (int i = 0; i < T; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for (int l = 0; l < T; l++)
    {
        if (func(arr[l]) == true)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}