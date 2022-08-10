//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"", 		"./scripts/packages.sh", 	3600, 			0}, */

	/* {"", 		"./scripts/temp.sh", 	2, 			0}, */

	{"", 		"network.sh", 	5, 			0},

	/* {"", 		"./scripts/memory.sh", 	5, 			0}, */

	{"", 		"volume.sh", 	0, 			10},

	{"", 		"battery.sh", 	10, 			0},

	{"", 		"time.sh", 	30, 			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
