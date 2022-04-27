static const Block blocks[] = {
    {"", "$HOME/Singularis/local/statusbar/sb-music", 1, 2},
    {"", "$HOME/Singularis/local/statusbar/sb-volume", 1, 3},
    {"", "$HOME/Singularis/local/statusbar/sb-mailbox", 10, 4},
    {"", "$HOME/Singularis/local/statusbar/sb-current-course", 5, 5},
    {"", "$HOME/Singularis/local/statusbar/sb-clock", 60, 6},
    {"", "$HOME/Singularis/local/statusbar/sb-prayer", 60, 7},
    {"", "$HOME/Singularis/local/statusbar/sb-battery", 10, 8},
    {"", "$HOME/Singularis/local/statusbar/sb-internet", 10, 9},
    {"", "$HOME/Singularis/local/statusbar/sb-blurtoggle", 0, 10},
};

// Sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char *delim = " | ";
