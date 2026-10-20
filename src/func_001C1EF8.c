/* compiler: ee-gcc-2.96-nsa-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* newlib 1.9.0 libc/stdio/findfp.c std() (static: fills one FILE of the reent), with the FILE
   layout of newlib's sys/reent.h reduced to the fields it touches. */
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
struct _reent;

struct __sbuf {
    unsigned char *_base;
    int _size;
};

typedef struct __sFILE {
    unsigned char *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void *_cookie;
    int (*_read)(void *, char *, int);
    int (*_write)(void *, const char *, int);
    long (*_seek)(void *, long, int);
    int (*_close)(void *);
    char pad30[0x54 - 0x30];
    struct _reent *_data;
} FILE;

extern int func_001C7A38(void *, char *, int);        /* __sread */
extern int func_001C7AA0(void *, const char *, int);  /* __swrite */
extern long func_001C7B20(void *, long, int);         /* __sseek */
extern int func_001C7B88(void *);                     /* __sclose */

void func_001C1EF8(FILE *ptr, int flags, int file, struct _reent *data)
{
    ptr->_p = 0;
    ptr->_r = 0;
    ptr->_w = 0;
    ptr->_flags = flags;
    ptr->_file = file;
    ptr->_bf._base = 0;
    ptr->_bf._size = 0;
    ptr->_lbfsize = 0;
    ptr->_cookie = ptr;
    ptr->_read = func_001C7A38;
    ptr->_write = func_001C7AA0;
    ptr->_seek = func_001C7B20;
    ptr->_close = func_001C7B88;
    ptr->_data = data;
}
