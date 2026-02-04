# 🎮 Tic Tac Toe (X și O) - C++ Console Edition

[![Language](https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=flat&logo=windows&logoColor=white)]()

O implementare clasică a jocului **X și O** dezvoltată în C++, concepută pentru a fi jucată de doi utilizatori de la aceeași tastatură. Proiectul pune accent pe gestionarea matricelor și pe logica de control a stărilor de joc într-un mediu de consolă.

## 🚀 Funcționalități

* **Multiplayer Local**: Permite interacțiunea între doi jucători prin alternarea rundelor.
* **Interfață Dinamică**: Tabla de joc se actualizează în timp real după fiecare mișcare validă, oferind feedback vizual imediat.
* **Validare Input**: Sistemul verifică dacă poziția aleasă este validă și dacă nu a fost deja ocupată de un alt simbol.
* **Detecție Automată a Finalului**: Jocul verifică automat liniile, coloanele și diagonalele pentru a identifica un câștigător sau starea de remiză.
* **Istoric Rundă**: Afișează cine a efectuat mutarea câștigătoare pentru a facilita urmărirea jocului.



## 🛠️ Detalii Tehnice

* **Structuri de Date**: Utilizarea unei matrice bidimensionale de tip `char` pentru reprezentarea vizuală a tablei (3x3).
* **Controlul Fluxului**: Implementarea unei bucle de joc care rulează până la atingerea condiției de câștig sau epuizarea mutărilor.
* **Management UI**: Folosirea apelurilor de sistem pentru a curăța ecranul consolei, menținând o experiență de joc curată.



## 📂 Organizarea Codului

* `init()`: Pregătește matricea, completând-o cu numere de la 1 la 9 pentru a ghida alegerile jucătorilor.
* `afisare()`: Desenează structura tabelară în fereastra de consolă.
* `verificadacaestesimbol(char input)`: Verifică dacă poziția solicitată este liberă.
* `adaugaintabla(char input, int player)`: Plasează 'X' sau 'O' în coordonatele corecte ale matricei.
* `win()`: Evaluează cele 8 scenarii posibile de victorie.

---

## ⚙️ Instalare și Rulare

### Cerințe Sistem
* Un compilator C++ (MinGW, GCC sau MSVC).
* Sistem de operare Windows (necesar pentru biblioteca `conio.h` și apelul `system("cls")`).

### Instrucțiuni de Compilare
1. Salvați codul sursă în fișierul `main.cpp`.
2. Deschideți un terminal și navigați către folderul respectiv.
3. Compilați proiectul:
   ```bash
   g++ main.cpp -o tictactoe
   ```
4. Lansati jocul
   ```bash
   tictactoe.exe
   ```
