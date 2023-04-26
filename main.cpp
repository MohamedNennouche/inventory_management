#include <iostream>

using namespace std; 

/*
======================================== déclaration des types enumérations ========================================
*/ 
enum categorie_vehicule{ 
    utilitaire,
    camion,
    berline,
    quatre_quatre,
    suv,
    coupe,
    bus
};

enum classe_vehicule{
    cla,
    classe_a,
    classe_b,
    classe_c,
    classe_clk,
    classe_cls,
    classe_e,
    classe_g,
    classe_glk,
    classe_s,
    classe_t,
    classe_v,
    eqa,
    eqb,
    eqe,
    eqs,
    eqt,
    eqv,
    gla,
    glb,
    glc,
    gle,
    gls,
    sl,
    slc,
    slk,
    slr,
    sls,
    sprinter,
    vito,
    viano
};

enum type_piece{
    mecanique,
    tolerie,
    garniture,
    consommable,
    accessoire
};

/*
======================================== déclaration des structures ========================================
*/ 
struct _vehicule{
    const char *modele; // numéro unique
    classe_vehicule *classe; 
    int annee; // peut être remplacer avec un char
    categorie_vehicule type_vehicule;
};
struct _client{
    //const int reference_client;
    const char *nom;
    const char *prenom;
    _vehicule vehicule_client;
    const char *matricule; 
    const char *numero_chassis; // numéro unique
};

struct _piece{
    const char *reference;
    const char *denomination; // nom de la pièce
    float prix_achat; 
    float prix_vente;
    float marge;
    type_piece type;
    _vehicule vehicule_compatible;
};

int main()
{
    cout << "Hello world" << endl;
    _client monClient; 
    monClient.nom = "Nennouche";
    monClient.prenom = "Mohamed";

    cout << monClient.prenom << monClient.nom << endl;
    return 0;
}