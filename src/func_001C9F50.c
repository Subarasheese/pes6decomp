/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/vfprintf.c). */
typedef char *va_list;
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
struct _reent {
    int _errno;
    FILE *_stdin;
    FILE *_stdout;
    FILE *_stderr;
    int _inc;
    char _emergency[25];
    int _current_category;
    const char *_current_locale;
    int __sdidinit;
};
struct __siov {
    void *iov_base;
    int iov_len;
};
struct __suio {
    struct __siov *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};
extern int __sfvwrite(FILE *fp, struct __suio *uio);
extern int fflush(FILE *fp);
extern char *_dtoa_r(struct _reent *ptr, double d, int mode, int ndigits, int *decpt, int *sign, char **rve);
extern int _mbtowc_r(struct _reent *r, int *pwc, const char *s, int n, int *state);
extern void *memchr(const void *s, int c, unsigned int n);
int func_001CA080(struct _reent *data, FILE *fp, const char *fmt0, va_list ap);
int func_001CA008(FILE *fp, const char *fmt0, va_list ap);
char *D_001CB6A8(struct _reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length);int func_001C9F08(FILE *fp, struct __suio *uio);
int func_001C9F50(FILE *fp, const char *fmt, va_list ap)
{
    int ret;
    FILE fake;
    unsigned char buf[1024];
    fake._data = fp->_data;
    fake._flags = fp->_flags & ~0x0002;
    fake._file = fp->_file;
    fake._cookie = fp->_cookie;
    fake._write = fp->_write;
    fake._bf._base = fake._p = buf;
    fake._bf._size = fake._w = sizeof(buf);
    fake._lbfsize = 0;
    ret = func_001CA008(&fake, fmt, ap);
    if (ret >= 0 && fflush(&fake)) {
        ret = (-1);
    }
    if (fake._flags & 0x0040) {
        fp->_flags |= 0x0040;
    }
    return ret;
}
int func_001CA008(FILE *fp, const char *fmt0, va_list ap);
int func_001CA080(struct _reent *data, FILE *fp, const char *fmt0, va_list ap);
char *D_001CB6A8(struct _reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length);