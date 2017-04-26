#include<iostream>
#include<cstdlib>
#include<string>
#define klasa 5
 
using namespace std;
 
struct student{  
  char imie[25];
  int koniec;
  float ZIOP, SO, Grafika, MySql;
};
 
int main()
{
  student A[klasa];
  for(int i=0;i<klasa;i++)
  {
    cout<<"Podaj imie studenta nr "<<i+1<<": ";
    cin>>A[i].imie;
  
    if((A[i].imie[i]<97||A[i].imie[i]>122))
            {
                cout<<"W imieniu moga wystepowac tylko litery ";
                cin>>A[i].imie;
                cout<<endl;
                
            }
    cout<<"Podaj ocene z ziop: ";
    cin>>A[i].ZIOP;
    if (A[i].ZIOP>6 || A[i].ZIOP<1)
    {
    cout<<"Zla ocena"<<endl;

    goto koniec;
}
    cout<<"Podaj ocene z so: ";
    cin>>A[i].SO;
    if (A[i].SO>6 || A[i].SO<1)
    {
    cout<<"Zla ocena"<<endl;
        goto koniec;
}
    cout<<"Podaj ocene z grafiki: ";
    cin>>A[i].Grafika;
    if (A[i].Grafika>6 || A[i].Grafika<1)
    {
    cout<<"Zla ocena"<<endl;
        goto koniec;
}
    cout<<"Podaj ocene z mysql: ";
    cin>>A[i].MySql;
    if (A[i].MySql>6 || A[i].MySql<1)
    {
    
	cout<<"Zla ocena"<<endl;
        goto koniec;
}
 
  }
  int q;
  cout<<"Podaj liczbe zapytan: ";
  cin>>q;
  int nr, przedmiot;
  while(q--)
  {
    cout<<"Podaj nr studenta [1.."<<klasa<<"]: ";
    cin>>nr;
    --nr;
    if(nr<0||nr>=klasa)
    {
      cout<<"W bazie nie ma studenta o takim numerze!"<<endl;
      continue;
    }
    cout<<"Podaj nr przedmiotu [0..3]: ";
    cin>>przedmiot;
    if(przedmiot<0||przedmiot>3)
    {
      cout<<"Podales niewlasciwy przedmiot!"<<endl;
      continue;
    }
    switch(przedmiot)
    {
      case 0:
        cout<<"Student: "<<A[nr].imie<<", ocena z ziop: "
        <<A[nr].ZIOP<<endl;
        break;
      case 1:  
        cout<<"Student: "<<A[nr].imie<<", ocena z so: "
        <<A[nr].SO<<endl;
        break;
      case 2:
        cout<<"Student: "<<A[nr].imie<<", ocena z grafiki: "
        <<A[nr].Grafika<<endl;
        break;
      case 3:
        cout<<"Student: "<<A[nr].imie<<", ocena z mysql: "
        <<A[nr].MySql<<endl;
        break;
    }
  }
  cout<<endl;
  koniec:
  system("pause");
  return 0;
}
