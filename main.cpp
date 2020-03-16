#include <iostream>
#include <conio.h>
#include <windows.h>

#include "funkcje.h"

int main()
{
    using std::cout;

    //wczytanie danych do tablicy przez zastosowanie inicjalizacji
    student studenci[5] =
    {
        {"Jan","Kowalski",2,22,850,560},
        {"Marek","Nowak",1,21,300,560},
        {"Pawel","Rodzki",3,23,300,410},
        {"Adam","Kleks",1,21,500,410},
        {"Maksymilian","Kognacki",1,21,850,480}
    };
    bool program = true;
    char wybor;
    while(program)
    {
        cout<<"Co chcesz zrobic?\n";
        cout<<"1. Wypisz wszystkich studentow\n";
        cout<<"2. Wypisz wszystkich studentow, ktorych nazwiska koncza sie na litere \'i\'\n";
        cout<<"3. Wypisz sume stypendiow socjalnych studentow, ktorzy sa na 1 roku\n";
        cout<<"4. Wypisz nazwiska studentow, ktorzy otrzymuja najwyzsze stypendia naukowe\n";
        cout<<"5. Wypisz ilu studentow otrzymuje najnizsze stypendia socjalne\n";
        cout<<"Aby zakonczyc program wcisnij \'e\'\n";
        wybor = getch();

        switch(wybor)
        {
        case '1':
                wywolaj(studenci,b);
            break;
        case '2':
                wywolaj(studenci,c);
            break;
        case '3':
                wywolaj(studenci,d);
            break;
        case '4':
                wywolaj(studenci,e);
            break;
        case '5':
                wywolaj(studenci,f);
            break;
        case 'e':
            program=false;
            break;
        default:
            {
                system("cls");
                cout<<"Nie ma takiej opcji! Sprobuj jeszcze raz!\n";
                system("pause");
                system("cls");
            }
            break;
        }
    }
    return 0;
}
