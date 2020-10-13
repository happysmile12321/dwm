//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getNetTraf.sh", 	     1,	      16},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getMusic.sh",         0,       11},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getMail.sh",          0,       12},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getCpu.sh",          10,       13},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getMemory.sh",       10,       14},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getDisk.sh",         10,       15},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getVolume.sh",        0,       10},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getBattery.sh",       5,        3},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getWeather.sh",   18000,        5},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getClock.sh",        60,        1},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getMoonPhase.sh", 18000,       17},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getInternet.sh",      5,        4},
	{"", "/home/zhen/Desktop/suckless/dwm/dwmblocks/my.scripts/dwm.getPackages.sh",      0,        8},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
