#ifndef ANSI_TERMINAL_H
#define ANSI_TERMINAL_H

/* ==========================================================================
 * 1. TEXT ATTRIBUTES & STYLES
 * ========================================================================== */
#define ANSI_RESET            "\033[0m"
#define ANSI_BOLD             "\033[1m"
#define ANSI_FAINT            "\033[2m"
#define ANSI_ITALIC           "\033[3m"
#define ANSI_UNDERLINE        "\033[4m"
#define ANSI_BLINK_SLOW       "\033[5m"
#define ANSI_BLINK_FAST       "\033[6m"
#define ANSI_REVERSE          "\033[7m" // Inverts foreground & background
#define ANSI_CONCEAL          "\033[8m" // Invisible/hidden text
#define ANSI_STRIKETHROUGH    "\033[9m"

/* Style Resets (Turn off individual styles without resetting everything) */
#define ANSI_RESET_BOLD_FAINT "\033[22m"
#define ANSI_RESET_ITALIC     "\033[23m"
#define ANSI_RESET_UNDERLINE  "\033[24m"
#define ANSI_RESET_BLINK      "\033[25m"
#define ANSI_RESET_REVERSE    "\033[27m"
#define ANSI_RESET_CONCEAL    "\033[28m"
#define ANSI_RESET_STRIKE     "\033[29m"

/* ==========================================================================
 * 2. STANDARD FOREGROUND COLORS (TEXT)
 * ========================================================================== */
/* Regular (Standard Darker Shades) */
#define ANSI_FG_BLACK         "\033[30m"
#define ANSI_FG_RED           "\033[31m"
#define ANSI_FG_GREEN         "\033[32m"
#define ANSI_FG_YELLOW        "\033[33m"
#define ANSI_FG_BLUE          "\033[34m"
#define ANSI_FG_MAGENTA       "\033[35m"
#define ANSI_FG_CYAN          "\033[36m"
#define ANSI_FG_WHITE         "\033[37m"
#define ANSI_FG_DEFAULT       "\033[39m"

/* Bright / High-Intensity */
#define ANSI_FG_BRIGHT_BLACK   "\033[90m"
#define ANSI_FG_BRIGHT_RED     "\033[91m"
#define ANSI_FG_BRIGHT_GREEN   "\033[92m"
#define ANSI_FG_BRIGHT_YELLOW  "\033[93m"
#define ANSI_FG_BRIGHT_BLUE    "\033[94m"
#define ANSI_FG_BRIGHT_MAGENTA "\033[95m"
#define ANSI_FG_BRIGHT_CYAN    "\033[96m"
#define ANSI_FG_BRIGHT_WHITE   "\033[97m"

/* Bold Standard Colors */
#define ANSI_FG_BOLD_BLACK     "\033[1;30m"
#define ANSI_FG_BOLD_RED       "\033[1;31m"
#define ANSI_FG_BOLD_GREEN     "\033[1;32m"
#define ANSI_FG_BOLD_YELLOW    "\033[1;33m"
#define ANSI_FG_BOLD_BLUE      "\033[1;34m"
#define ANSI_FG_BOLD_MAGENTA   "\033[1;35m"
#define ANSI_FG_BOLD_CYAN      "\033[1;36m"
#define ANSI_FG_BOLD_WHITE     "\033[1;37m"

/* Bold Bright Colors */
#define ANSI_FG_BOLD_BRIGHT_BLACK   "\033[1;90m"
#define ANSI_FG_BOLD_BRIGHT_RED     "\033[1;91m"
#define ANSI_FG_BOLD_BRIGHT_GREEN   "\033[1;92m"
#define ANSI_FG_BOLD_BRIGHT_YELLOW  "\033[1;93m"
#define ANSI_FG_BOLD_BRIGHT_BLUE    "\033[1;94m"
#define ANSI_FG_BOLD_BRIGHT_MAGENTA "\033[1;95m"
#define ANSI_FG_BOLD_BRIGHT_CYAN    "\033[1;96m"
#define ANSI_FG_BOLD_BRIGHT_WHITE   "\033[1;97m"

/* ==========================================================================
 * 3. STANDARD BACKGROUND COLORS
 * ========================================================================== */
/* Regular Backgrounds */
#define ANSI_BG_BLACK         "\033[40m"
#define ANSI_BG_RED           "\033[41m"
#define ANSI_BG_GREEN         "\033[42m"
#define ANSI_BG_YELLOW        "\033[43m"
#define ANSI_BG_BLUE          "\033[44m"
#define ANSI_BG_MAGENTA       "\033[45m"
#define ANSI_BG_CYAN          "\033[46m"
#define ANSI_BG_WHITE         "\033[47m"
#define ANSI_BG_DEFAULT       "\033[49m"

/* Bright Backgrounds */
#define ANSI_BG_BRIGHT_BLACK   "\033[100m"
#define ANSI_BG_BRIGHT_RED     "\033[101m"
#define ANSI_BG_BRIGHT_GREEN   "\033[102m"
#define ANSI_BG_BRIGHT_YELLOW  "\033[103m"
#define ANSI_BG_BRIGHT_BLUE    "\033[104m"
#define ANSI_BG_BRIGHT_MAGENTA "\033[105m"
#define ANSI_BG_BRIGHT_CYAN    "\033[106m"
#define ANSI_BG_BRIGHT_WHITE   "\033[107m"

/* ==========================================================================
 * 4. ADVANCED COLOR PALETTES (256-Color & TrueColor Macros)
 * ========================================================================== */
/* Dynamic 256-Color formatting (Pass ID 0-255) */
#define ANSI_FG_256(id)        "\033[38;5;" #id "m"
#define ANSI_BG_256(id)        "\033[48;5;" #id "m"

/* Dynamic TrueColor / 24-bit RGB formatting (Pass R, G, B values 0-255) */
#define ANSI_FG_RGB(r,g,b)     "\033[38;2;" #r ";" #g ";" #b "m"
#define ANSI_BG_RGB(r,g,b)     "\033[48;2;" #r ";" #g ";" #b "m"

/* ==========================================================================
 * 5. SCREEN & CLEARING CONTROLS
 * ========================================================================== */
#define ANSI_CLEAR_SCREEN      "\033[2J"  // Clears entire viewport
#define ANSI_CLEAR_TO_END      "\033[0J"  // Clears from cursor to screen end
#define ANSI_CLEAR_TO_START     "\033[1J"  // Clears from screen start to cursor
#define ANSI_CLEAR_ALL_SCROLL  "\033[3J"  // Clears viewport and scrollback buffer

#define ANSI_CLEAR_LINE        "\033[2K"  // Clears entire current line
#define ANSI_LINE_TO_END       "\033[0K"  // Clears from cursor to line end
#define ANSI_LINE_TO_START     "\033[1K"  // Clears from line start to cursor

/* ==========================================================================
 * 6. CURSOR NAVIGATION & UTILITIES
 * ========================================================================== */
#define ANSI_CURSOR_HOME       "\033[H"   // Moves cursor to top-left (1,1)
#define ANSI_CURSOR_SAVE       "\033[s"   // Saves current cursor position
#define ANSI_CURSOR_RESTORE    "\033[u"   // Restores saved cursor position
#define ANSI_CURSOR_HIDE       "\033[?25l"// Hides terminal cursor blinking block
#define ANSI_CURSOR_SHOW       "\033[?25h"// Reveals terminal cursor blinking block

/* Directional macros (Use # stringification to pass numbers directly) */
#define ANSI_CURSOR_UP(n)      "\033[" #n "A"
#define ANSI_CURSOR_DOWN(n)    "\033[" #n "B"
#define ANSI_CURSOR_FORWARD(n) "\033[" #n "C"
#define ANSI_CURSOR_BACK(n)    "\033[" #n "D"

/* Explicit XY Coordinate positioning (e.g. ANSI_GOTO_XY(10, 5) ) */
#define ANSI_GOTO_XY(row, col) "\033[" #row ";" #col "H"

#endif // ANSI_TERMINAL_H