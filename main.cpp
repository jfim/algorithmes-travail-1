#include "travail1.hh"

int score = 0;

void evalueQuestion(int numeroQuestion, bool reponseCorrecte) {
	char buffer[64];
	sprintf(buffer, "Question %02d", numeroQuestion);
	afficheSuccesEchec(buffer, reponseCorrecte);
	
	if(reponseCorrecte)
		score++;
}

int main(int argc, char** argv) {
	afficheParametre("Travail 1");
	afficheParametre("");

	// Procedures, fonctions et parametres
	evalueQuestion(
		4,
		additionne(1, 1) == 2 &&
		additionne(25, 5) == 30 &&
		additionne(-5, 5) == 0
	);

	evalueQuestion(
		5,
		maximum(0, 1) == 1 &&
		maximum(5, 3) == 5 &&
		maximum(-2, -8) == -2
	);

	// Tableaux
	int tableauA[] = { 1, 2, 3 };
	int tableauB[] = { 1, 2, 3 };
	int tableauC[] = { 1, 2, 4 };
	int tableauD[] = { 2, 2, 4 };
	int tableauE[] = { 5, 2, 4 };

	evalueQuestion(
		6,
		compareTableaux(tableauA, 3, tableauB, 3) &&
		!compareTableaux(tableauB, 3, tableauC, 3)
	);

	evalueQuestion(
		7,
		maximumTableau(tableauA, 3) == 3 &&
		maximumTableau(tableauD, 3) == 4 &&
		maximumTableau(tableauE, 3) == 5
	);

	evalueQuestion(
		8,
		sommeTableau(tableauA, 3) == 6 &&
		sommeTableau(tableauD, 3) == 8 &&
		sommeTableau(tableauE, 3) == 11
	);

	evalueQuestion(
		9,
		tableauCroissant(tableauA, 3) &&
		tableauCroissant(tableauC, 3) &&
		tableauCroissant(tableauD, 3) &&
		!tableauCroissant(tableauE, 3)
	);

	evalueQuestion(
		10,
		!tableauContientChiffresIdentiquesAdjacents(tableauA, 3) &&
		tableauContientChiffresIdentiquesAdjacents(tableauD, 3) &&
		!tableauContientChiffresIdentiquesAdjacents(tableauE, 3)
	);

	inverseTableau(tableauE, 3);
	evalueQuestion(
		11,
		tableauEntiersTemporaire[0] == 4 &&
		tableauEntiersTemporaire[1] == 2 &&
		tableauEntiersTemporaire[2] == 5
	);

	frequenceTableau(tableauD, 3);
	evalueQuestion(
		12,
		frequences[0] == 0 &&
		frequences[1] == 0 &&
		frequences[2] == 2 &&
		frequences[3] == 0 &&
		frequences[4] == 1 &&
		frequences[5] == 0
	);

	frequenceDeuxTableaux(tableauD, 3);
	evalueQuestion(
		13,
		frequences[0] == 2 &&
		frequences[1] == 0 &&
		valeursEntieres[0] == 2 &&
		valeursEntieres[1] == 4
	);

	evalueQuestion(
		14,
		!tableauContientChiffresDupliques(tableauA, 3) &&
		!tableauContientChiffresDupliques(tableauC, 3) &&
		tableauContientChiffresDupliques(tableauD, 3) &&
		!tableauContientChiffresDupliques(tableauE, 3)
	);

	evalueQuestion(
		15,
		tableauContientChiffre(tableauE, 3, 2) &&
		!tableauContientChiffre(tableauE, 3, 3) &&
		tableauContientChiffre(tableauE, 3, 4) &&
		tableauContientChiffre(tableauE, 3, 5)
	);

	evalueQuestion(
		16,
		!tableauContientDouble(tableauA, 3) &&
		tableauContientDouble(tableauC, 3) &&
		tableauContientDouble(tableauD, 3) &&
		tableauContientDouble(tableauE, 3)
	);

	char* chaineA = "Bonjour";
	char* chaineB = "Bonjour le monde";
	char* chaineC = "kayak";
	char* chaineD = "lolol";
	char* chaineE = "Bonjour";

	evalueQuestion(
		17,
		longueurChaine(chaineA) == 7 &&
		longueurChaine(chaineB) == 16 &&
		longueurChaine(chaineC) == 5 &&
		longueurChaine(chaineD) == 5
	);

	evalueQuestion(
		18,
		!chainesSontIdentiques(chaineA, chaineB) &&
		chainesSontIdentiques(chaineA, chaineE)
	);

	evalueQuestion(
		19,
		frequenceCaractere(chaineC, 'k') == 2 &&
		frequenceCaractere(chaineC, 'a') == 2 &&
		frequenceCaractere(chaineC, 'y') == 1 &&
		frequenceCaractere(chaineC, 'z') == 0
	);

	evalueQuestion(
		20,
		nombreDeMots(chaineA) == 1 &&
		nombreDeMots(chaineB) == 3 &&
		nombreDeMots(chaineC) == 1
	);

	evalueQuestion(
		21,
		!contientCaractere(chaineA, 'a') &&
		!contientCaractere(chaineA, 'b') &&
		contientCaractere(chaineA, 'o') &&
		contientCaractere(chaineA, 'u')
	);

	evalueQuestion(
		22,
		indexAlphabetCaractere('a') == 0 &&
		indexAlphabetCaractere('A') == 0 &&
		indexAlphabetCaractere('z') == 25 &&
		indexAlphabetCaractere('Z') == 25 &&
		indexAlphabetCaractere('c') == 2
	);

	printf("\nScore: %d/32\n", score);

	return 0;
}
