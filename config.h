static const Block blocks[] = {
	/*Icon*/	/*Command*/																												/*Update Interval*/	  /*Update Signal*/
	// { "",			"$HOME/Singularis/local/statusbar/sb-forecast",					  60,										  1   }, 
	{ "",			"$HOME/Singularis/local/statusbar/sb-disk",							  60,										  3   }, 
	{ "",			"$HOME/Singularis/local/statusbar/sb-memory",						  60,										  6   }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-music",              1,										  7   }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-volume",             1,										  8   }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-mailbox",            10,									    9   }, 
  // { "",			"$HOME/Singularis/local/statusbar/sb-news",               60,									    10  },
  { "",			"$HOME/Singularis/local/statusbar/sb-current-course",     5, 										  11  }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-clock",              60,										  12  }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-prayer",             60,										  13  }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-battery",            10,									    14  }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-internet",           10,									    15  }, 
  { "",			"$HOME/Singularis/local/statusbar/sb-blurtoggle",         0, 										  16  }, 
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
