#include <iostream>
#include <string>
#include <vector>

using namespace std;
int solution(string s) {
    vector<string> dic = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    s[50];
    cin >> s;
    int order;
    char arr[10];
    for (int i = 0; i < s.length(); i++)
    {
        switch(s[i])
        {
            case 'z':
                arr[order] = '0';
                i += 3;
                break;
            case 'o':
                arr[order] = '1';
                i += 2;
                break;
            case 't':
                if (s[i+1] == 'w')
                {
                    arr[order] = '2';
                    i+= 2;
                }
                else if (s[i+1] == 'h')
                {
                    arr[order] = '3';
                    i += 4;
                }
                break;
            case 'f':
                if (s[i+1] == 'o')
                {
                    arr[order] = '4';
                    i += 3;
                }
                else if (s[i+1] == 'i')
                {
                    arr[order] = '5';
                    i += 3;
                }
                break;
            case 's':
                if (s[i+1] == 'i')
                {
                    arr[order] = '6';
                    i += 2;
                }
                else if (s[i+1] == 'e')
                {
                    arr[order] = '7';
                    i += 4;
                }
                break;
            case 'e':
                arr[order] = '8';
                i += 4;
                break;
            case 'n':
                arr[order] = '9';
                i += 3;
                break;
            default:
                arr[order] = int(s[i]);
                break;
        }
        order += 1;
    }
    
    int answer = stoi(arr);
    return answer;
}