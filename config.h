
/* appearance */
static char *user       = "nobody";  /* user for privileges */
static char *group      = "nobody";  /* group for privileges */
static int failonclear  = 1;         /* cleared input = wrong password */
static int monitortime  = 300;       /* time before disabling the monitor */
static char *message    = "";        /* default message */
static char *text_color = "#212121"; /* text color */
static char *font_name  = "6x13";    /* text font */

/* colors */
static char *colorname[NUMCOLS] = {
  [INIT]   = "#000000", /* initial status       */
  [INPUT]  = "#1976d2", /* input                */
  [FAILED] = "#b71c1c", /* error                */
  [CAPS]   = "#fdd835", /* XK_Caps_Lock enabled */
};

