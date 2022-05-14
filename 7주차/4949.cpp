#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool VPS(string input)
{
    stack<char> st;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(' || input[i] == '[')
        {
            st.push(input[i]);
        }
        else if (input[i] == ')')
        {
            if (st.empty())
            {
                return false;
            }
            else 
            {
                if (st.top() != '(')
                {
                    return false;
                }
                st.pop();
            }
        }
        else if (input[i] == ']')
        {
            if (st.empty())
            {
                return false;
            }
            else 
            {
                if (st.top() != '[')
                {
                    return false;
                }
                st.pop();
            }
        }
    }
    
    if (st.empty())
    {
        return true;
    }
    else return false;

}
int main()
{
    while (true)
    {
        string input;
        getline(cin, input);

        if (input == ".") break;
        else if (VPS(input)) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
} 