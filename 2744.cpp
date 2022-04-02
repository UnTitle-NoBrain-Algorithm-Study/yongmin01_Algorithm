#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;
  cin >> word;

  for (int i = 0; i < word.length(); i++)
    {
      if (word[i] >= 'a' && word[i] <= 'z')
      {
        word[i] = toupper(word[i]);
      }
      else
      {
        word[i] = tolower(word[i]);
      }
    }

  cout << word;

  return 0;
}