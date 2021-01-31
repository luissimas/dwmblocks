//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"~/scripts/bar/packages.sh", 	3600, 			0},

	{"", 		"~/scripts/bar/temp.sh", 	2, 			0},

	{"", 		"~/scripts/bar/network.sh", 	5, 			0},

//	{"", 		"~/scripts/bar/memory.sh", 	5, 			0},

	{"", 		"~/scripts/bar/volume.sh", 	0, 			10},

	{"", 		"~/scripts/bar/battery.sh", 	10, 			0},

	{"", 		"~/scripts/bar/date.sh", 	60, 			0},

	{"", 		"~/scripts/bar/time.sh", 	30, 			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
