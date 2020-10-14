//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"~/repos/dwm/dwmblocks/blocks/network.sh", 	5, 			0},

	{"", 		"~/repos/dwm/dwmblocks/blocks/memory.sh", 	5, 			0},

	{"", 		"~/repos/dwm/dwmblocks/blocks/volume.sh", 	0, 			10},

	{"", 		"~/repos/dwm/dwmblocks/blocks/date.sh", 	60, 			0},

	{"", 		"~/repos/dwm/dwmblocks/blocks/time.sh", 	60, 			0},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
