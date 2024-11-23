#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
char a[1][3], moves[11][16];
int p, turn = 1;

int verificadacaestesimbol(char input)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == input)
                return 1;
        }
    return 0;
}

void adaugaintabla(char x,int p)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(a[i][j] == x)
                if(p == 1)
                    a[i][j] = 'X';
                else
                    a[i][j] = 'O';
}

void afisarelinii()
{
    cout<<"\n\n";
   for(int i = 1; i < 20; i++)
        cout<<'-';
    cout<<"\n\n";
}

void afisare()
{
    afisarelinii();
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout<<"|  "<<a[i][j]<<"  ";
        cout<<'|';
        afisarelinii();
    }
}

void afisarelog()
{
    cout<<"MUTARI \n";
    int k = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            k++;
            if(a[i][j] == 'X')
                cout<<"Player 1 mutare :"<<k<<'\n';
            else
                if(a[i][j] == 'O')
                cout<<"Player 2 mutare :"<<k<<'\n';
        }
}

void init()
{
    char nr = '0';
    for(int i = 0; i <= 2; i++)
        for(int j = 0; j <= 2; j++)
        {
            nr++;
            a[i][j] = nr;
        }

    for(int i = 0; i <= 9; i++)
        for(int j = 0; j <= 11; j++)
            moves[i][j] = 0;
}

bool win()
{
    int i, nr=0;
    for(i = 0; i < 3; i++)
    {
        if(a[i][0] == a[i][1] && a[i][1] == a[i][2])
        {
            if(a[i][0] == 'X')
                nr = 1;
            else
                if(a[i][0] == 'O')
                    nr = 2;

            break;
        }
        if(a[0][i] == a[1][i] && a[1][i] == a[2][i])
        {
            if(a[0][i] == 'X')
                nr = 1;
            else
                if(a[0][i] == 'O')
                    nr = 2;

            break;
        }
    }
    if(a[0][0] == a[1][1] && a[1][1] == a[2][2])
        if(a[1][1]=='X')
            nr = 1;
        else
            if(a[1][1] == 'O')
                nr = 2;
    if(a[0][2] == a[1][1] && a[1][1] == a[2][0])
        if(a[2][2] == 'X')
            nr = 1;
        else
            if(a[2][2] == 'O')
                nr = 2;

    if(nr)
    {
        system("cls");
        turn=1;
        afisare();
        afisarelog();
        cout<<"Player "<<nr<<" a castigat"<<'\n';
        cout<<"Pentru a incepe o noua runda apasati orice";
        getch();
        init();
    }
}

int main()
{
    init();

    do
    {
        system("cls");
        afisare();
        char input[150];
        bool x=true;
        if(turn % 2 != 0)
        {
            do
            {
                cout<<"Player 1 alege : ";
                cin.getline(input, 150);
                if(input[0] >= '1' && input[0] <= '9')
                {
                    if(verificadacaestesimbol(input[0]) == 0)
                        x = true;
                    else
                    {
                        x = false;
                        p = 1;
                        strcpy(moves[turn], "Player 1 : ");
                        moves[turn][11] = input[0];
                        adaugaintabla(input[0], p);
                        turn++;
                    }
                }
            }while(x);
        }
        else
        {
            do
            {
                cout<<"Player 2 alege : ";
                cin.getline(input, 150);
                if(input[0] >= '1' && input[0] <= '9')
                {
                    if(verificadacaestesimbol(input[0]) == 0)
                        x = true;
                    else
                    {
                        x = false;
                        p = 2;
                        strcpy(moves[turn], "Player 2 : ");
                         moves[turn][11] = input[0];
                        adaugaintabla(input[0], p);
                        turn++;
                    }
                }
            }while(x);
        }
        if(turn == 10)
        {
            system("cls");
            turn=1;
            afisare();
            afisarelog();
            cout<<'\n'<<"Remiza"<<"\n\n";
            cout<<"Pentru a incepe o noua runda apasati orice";
            getch();
            init();
        }
    }while(win());
    return 0;
}
