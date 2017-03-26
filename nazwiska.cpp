#include <iostream>
#include <fstream>
#include <list>
using namespace std;
bool compare(const string& a, const string& b)
{
        return a<b;
}
void sortuj()
{

    ifstream input("nazwiska.txt");
    ofstream output("nazwiska_leksyko.txt");

    list<string> nazwisko;
    string dane;

    do{
       input>>dane;
       nazwisko.push_back(dane);

    }while(!input.eof());

    nazwisko.sort(compare);

    for (list<string>::iterator it=nazwisko.begin(); it!=nazwisko.end() ; ++it)
    output << *it <<endl;

}

int main()
{
    sortuj();
    return 0;
}
