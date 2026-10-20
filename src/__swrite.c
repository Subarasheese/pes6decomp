/* compiler: ee-gcc-2.96 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/stdio.c). */
/*
 * Unit: sdk/newlib/libc/stdio/stdio
 *
 * Functions:
 *   0x00278440 __sread
 *   0x002784a8 __swrite
 *   0x00278528 __sseek
 *   0x00278590 __sclose
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

#define __SAPP 0x0100
#define __SOFF 0x1000

#define SEEK_END 2

extern long _read_r(struct _reent *ptr, int fd, void *buf, int cnt);
extern long _lseek_r(struct _reent *ptr, int fd, long pos, int whence);
extern long _write_r(struct _reent *ptr, int fd, const void *buf, int cnt);
extern int _close_r(struct _reent *ptr, int fd);int __sread(void *cookie, char *buf, int n);


int __swrite(void *cookie, const char *buf, int n)
{
    FILE *fp = (FILE *)cookie;

    if (fp->_flags & __SAPP)
        (void)_lseek_r(fp->_data, fp->_file, 0, SEEK_END);
    fp->_flags &= ~__SOFF; /* in case FAPPEND mode is set */
    return _write_r(fp->_data, fp->_file, buf, n);
}
long __sseek(void *cookie, long offset, int whence);
int __sclose(void *cookie);
