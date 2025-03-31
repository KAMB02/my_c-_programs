#include <iostream>

using namespace std;


void tableau_puissane_2(int n)
{
    int i;
    int* tableau= new int[n];
    for(i=0;i<=n;i++)
    {
        tableau[i]=pow(2,i);
        cout<<tableau[i]<<" ";
    }
}
int puiss_2(int n)
{
    if (n==0)
        return 1;
    return 2*puiss_2(n-1);
}

int main()
{
    in
    essaie=n;
    while(essaie>1){
        expo+=1;
        essaie/=2;
    }

    //Calculer la valeur p de la plus grande puissance de 2 inférieure ou égale à un entier n > 0 donné
    //cout<<puiss_2(expo)<<"<="<<n<<"<="<<puiss_2(expo+1) <<endl;


    //le reste  r = n − 2^expo
    //cout<<"r = "<<n-puiss_2(expo)<<endl;


    //tableau_puissane_2(n);
    return 0;
}
