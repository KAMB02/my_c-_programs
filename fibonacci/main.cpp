#include <iostream>
#include <math.h>
using namespace std;

int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}


int* tab_fibo(int n)
{
    int* tableau=new int[n+1];
    for(int i=0;i<=n;i++)
        tableau[i]=fibo(i);
    return tableau;
}

void aff_tab_fibo(int* tableau,int taille){

    for(int i=0;i<=taille;i++)
        cout<<tableau[i]<<" ";
    cout<<endl;
}



int main()
{
    int n;

    cout <<"Entrer la valeur de n: ";
    cin>>n;
    int* tableau=tab_fibo(n);
    aff_tab_fibo(tableau,n);
    cout << "fibo("<<n<<")= "<<fibo(n)<< endl;
    delete[] tableau;
    return 0;
}
