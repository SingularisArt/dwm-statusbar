static const Block blocks[] = {
	/*Icon*/	/*Command*/																												/*Update Interval*/	  /*Update Signal*/
	{ "",			"$HOME/Singularis/local/scripts/statusbar/sb-disk",							  600,										1   }, 
	{ "",			"$HOME/Singularis/local/scripts/statusbar/sb-memory",						  60,										  2   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-music",              1,										  3   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-volume",             1,										  4   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-mailbox",            10,									    5   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-current-course",     5, 										  6   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-clock",              60,										  7   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-prayer",             60,										  8   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-battery",            10,									    9   }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-internet",           10,									    10  }, 
  { "",			"$HOME/Singularis/local/scripts/statusbar/sb-blurtoggle",         1, 										  11  }, 
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
