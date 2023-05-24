//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "sb-internet", 5,  4},
  /* {"",  "sb-nettraf",  1,  16}, */ 
  {"",  "sb-lang",  1, 1},
  {"",  "sb-volume", 1,  10},
  {"",  "sb-date",  60*60, 1},
  {"",  "sb-clock",  60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
