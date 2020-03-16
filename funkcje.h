#ifndef FUNKCJE_H_INCLUDED
#define FUNKCJE_H_INCLUDED

using namespace std;

struct student
{
    #include <string>
    string imie;
    string nazwisko;
    unsigned short rok;
    unsigned short wiek;
    double stypN;
    double stypS;
};

void b(student s[]) //wypisanie na ekranie wczytanych danych
{
    for(int i=0; i<5; i++)
    {
        cout<<"Student #"<<i+1<<endl;
        cout<<"Imie: "<<s[i].imie<<endl;
        cout<<"Nazwisko: "<<s[i].nazwisko<<endl;
        cout<<"Rok studiow: "<<s[i].rok<<endl;
        cout<<"Wiek: "<<s[i].wiek<<endl;
        cout<<"Stupendium naukowe: "<<s[i].stypN<<" zl"<<endl;
        cout<<"Stupendium socjalne: "<<s[i].stypS<<" zl"<<endl<<endl;
    }
}

void c(student s[]) //wypisanie studentow ktorych nazwiska koncza sie na 'i' oraz sa na 1 roku studiow
{
    cout<<"Podaj rok studiow: ";
    int rok; cin>>rok;
    for(int i=0; i<5; i++)
    {
        if(s[i].rok==rok && s[i].nazwisko[s[i].nazwisko.size()-1]=='i')
        {
            cout<<"Nazwisko: "<<s[i].nazwisko<<endl;
            cout<<"Wiek: "<<s[i].wiek<<endl;
            cout<<"Stupendium naukowe: "<<s[i].stypN<<" zl"<<endl<<endl;
        }
    }
}

void d(student s[]) //suma stypendiow socjalnych wszystkich studentow na 1 roku
{
    double suma;
    for(int i=0; i<5; i++)
    {
        if(s[i].rok=1)
            suma+=s[i].stypS;
    }
    cout<<"Suma stypendiow socjalnych wszystkich studentow na 1 roku: "<<suma<<" zl"<<endl;

}
void e(student s[]) //nazwiska studentow ktorzy otrzymuja najwyzsze stypendia naukowe
{
    int najwyzsze=0;
    for(int i=0; i<5; i++)
        if(s[i].stypN>najwyzsze)
            najwyzsze = s[i].stypN;
    cout<<"Studenci ktorzy otrzymuja najwyzsze stypendia naukowe: \n";
    for(int i=0; i<5; i++)
        if(s[i].stypN==najwyzsze)
        {
            cout<<s[i].nazwisko<<endl;
        }
}
void f(student s[]) //liczba studentow ktora otrzymuje najnizsze stypendia socjalne
{
    int najnizsze=s[0].stypS;
    for(int i=1; i<5; i++)
        if(s[i].stypS<najnizsze)
            najnizsze = s[i].stypS;
    cout<<"Liczba studentow ktora otrzymuje najnizsze stypendia socjalne: ";
    int ile=0;
    for(int i=0; i<5; i++)
        if(s[i].stypS==najnizsze)
            ile++;
    cout<<ile<<endl;
}
void wywolaj(student stu[],void(*w)(student []))
{
    system("cls");
    (*w)(stu);
    system("pause");
    system("cls");
}

#endif // FUNKCJE_H_INCLUDED
