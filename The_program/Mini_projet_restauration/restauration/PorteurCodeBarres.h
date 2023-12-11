#ifndef PORTEURCODEBARRES_H
#define PORTEURCODEBARRES_H

#include <wx/wx.h>

class PorteurCodeBarres
{
private:
    wxString EntreeLue;
    long Code;
    wxString Nom;
    wxString Prenom;
    wxString Classe;
    wxString Regime;
    wxString NomSection;
    int Compte;
    bool Scolaire;
    bool Fin;
    bool Connu;
    bool Valide;
    bool Passages_Multiples;
    bool AutoriseAManger;
    
    

public:
    PorteurCodeBarres();
    ~PorteurCodeBarres();
    void AnalyseCode();
    long GetCode ( );
    wxString GetEntreeLue( );
    wxString GetNom ( );
    wxString GetPrenom ( );
    wxString GetClasse ( );
    wxString GetRegime ( );
    int GetCompte ();
    wxString GetNomSection();
    bool EstAutoriseAManger();
    bool EstScolaire();
    bool EstValide();
    bool EstConnu();
    bool FinDemandee();
    bool PassagesMultiples();

    void SetEntreeLue(wxString chaine);
    void SetNom (wxString chaine);
    void SetPrenom(wxString chaine);
    void SetClasse(wxString chaine);
    void SetRegime(wxString chaine);
    void SetFin(bool etat);
    void SetAutoriseAManger(bool etat);
    void SetValide(bool etat);
    void SetConnu(bool etat);
    void SetPassagesMultiples(bool etat);
    void SetCode(long code);
    void SetCodeValide(bool valeur);
    void SetCompte (int valeur);
    void SetNomSection(wxString chaine);
    void SetScolaire(bool valeur);
    
    

};

#endif // PORTEURCODEBARRES_H
