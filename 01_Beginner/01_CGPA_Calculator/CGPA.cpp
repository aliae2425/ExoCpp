#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

class Matiere {
    private:
        string nom;
        int coefficients;
        list<float> notes;
    public:
        Matiere(string nom, int credits) : nom(nom), coefficients(credits) {}

        void ajouterNote(float note) {
            notes.push_back(note);
        }

        float calculerMoyenne() const {
            if (notes.empty()) return 0.0;
            float somme = 0.0;
            for (float note : notes) {
                somme += note;
            }
            return somme / notes.size();
        }

        int getCoef() const {
            return coefficients;
        }

        string getNom() const {
            return nom;
        }
};

class Bulletin {
    private:
        list<Matiere> matieres;
    public:
        void ajouterMatiere(const Matiere& matiere) {
            matieres.push_back(matiere);
        }

        float calculerCGPA() const {
            float sommePonderee = 0.0;
            int sommeCoefficients = 0;
            for (const Matiere& matiere : matieres) {
                float moyenne = matiere.calculerMoyenne();
                int coef = matiere.getCoef();
                sommePonderee += moyenne * coef;
                sommeCoefficients += coef;
            }
            return (sommeCoefficients == 0) ? 0.0 : (sommePonderee / sommeCoefficients);
        }

        void afficherCGPA() const {
            cout << fixed << setprecision(2);
            for (const Matiere& matiere : matieres) {
                cout << setw(20) << matiere.getNom() << " : ";
                cout<< matiere.calculerMoyenne() << ", Coef: " << matiere.getCoef() << endl;
            }
            cout << setw(20) << "Moyenne generale : "<< calculerCGPA() << endl;
        }
};

int main() {
    Bulletin bulletin;

    Matiere math("Mathematiques", 4);
    math.ajouterNote(15.0);
    math.ajouterNote(14.0);
    bulletin.ajouterMatiere(math);

    Matiere physique("Physique", 3);
    physique.ajouterNote(13.0);
    physique.ajouterNote(16.0);
    bulletin.ajouterMatiere(physique);

    Matiere chimie("Chimie", 2);
    chimie.ajouterNote(12.0);
    chimie.ajouterNote(14.0);
    bulletin.ajouterMatiere(chimie);

    bulletin.afficherCGPA();

    return 0;
}