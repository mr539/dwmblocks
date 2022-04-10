//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "/home/mr/bin/statusbar/sb-weather",	                                               300,	0},
    {"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	                       30,	0},
    {"", "/home/mr/bin/statusbar/sb-diskspace",                                                0,       0},
    {"", "/home/mr/bin/statusbar/sb-nw_connections",                                           5,       0},
    {"", "/home/mr/bin/statusbar/sb-battery",					               5,	0},
    {"", "date '+%Y %b %d (%a) %R:%S'",					                       1,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
