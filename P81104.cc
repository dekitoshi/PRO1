#include <iostream>
using namespace std;

struct Alumne {
    string nom;                 // Nom de l’alumne
    int dni;                    // DNI de l’alumne
    vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
    };

struct Assignatura {
    string nom;                 // Nom de l’assignatura
    double nota;                // Entre 0 i 10, -1 indica NP
    };

double nota(const vector<Alumne>& alums, int dni, string nom);

double mitjana(const vector<Assignatura>& ass);

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {

}

int main() {

}