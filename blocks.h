//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"~/repos/dwmblocks/blocks/packages.sh", 	3600, 			0},

	{"", 		"~/repos/dwmblocks/blocks/temp.sh", 	2, 			0},

	{"", 		"~/repos/dwmblocks/blocks/network.sh", 	5, 			0},

//	{"", 		"~/repos/dwmblocks/blocks/memory.sh", 	5, 			0},

	{"", 		"~/repos/dwmblocks/blocks/volume.sh", 	0, 			10},

	{"", 		"~/repos/dwmblocks/blocks/battery.sh", 	10, 			0},

	{"", 		"~/repos/dwmblocks/blocks/date.sh", 	60, 			0},

	{"", 		"~/repos/dwmblocks/blocks/time.sh", 	30, 			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
