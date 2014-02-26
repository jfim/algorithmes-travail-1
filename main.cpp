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

	printf("\nScore: %d/32\n", score);

	return 0;
}
