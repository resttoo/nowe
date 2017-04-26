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
    return 0;
}
