#include <iostream>
#include <cstring> 
#include <conio.h> 

using namespace std;

char tabla[3][3];
int turn = 1;

// initializarea tablei
void init() 
{
    char nr = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            tabla[i][j] = nr++;
}

// afisarea tablei
void afisare() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "| " << tabla[i][j] << " ";
        }
        cout << "|\n";
        for (int k = 0; k < 13; k++) cout << "-";
        cout << "\n";
    }
}

bool verificadacaestesimbol(char input) {
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (tabla[i][j] == input) return true;
    return false;
}

void adaugaintabla(char input, int player) {
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (tabla[i][j] == input) 
                tabla[i][j] = (player == 1) ? 'X' : 'O';
}

// afisarea finala a mutarilor
void afisarelog()
{
    cout<<"\nMUTARI:\n";
    int k = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            k++;
            if(tabla[i][j] == 'X')
                cout<<"Player 1 mutare: "<<k<<'\n';
            else
                if(tabla[i][j] == 'O')
                cout<<"Player 2 mutare: "<<k<<'\n';
        }
}

bool win() {
    for (int i = 0; i < 3; i++) {
        if (tabla[i][0] == tabla[i][1] && tabla[i][1] == tabla[i][2]) return true;
        if (tabla[0][i] == tabla[1][i] && tabla[1][i] == tabla[2][i]) return true;
    }
    if (tabla[0][0] == tabla[1][1] && tabla[1][1] == tabla[2][2]) return true;
    if (tabla[0][2] == tabla[1][1] && tabla[1][1] == tabla[2][0]) return true;
    return false;
}

int main() {
    init();
    do {
        system("cls");
        afisare();
        char input;
        bool valid = false;
        int player = (turn % 2 == 1) ? 1 : 2;
        
        do {
            cout<<"Player "<<player<<", alege: ";
            cin>>input;
            if (verificadacaestesimbol(input)) 
            {
                valid = true;
                adaugaintabla(input, player);
                turn++;
            } 
            else 
                cout << "Pozitie invalida! Incearca din nou.\n";
        } while (!valid);

        if (win()) {
            system("cls");
            afisare();
            cout << "Player " << player << " a castigat!\n";
            afisarelog();
            break;
        }

        if (turn > 9) {
            cout << "Remiza!\n";
            afisarelog();
            break;
        }

    } while (true);

    return 0;
}
