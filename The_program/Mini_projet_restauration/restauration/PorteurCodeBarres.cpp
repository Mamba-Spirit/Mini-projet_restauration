#include "PorteurCodeBarres.h"

PorteurCodeBarres::PorteurCodeBarres()
{
    EntreeLue=wxT("");
    Code=0;
    Nom=wxT("");
    Prenom=wxT("");
    Classe=wxT("");
    Regime=wxT("");
    Valide=false;
    Fin=false;
    Connu=false;
    Passages_Multiples=false;
    AutoriseAManger=false;
    Compte=0;
}

PorteurCodeBarres::~PorteurCodeBarres()
{
}

void PorteurCodeBarres::SetEntreeLue(wxString chaine)
{
    EntreeLue=chaine;
}

void PorteurCodeBarres::SetNom (wxString chaine)
{
    Nom=chaine;
}
void PorteurCodeBarres::SetPrenom(wxString chaine)
{
    Prenom=chaine;
}
void PorteurCodeBarres::SetClasse(wxString chaine)
{
    Classe=chaine;
}
void PorteurCodeBarres::SetRegime(wxString chaine)
{
    Regime=chaine;
}

void PorteurCodeBarres::SetCompte (int valeur )
{
    Compte=valeur;
}

void PorteurCodeBarres::SetNomSection(wxString chaine)
{
    NomSection=chaine;
}

void PorteurCodeBarres::SetScolaire(bool valeur)
{
    Scolaire=valeur;
}

void PorteurCodeBarres::SetValide(bool etat)
{
    Valide=etat;
}

void PorteurCodeBarres::SetCode(long code)
{
    Code=code;
}

void PorteurCodeBarres::SetPassagesMultiples(bool etat)
{
    Passages_Multiples=etat;
}

long PorteurCodeBarres::GetCode()
{
    return Code;
}

bool PorteurCodeBarres::EstAutoriseAManger()
{
    return AutoriseAManger;
}

bool PorteurCodeBarres::EstValide()
{
    return Valide;
}

void PorteurCodeBarres::SetAutoriseAManger(bool etat)
{
    AutoriseAManger=etat;
}

void PorteurCodeBarres::SetFin(bool etat)
{
    Fin=etat;
}

void PorteurCodeBarres::SetConnu(bool etat)
{
    Connu=etat;
}

bool PorteurCodeBarres::EstConnu()
{
    return Connu;
}

int PorteurCodeBarres::GetCompte ()
{
    return Compte;
}

wxString PorteurCodeBarres::GetNomSection()
{
    return NomSection;
}

wxString PorteurCodeBarres::GetNom()
{
    return Nom;
}

wxString PorteurCodeBarres::GetPrenom()
{
    return Prenom;
}

wxString PorteurCodeBarres::GetRegime()
{
    return Regime;
}

wxString PorteurCodeBarres::GetClasse()
{
    return Classe;
}

wxString PorteurCodeBarres::GetEntreeLue( )
{
    return EntreeLue;
}

bool PorteurCodeBarres::EstScolaire()
{
    return Scolaire;
}

bool PorteurCodeBarres::FinDemandee()
{
    return Fin;
}

bool PorteurCodeBarres::PassagesMultiples()
{
    return Passages_Multiples;
}