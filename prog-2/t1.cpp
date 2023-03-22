#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

  vector<string> wordsVector;
  string word;

  int opcao;

  do
  {
    cout << "-------------MENU---------------" << endl;
    cout << "1. Insert string" << endl;
    cout << "2. Print index and string" << endl;
    cout << "3. Search string (literal) " << endl;
    cout << "5. Remove string (by index) " << endl;
    cout << "6. Remove by substrings (all occurrences)  " << endl
         << endl;
    cout << "Choose an option:  ";

    cin >> opcao;

    system("cls");

    switch (opcao)
    {
    case 1:
    {
      cout << "Type the word: " << endl;
      cin >> word;
      wordsVector.push_back(word);
      break;
    }

    case 2:
    {
      for (size_t i = 0; i < wordsVector.size(); i++)
      {
        cout << "Index[" << i << "] - Word: " << wordsVector[i] << endl;
      }

      break;
    }

    case 3:
    {
      cout << "opcao escolhida:" << opcao << endl;
      break;
    }

    case 0:
    {
      cout << "opcao escolhida:" << opcao << endl;
      break;
    }

    default:
    {

      cout << "opcao escolhida:" << opcao << endl;
      break;
    }
    }

  } while (opcao != 10);

  return 0;
}
