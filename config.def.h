/*
#   _____ _____
#  |  _  |   __|  Piotr Serafin
#  |   __|__   |  https://piotrserafin.dev
#  |__|  |_____|  https://github.com/piotrserafin
#
*/

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1; 

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono Medium:size=10:antialias=true:autohint=true"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
	/*     		fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#eeeeee", "#005577" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 32; 

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
