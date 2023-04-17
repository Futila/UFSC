#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector <pair <char, char>> CreateTable(int desloc);

int main()
{
    vector <pair<char, char>> convTable;
    convTable = CreateTable(1);

    //print table

    for(size_t i = 0; i < convTable.size(); i++){
        cout << convTable.at(i).first << " ->" << convTable.at(i).second << endl;
    }

    return 0;
}


vector <pair <char, char>> CreateTable(int desloc)
{
    vector <pair<char, char>> table(256);

    for(size_t i = 0; i < table.size(); i++){
        table.at(i).first = i;
        table.at(i).second = table.at(i).first + desloc;
    }

    return table;
}
