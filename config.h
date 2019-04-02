/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "DroidSansMono Nerd Font:size=20"
};
static const char *prompt      = "my dmenu";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#000000" },
	[SchemeSel] = { "#ffffff", "#0000ff" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeFront] = {"#000000", "#0000ff" },
	[SchemeNerd] = {"#0000ff", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 11;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
