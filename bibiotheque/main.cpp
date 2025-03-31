#include <iostream>
#include <string>

using namespace std;

class Livre{

    private:
        string titre;
        string auteur;
        bool disponible;
    public:
        //constructeur
        Livre(string titre,string auteur,bool disponible):titre(titre),auteur(auteur),disponible(disponible){}

        //destructeur
        ~Livre();

        void afficherDetails(){
            if (disponible)
                {cout <<" Auteur :"<<auteur<<endl<<"Titre :"<<titre<<endl<<"Disponible : OUI"<<endl;}
            else
            {
                cout <<" Auteur :"<<auteur<<endl<<"Titre :"<<titre<<endl<<"Disponible : Non"<<endl;
            }
        }
        void emprunter(){
            if(disponible)
                cout<< "Livre disponible maintenant"<<endl;
        }
        void retourner(){
            disponible=true;
        }
};

class Bibliotheque{

    private:
        string* catalogue;

    public:
        //constructeur
        Bibliotheque(string* cat):catalogue(cat){}
        void ajouterLivre(string* livre){
            catalogue[strin=livre;
        }


};

int main()
{
    Livre mon_livre("Je suis qui je suis","Kadjo Allouan",true);

    return 0;
}
