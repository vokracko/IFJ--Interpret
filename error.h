//HLAVICKA PRO MODUL CHYBOVYCH HLASENI

//prototyp funkce
void printError(int errorCode, int returnCode);

// chybove kody -- pro indexy errorMessage
enum errs
{
	ALLOCERROR,
	SOURCECODEERR,
	PARAMSERROR,
	SYNTAXERR,
	
};

// navratove kody programu
enum returns
{
	INTERPRETERROR=99,
	SYNTAXERROR=2,
};

