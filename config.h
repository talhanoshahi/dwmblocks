//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb_used_memory",	1,	14},
	{"",	"sb_nettraf",	1,	16},
	{"",	"sb_volume",	0,	10},
	{"",	"sb_internet",	5,	4},
	{"",	"sb_battery",	5,	3},
	{"",	"sb_clock",	60,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
