#include <iostream>
#include <inventaire.hh>

using namespace std; 

/*
======================================== déclaration des structures ========================================
*/ 

int main()
{
    cout << "Hello world" << endl;
    _client monClient; 
    monClient.nom = "Nennouche";
    monClient.prenom = "Mohamed";

    cout << monClient.prenom << monClient.nom << endl;
    return 0;
}