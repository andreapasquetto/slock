static const char *user      = "nobody";  // user for dropping privileges
static const char *group     = "nobody"; // group for dropping privileges
static const int failonclear = 1;         // cleared input = wrong password color
static const int monitortime = 300;         // time in seconds before disabling the monitor

// colors
static const char *colorname[NUMCOLS] = {
	[INIT]   = "#000000", // initial status
	[INPUT]  = "#1976d2", // input
	[FAILED] = "#b71c1c", // error
	[CAPS]   = "#fdd835", // XK_Caps_Lock enabled
};
