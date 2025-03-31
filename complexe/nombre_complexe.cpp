#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Complexe {
    private:
        float reel;
        float imaginaire;
    public:
        // Constructeur
        Complexe(float r, float i) : reel(r), imaginaire(i) {}

        void affiche() {
            if(imaginaire < 0){
                cout << reel << " - i" << -imaginaire << endl;
            }
            else
                {cout << reel << " + i" << imaginaire << endl;}
        }

        void affichePolaire(){
            float O;
            O=atan(imaginaire/reel)*57.29578;
            cout << reel*reel + imaginaire*imaginaire<<"( cos("<<O<<" )+i sin("<<O<<") )"<<endl;
        }
        // methode pour obtenir le conjugué d'un nombre complexe
        void conjugue() {
            if(imaginaire < 0){
                cout << reel << " + i" << -imaginaire << endl;
            }
            else
                {cout << reel << " - i" << imaginaire << endl;}
        }
        // methode pour calculer la norme d'un nombre complexe
        float norme() {
            if(imaginaire < 0){
                cout <<"|"<< reel << " - i" << -imaginaire <<"| = "<< (reel*reel + imaginaire*imaginaire);
            }
            else
                {cout <<"|"<< reel << " + i" << imaginaire <<"| = "<< (reel*reel + imaginaire*imaginaire);}
        }


        friend Complexe addition(Complexe A, Complexe B);
        friend Complexe soustraction(Complexe A, Complexe B);
        friend Complexe produit(Complexe A, Complexe B);
        friend Complexe quotient(Complexe A, Complexe B);
        //friend float norme(Complexe A);
        //friend Complexe conjugue(Complexe A);
        ~Complexe(){};
};

// Fonction pour additionner deux nombres complexes
Complexe addition(Complexe A, Complexe B) {
    return Complexe(A.reel + B.reel, A.imaginaire + B.imaginaire);
}

// Fonction pour soustraire deux nombres complexes
Complexe soustraction(Complexe A, Complexe B) {
    return Complexe(A.reel - B.reel, A.imaginaire - B.imaginaire);
}

// Fonction pour multiplier deux nombres complexes
Complexe produit(Complexe A, Complexe B) {
    return Complexe(A.reel * B.reel - A.imaginaire * B.imaginaire,
                    A.reel * B.imaginaire + A.imaginaire * B.reel);
}

// Fonction pour diviser deux nombres complexes
Complexe quotient(Complexe A, Complexe B) {
    float denominateur = B.reel * B.reel + B.imaginaire * B.imaginaire;
    return Complexe((A.reel * B.reel + A.imaginaire * B.imaginaire) / denominateur,
                    (A.imaginaire * B.reel - A.reel * B.imaginaire) / denominateur);
}



int main() {
    int a,b,c,d;

    cout<<"Entrer la valeur de la partie reel imaginaire de A"<<endl;
    cin>>a>>b;

    //cout<<"Entrer la valeur de la partie reel imaginaire de B"<<endl;
    //cin>>c>>d;

    // Création de deux nombres complexes
    Complexe A(a,b);
    //Complexe B(c,d);

    // Appel de la fonction addition
    //Complexe resultat = addition(A, B);

    // Affichage du résultat
    //cout << "Résultat : ";
    //resultat.affiche();
    //resultat.conjugue();
    A.norme();
    return 0;
}
