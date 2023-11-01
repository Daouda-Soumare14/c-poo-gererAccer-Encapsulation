#include <iostream>
#include <string>
using namespace std;

// creation class
class Personnage
{
    // Tout ce qui suit est public (accessible depuis l'extérieur)
    public: // droits d'acces

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    // on enleve le nombre de degats recu a la vie du personnage

    if(m_vie < 0) // pour eviter d'avoir une vie negative
    {
        m_vie = 0; // on met la vie a 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    // on inflige a la cible les degats que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePossion)
{
    m_vie += quantitePossion;

    if(m_vie > 100) // interdiction de depasser 100 de vie
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant()
{
    return m_vie > 0;
}
 
    // Tout ce qui suit est prive (inaccessible depuis l'extérieur)
    private: // droits d'acces (les attributs sont toujours prive)

    // les attributs
    int m_vie;
    int m_mana;
    string m_nomArme;
    int m_degatsArme;
};

int main()
{
    // utilisation de l'objet
    Personnage david, goliath; // creation de deux objets de type personnage: david et goliath

    goliath.attaquer(david); // goliath attaque david
    david.boirePotionDeVie(20); // david recupere 20 de vie en buvant une possion
    goliath.attaquer(david); // goliath attaque david
    david.attaquer(goliath); // david contre attaque goliath

    goliath.changerArme("Double hache tranchante veneuse de la mort", 40);
    goliath.attaquer(david); // goliath attaque david

    return 0;
}