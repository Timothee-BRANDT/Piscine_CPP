#include "Harl.hpp"

int main()
{
	Harl raleur;

	raleur.complain("DEBUG");
	raleur.complain("INFO");
	raleur.complain("WARNING");
	raleur.complain("ERROR");
	cout << endl;
	raleur.complain("DEBUG");
	raleur.complain("INFO");
	raleur.complain("WARNING");
	raleur.complain("ERROR");
	return (0);
}
