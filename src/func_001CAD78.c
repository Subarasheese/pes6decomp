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
extern struct _reent *_impure_ptr[];
extern int __sfvwrite(FILE *fp, struct __suio *uio);
extern void __sinit(struct _reent *ptr);
extern char *_dtoa_r(struct _reent *ptr, double d, int mode, int ndigits, int *decpt, int *sign, char **rve);
extern int _mbtowc_r(struct _reent *r, int *pwc, const char *s, int n, int *state);
extern void *memchr(const void *s, int c, unsigned int n);
int func_001CADF0(struct _reent *data, FILE *fp, const char *fmt0, va_list ap);
int func_001CAD78(FILE *fp, const char *fmt0, va_list ap);
char *D_001CC418(struct _reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length);int func_001CAC78(FILE *fp, struct __suio *uio);
int func_001CACC0(FILE *fp, const char *fmt, va_list ap);
int func_001CAD78(FILE *fp, const char *fmt0, va_list ap)
{
    do { if ((fp)->_data == 0) (fp)->_data = (_impure_ptr[0]); } while (0);
    do { if (!(fp->_data)->__sdidinit) __sinit(fp->_data); } while (0);
    return func_001CADF0(fp->_data, fp, fmt0, ap);
}
int func_001CADF0(struct _reent *data, FILE *fp, const char *fmt0, va_list ap);
char *D_001CC418(struct _reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length);