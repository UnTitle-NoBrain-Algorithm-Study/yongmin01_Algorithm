#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    string result;
    stack<char>temp;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '<') // 태그
        {
            if (!temp.empty())
            {
                while(!temp.empty())
                {
                    result.push_back(temp.top());
                    temp.pop();
                }
                result.push_back('<');
                i++;
            }
            
            while(S[i] != '>')
            {
                result.push_back(S[i]);
                i++;
            }
            result.push_back('>');
        }
        else // 단어
        {
            if (S[i] == ' ') 
            {
                result.push_back(' ');
                i++;
            }

            while (S[i] != '<' && S[i] != ' ')
            {
                if (i == S.length())
                {
                    break;
                }
                temp.push(S[i]);
                i++;
            }
            while (!temp.empty())
            {
                result.push_back(temp.top());
                temp.pop();
            }
            i--;
        }
    }


    for (int i = 0; i < S.length(); i++)
    {
        cout << result[i];
    }
}