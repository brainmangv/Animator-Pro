#ifndef PEEKPOK_H
#define PEEKPOK_H

#include "jimk.h"

/* Function: stuff_words */
extern void stuff_words(UWORD val, UWORD *dst, unsigned int n);

/* Function: copy_words */
extern void copy_words(const UWORD *src, UWORD *dst, unsigned int n);

#define zero_structure(s, size) \
	stuff_words(0, s, ((unsigned int)(size))>>1)

#define zero_words(s, size) \
	stuff_words(0, s, (unsigned int)(size))

#endif
