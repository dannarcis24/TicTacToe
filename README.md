# CERINTA:
Implementarea unui joc de X&0 (TicTacToe) in consola. Pentru a fi jucat, este necesar de 2jucatori, care sa introduca pozitiile pe tabla de la tastatura (1-9).

# PRINCIPALELE STRUCTURI UTILIZATE:
char tabla[3][3];

Pe parcursul unui meci sunt introduse mai multe poziti, care trebuiesc retinute si prelucrate, astfel incat jocul sa poata continua, conform regulilor.

# REGULI:
Pentru un joc este necesar de 2jucatori, unul dintre ei va juca cu X si celalat va juca cu 0, fiind simboluri, care urmeaza sa fie introduse pe tabla (matrice 3x3), pana cand unul dintre ei va castiga sau meciul se va incheia cu remiza.
1. VICTORIE: unul dintre jucatori reuseste sa formeze o linie dreapta cu simbolul sau
2. REMIZA: toate mutarile posibile au fost introduse si nici unul dintre jucatori nu a indeplinit conditia pentru victorie

# FUNCTA MAIN:
>Toate functiile implememtate sunt apelate si coordonate in functia main, astfel incat jocul poate fi jucat normal.

Pentru crearea jocului a fost necesara rescrierea consolei la fiecare pas, astfel, dupa ce jucatorul 1/2 isi introduce pozitia aleasa (nu se permit repetitiile), consola se va reseta, iar pe tabla va aparea simbolul X/0, in functie de pozitia introdusa 1-9, informatie, care este retinuta in memorie si folosita in verificarea conditiiei de final, respectiv daca jocul a ajuns la final (VICTORIE/REMIZA).  
Dupa finalizarea unui meci, se afiseaza tabla finala, jucatorul, care a castigat sau REMIZA si istoricul mutarilor, incepand cu Player 1, urmand Player 2, pe urma aplicatia asteapta o urmatoare comanda pentru inceperea unui nou joc.
