//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = { 

	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"",	"nettraf",	1,	16},
	{"",	"memory",	10,	14},
	{"",	"cpubars",	10,	18},
	{"",	"clock",	60,	1},
};


//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "   ";
static unsigned int delimLen = 4;
