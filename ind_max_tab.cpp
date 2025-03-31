#include <iostream>

using namespace std;

int main()
{
    int taille,i,maxi,indexe;
    cout<<"Entrrer la taille du tableau :";
    cin>>taille;
    int* tableau = new int[taille];
    for(i=0;i<taille;i++)
    {
        cout<<"Entrer l'element "<<i+1<<" du tableau :";
        cin>>tableau[i];
    }

    maxi=tableau[0];
    for(i=0;i<taille;i++)
    {
        if(maxi<tableau[i])
        {
            maxi=tableau[i];
            indexe=i;
        }
    }

    cout<<"Le maximum du tableau est :"<<maxi<<" premiere position   : "<<indexe+1;
    return 0;
}
