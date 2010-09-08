#ifndef _DREADCODE_
#define _DREADCODE_

#include <ncurses.h>

struct core_screen {
	unsigned char ** cells; /* X * Y , terminal size */
};

struct core_code_struct {
	unsigned int code_color;

	unsigned int code_size;
	unsigned int code_addr;
	
	unsigned char *code; /* pseudo-compiled/compressed code */
};

#endif /* _DREADCODE_ */
