#include "Karen.hpp"

int main( void )
{
	Karen SweetKaren;

	SweetKaren.complain("DEBUG");
	SweetKaren.complain("INFO");
	SweetKaren.complain("WARNING");
	SweetKaren.complain("ERROR");
	SweetKaren.complain("error");
	SweetKaren.complain("");

	return (0);
}
