#include <stdio.h>

// Variables globales
extern int tableauEntiersTemporaire[100];
extern int frequences[100];
extern int valeursEntieres[100];
extern char valeursCaracteres[100];
extern char chaineCaracteresTemporaire[100];

// Procedures, fonctions et parametres
void afficheParametre(char* parametre);
void afficheParametreConditionnellement(char* parametre, bool doitAfficher);
void afficheSuccesEchec(char* parametre, bool succes);
int additionne(int a, int b);
int maximum(int a, int b);

// Tableaux
bool compareTableaux(int* a, int longueurA, int* b, int longueurB);
int maximumTableau(int* tableau, int longueur);
int sommeTableau(int* tableau, int longueur);
bool tableauCroissant(int* tableau, int longueur);
bool tableauContientChiffresIdentiquesAdjacents(int* tableau, int longueur);
void inverseTableau(int* tableau, int longueur);
void frequenceUnTableau(int* tableau, int longueur);
void frequenceDeuxTableaux(int* tableau, int longueur);
bool tableauContientChiffresDupliques(int* tableau, int longueur);
bool tableauContientChiffre(int* tableau, int longueur, int chiffreRecherche);
bool tableauContientDouble(int* tableau, int longueur);

// Chaines de caracteres
int longueurChaine(char* chaine);
bool chainesSontIdentiques(char* chaineA, char* chaineB);
int frequenceCaractere(char* chaine, char caractere);
int nombreDeMots(char* chaine);
bool contientCaractere(char* chaine, char caractere);
int indexAlphabetCaractere(char caractere);
void frequenceLettres(char* chaine);
void frequenceCaracteres(char* chaine);
char plusFrequent(char* chaine);
int caracteresDistincts(char* chaine);
void chaineSansCaractere(char* chaine, char caractereAOmettre);
bool estPalindrome(char* chaine);

// Structures
struct Point {
	int x;
	int y;
};

struct Vecteur {
	int x;
	int y;
};

Point appliqueVecteur(Point p, Vecteur v);
int distanceManhattan(Point p1, Point p2);
int distanceEuclidienne(Point p1, Point p2);

// Mathematiques
bool cerclesSontSuperposes(Point centreA, int rayonA, Point centreB, int rayonB);
bool estPremier(int nombre);
bool estCarre(int nombre);
bool estImpair(int nombre);
