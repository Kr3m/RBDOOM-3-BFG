/* jconfig.wat --- jconfig.h for Watcom C/C++ on MS-DOS or OS/2. */
/* see jconfig.doc for explanations */

#define HAVE_PROTOTYPES
#define HAVE_UNSIGNED_CHAR
#define HAVE_UNSIGNED_SHORT
/* #define void char */
/* #define const */
#define CHAR_IS_UNSIGNED
#define HAVE_STDDEF_H
// SRS - don't redefine HAVE_STDLIB_H if already defined
#ifndef HAVE_STDLIB_H
	#define HAVE_STDLIB_H
#endif
#undef NEED_BSD_STRINGS
#undef NEED_SYS_TYPES_H
#undef NEED_FAR_POINTERS	/* Watcom uses flat 32-bit addressing */
#undef NEED_SHORT_EXTERNAL_NAMES
#undef INCOMPLETE_TYPES_BROKEN

#define JDCT_DEFAULT  JDCT_FLOAT
#define JDCT_FASTEST  JDCT_FLOAT

#ifdef JPEG_INTERNALS

	#undef RIGHT_SHIFT_IS_UNSIGNED

#endif /* JPEG_INTERNALS */

#ifdef JPEG_CJPEG_DJPEG

	#define BMP_SUPPORTED		/* BMP image file format */
	#define GIF_SUPPORTED		/* GIF image file format */
	#define PPM_SUPPORTED		/* PBMPLUS PPM/PGM image file format */
	#undef RLE_SUPPORTED		/* Utah RLE image file format */
	#define TARGA_SUPPORTED		/* Targa image file format */

	#undef TWO_FILE_COMMANDLINE	/* optional */
	#define USE_SETMODE		/* Needed to make one-file style work in Watcom */
	#undef NEED_SIGNAL_CATCHER	/* Define this if you use jmemname.c */
	#undef DONT_USE_B_MODE
	#undef PROGRESS_REPORT		/* optional */

#endif /* JPEG_CJPEG_DJPEG */
