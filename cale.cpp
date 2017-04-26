#include <iostream>
#include <fstream>
#include <list>
using namespace std;
bool compare(const int& a, const int& b)
{
        return a>b;
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
void sortuj1()
{

    ifstream input("liczby.txt");
    ofstream output("liczby_mal.txt");

    list <int> liczby;
    int liczba;

    do{
       input >> liczba;
       liczby.push_back(liczba);

    }while(!input.eof());

    liczby.sort(compare);

    for (list<int>::iterator it=liczby.begin(); it!=liczby.end() ; ++it)
    output << *it <<endl;

}

int main()
{
    sortuj();
    sortuj1();
    return 0;
}
