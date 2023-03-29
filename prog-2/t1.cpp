// Estudantes
// Fernando Doqui Futila (22250762)
// Fabio Augusto Martini Reis (19204589)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

  vector<string> wordsVector;
  string word, search_word, substring;
  int idx;

  int opcao;

  do
  {
    cout << endl;
    cout << endl;
    cout << "-------------MENU---------------" << endl;
    cout << endl;
    cout << "1. Insert string" << endl;
    cout << "2. Print index and string" << endl;
    cout << "3. Search string (literal) " << endl;
    cout << "4. Search substrings " << endl;
    cout << "5. Remove string (by index) " << endl
         << endl;

    cout << "0. Quit " << endl
         << endl;

    cout << "Choose an option:  ";

    cin >> opcao;

    system("cls");

    switch (opcao)
    {
    case 1:
    {
      cout << "Type the word: ";
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
      cout << "Type the word to search: ";
      cin >> search_word;
      cout << endl;
      int count = 1;

      for (size_t i = 0; i < wordsVector.size(); i++)
      {
        if (wordsVector[i] == search_word)
        {
          cout << count << " palavra <" << search_word << "> encontrada na posicao: " << i << endl;
          count++;
        }
        else
        {
          if (i == wordsVector.size() - 1)
          {
            cout << "Word not found !!!";
          }
        }
      }

      break;
    }

    case 4:
    {
      cout << "Type the substring to search: ";
      cin >> substring;
      cout << endl;
      int count = 1;

      for (size_t i = 0; i < wordsVector.size(); i++)
      {
        size_t found = wordsVector[i].find(substring);
        if (found != string::npos)
        {
        }
        else
        {
          if (i == wordsVector.size() - 1)
          {
            cout << "Substring not found !!!";
          }
        }
      }

      break;
    }

    case 5:
    {
      cout << "Type the index to remove: ";
      cin >> idx;
      cout << endl;

      if (idx < 0 || idx > wordsVector.size() - 1)
      {
        cout << "Invalid index";
      }
      else if (wordsVector.empty())
      {
        cout << "A lista esta vazia" << endl;
      }
      else
      {
        wordsVector.erase(wordsVector.begin() + idx);

        cout << "Elemento removido" << endl
             << endl;

        if (!wordsVector.empty())
        {

          cout << "Lista atualizada: " << endl
               << endl;
          for (size_t i = 0; i < wordsVector.size(); i++)
          {
            cout << "Index[" << i << "] - Word: " << wordsVector[i] << endl;
          }
        }
      }

      break;
    }

    case 0:
    {
      exit(0);
      break;
    }

    default:
    {
      cout << "opcao invalida." << endl;
      break;
    }
    }

  } while (opcao != 0);

  return 0;
}
