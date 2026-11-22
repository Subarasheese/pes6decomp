/* compiler: ee-gcc-2.96 */
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
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/fvwrite.c). */

typedef unsigned int size_t;

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
    int (*_read)(void *cookie, char *buf, int n);
    int (*_write)(void *cookie, const char *buf, int n);
    long (*_seek)(void *cookie, long offset, int whence);
    int (*_close)(void *cookie);
    struct __sbuf _ub;
    unsigned char *_up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    int _offset;
    struct _reent *_data;
} FILE;

struct __siov {
    void *iov_base;
    size_t iov_len;
};

struct __suio {
    struct __siov *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};

#define __SLBF 0x0001
#define __SNBF 0x0002
#define __SWR 0x0008
#define __SERR 0x0040
#define __SSTR 0x0200

#define BUFSIZ 1024
#define EOF (-1)

#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define cantwrite(fp) ((((fp)->_flags & __SWR) == 0 || (fp)->_bf._base == 0) && func_001B2898(fp))

#define GETIOV(extra_work) while (len == 0) { extra_work; p = iov->iov_base; len = iov->iov_len; iov++; }

#define COPY(n) func_001AE6D4(fp->_p, p, (n))

extern int func_001B2898(FILE *fp);
extern int func_001B29E0(FILE *fp);
extern void *func_001AE6D4(void *dst, const void *src, size_t n);
extern void *func_001B3A0C(const void *s, int c, size_t n);

int func_001B3320(FILE *fp, struct __suio *uio)
{
    register size_t len;
    register char *p;
    register struct __siov *iov;
    register int w, s;
    char *nl;
    int nlknown, nldist;

    if ((len = uio->uio_resid) == 0) {
        return 0;
    }

    if (cantwrite(fp)) {
        return EOF;
    }

    iov = uio->uio_iov;
    len = 0;
    if (fp->_flags & __SNBF) {
        do {
            GETIOV(;);
            w = (*fp->_write)(fp->_cookie, p, MIN(len, BUFSIZ));
            if (w <= 0) {
                goto err;
            }
            p += w;
            len -= w;
        } while ((uio->uio_resid -= w) != 0);
    } else if ((fp->_flags & __SLBF) == 0) {
        do {
            GETIOV(;);
            w = fp->_w;
            if (fp->_flags & __SSTR) {
                if (len < w) {
                    w = len;
                }
                COPY(w);
                fp->_w -= w;
                fp->_p += w;
                w = len;
            } else if (fp->_p > fp->_bf._base && len > w) {
                COPY(w);
                fp->_p += w;
                if (func_001B29E0(fp)) {
                    goto err;
                }
            } else if (len >= (w = fp->_bf._size)) {
                w = (*fp->_write)(fp->_cookie, p, w);
                if (w <= 0) {
                    goto err;
                }
            } else {
                w = len;
                COPY(w);
                fp->_w -= w;
                fp->_p += w;
            }
            p += w;
            len -= w;
        } while ((uio->uio_resid -= w) != 0);
    } else {
        nlknown = 0;
        do {
            GETIOV(nlknown = 0);
            if (!nlknown) {
                nl = func_001B3A0C((void *)p, '\n', len);
                nldist = nl ? nl + 1 - p : len + 1;
                nlknown = 1;
            }
            s = MIN(len, nldist);
            w = fp->_w + fp->_bf._size;
            if (fp->_p > fp->_bf._base && s > w) {
                COPY(w);
                fp->_p += w;
                if (func_001B29E0(fp)) {
                    goto err;
                }
            } else if (s >= (w = fp->_bf._size)) {
                w = (*fp->_write)(fp->_cookie, p, w);
                if (w <= 0) {
                    goto err;
                }
            } else {
                w = s;
                COPY(w);
                fp->_w -= w;
                fp->_p += w;
            }
            if ((nldist -= w) == 0) {
                if (func_001B29E0(fp)) {
                    goto err;
                }
                nlknown = 0;
            }
            p += w;
            len -= w;
        } while ((uio->uio_resid -= w) != 0);
    }
    return 0;

err:
    fp->_flags |= __SERR;
    return EOF;
}
