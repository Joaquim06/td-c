#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define carre(x) x * x

int main() {
	setlocale(LC_ALL, "fr-FR");

	// Déclarer une variable « Nb » entière et égale à 5 et afficher la valeur de carre(Nb). 
	int Nb = 3;
	printf("\nla valeur du carré de %d est égale à %d", Nb, carre(Nb));
	
	// Afficher en suite le carre(Nb + 1), quel est le résultat obtenu ? 
	printf("\nla valeur du carré de %d est égale à %d", Nb+1, carre(Nb+1));
	// D’où vient le problème à votre avis ? 
	// Proposer une modification de la macro pour qu’elle fonctionne.

#ifdef carre
#undef carre
#define carre(x) (x) * (x)
#endif

	printf("\nla valeur du carré de %d est égale à %d", Nb+1, carre(Nb + 1));

	printf("\n");
	system("pause");
	return(EXIT_SUCCESS);
}
