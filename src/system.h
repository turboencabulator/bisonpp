#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef MSDOS
#ifndef _MSDOS
#define _MSDOS
#endif
#endif

#if defined(HAVE_STDLIB_H) || defined(_MSDOS)
#include <stdlib.h>
#endif

#if (defined(VMS) || defined(MSDOS)) && !defined(HAVE_STRING_H)
#define HAVE_STRING_H 1
#endif

#ifdef _MSDOS
#include <io.h>

#define strlwr _strlwr
#define strupr _strupr
#endif /* MSDOS */

#if defined(STDC_HEADERS) || defined(HAVE_STRING_H)
#include <string.h>
/* An ANSI string.h and pre-ANSI memory.h might conflict.  */
#if !defined(STDC_HEADERS) && defined(HAVE_MEMORY_H)
#include <memory.h>
#endif /* not STDC_HEADERS and HAVE_MEMORY_H */
#endif /* not STDC_HEADERS and not HAVE_STRING_H */
