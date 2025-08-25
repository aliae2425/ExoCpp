#include <iostream>
#include <iomanip>
#include <random>
#include <string>

using namespace std;

enum Choix {Pierre, papier, Ciseaux, Invalide};

Choix obtenirChoixUtilisateur() {
    string input;
    cout << "Entrez votre choix (1, pierre, 2, papier, 3 ,ciseaux) ou 'q' pour quitter: ";
    cin >> input;

    if (input == "pierre" || input == "1") return Pierre;
    if (input == "papier" || input == "2") return papier;
    if (input == "ciseaux" || input == "3") return Ciseaux;
    if (input == "q") exit(0);
    return Invalide;
}

Choix obtenirChoixOrdinateur() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 2);
    return static_cast<Choix>(dis(gen));
}

string choixToString(Choix choix) {
    switch (choix) {
        case Pierre: return "Pierre";
        case papier: return "Papier";
        case Ciseaux: return "Ciseaux";
        default: return "Invalide";
    }
}

void determinerGagnant(Choix utilisateur, Choix ordinateur) {
    if (utilisateur == ordinateur) {
        cout << "Egalite! Vous avez tous les deux choisi " << choixToString(utilisateur) << ".\n";
    } else if ((utilisateur == Pierre && ordinateur == Ciseaux) ||
               (utilisateur == papier && ordinateur == Pierre) ||
               (utilisateur == Ciseaux && ordinateur == papier)) {
        cout << "Vous gagnez! " << choixToString(utilisateur) << " bat " << choixToString(ordinateur) << ".\n";
    } else {
        cout << "Vous perdez! " << choixToString(ordinateur) << " bat " << choixToString(utilisateur) << ".\n";
    }
}

int main() {
    cout << "Bienvenue dans le jeu Pierre-Papier-Ciseaux!\n";
    while (true) {
        Choix utilisateur = obtenirChoixUtilisateur();
        if (utilisateur == Invalide) {
            cout << "Choix invalide. Veuillez reessayer.\n";
            continue;
        }
        Choix ordinateur = obtenirChoixOrdinateur();
        cout << "L'ordinateur a choisi: " << choixToString(ordinateur) << "\n";
        determinerGagnant(utilisateur, ordinateur);
    }
    return 0;
}