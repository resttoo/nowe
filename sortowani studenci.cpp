#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

struct przedmioty
{
    float ocena;
    string nazwa;

};
struct student
{
  string imie;
  przedmioty b[4] = { {2,"ZIOP"},{2,"SO"},{2,"Grafika"},{2,"MySQL"}}; //Numery przedmiotow odpowiadaja indeksom tablicy + 1//
  double sr = 0;

};

void klasa(student a[])
{

    for(int i=0;i<5;++i)
    {
        cout<<"Podaj imie studenta: ";
        cin>>a[i].imie;

        for(int k=0;k<a[i].imie.length();++k)
        {

            while(a[i].imie[0]<65||a[i].imie[0]>90)
            {
                cout<<"Imie musi sie zaczynac z duzej litery i nie moga wystepowac inne znaki, wpisz jeszcze raz: ";
                cin>>a[i].imie;
                cout<<endl;
            }
            if(k>0&&(a[i].imie[k]<97||a[i].imie[k]>122))
            {
                cout<<"W imieniu moga wystepowac tylko litery, podaj imie jeszcze raz: ";
                cin>>a[i].imie;
                cout<<endl;
                k=0;
                continue;

            }
        }


        for(int j=0;j<4;++j)
        {
            cout<<"Podaj ocene z "<<a[i].b[j].nazwa<<": ";
            cin>>a[i].b[j].ocena;
            while(a[i].b[j].ocena>5||a[i].b[j].ocena<2)
            {
                cout<<"Ocena musi sie miescic w przedziale 2-5, podaj ocene jeszcze raz: ";
                cin>>a[i].b[j].ocena;
            }
        }
    }

    while(1)
    {
        string wyjscie;
        cout<<"Czy chcesz przejsc dalej? [TAK/NIE] : ";
        cin>>wyjscie;

        if(wyjscie == "TAK")
        {
            break;
        }
        else if (wyjscie =="NIE")
        {
        int numerS;
        int numerP;
        cout<<"Podaj numer studenta: "; //Numer studenta odpowiada indeksowi tablicy struktur + 1//
        cin>>numerS;
        cout<<"Podaj numer przedmiotu: ";
        cin>>numerP;
        cout<<"Student: "<<a[numerS-1].imie<<""<<endl;
        cout<<"Ocena z przedmiotu "<<a[numerS-1].b[numerP-1].nazwa<<": "<<a[numerS-1].b[numerP-1].ocena<<""<<endl;
        }
        else
        {
            cout<<"Wpisz TAK lub NIE"<<endl;
        }

    }
}
void srednia(student a[])
{
    double mean = 0;
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<4;++j)
        {
            mean = mean + a[i].b[j].ocena;
        }
        a[i].sr = mean/4;
        mean = 0;

    }


}
bool compare(student & a,student & b)
{
       return a.sr > b.sr;
}

void sortuj(student * a)
{
   sort(a,a+5,compare);
}
void wyswietl(student a[])
{
    for(int i=0;i<5;++i)
    {
        cout<<"Srednia studenta "<<a[i].imie<<" : "<<a[i].sr<<""<<endl;
    }
}

int main()
{
    student a[5];
    klasa(a);
    system("PAUSE");
    srednia(a);
    sortuj(a);
    wyswietl(a);




    return 0;
}
