/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/sprintf.c). */
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
extern struct _reent *_impure_ptr[];
extern int func_001CAD78(FILE *fp, const char *fmt, va_list ap);int _sprintf_r(struct _reent *ptr, char *str, const char *fmt, ...);
int sprintf(char *str, const char *fmt, ...)
{
    int ret;
    va_list ap;
    FILE f;
    f._flags = 0x0008 | 0x0200;
    f._bf._base = f._p = (unsigned char *)str;
    f._bf._size = f._w = 0x7fffffff;
    f._data = (_impure_ptr[0]);
    ((ap) = (va_list)__builtin_next_arg(fmt) - (__builtin_args_info(2) < 8 ? (8 - __builtin_args_info(2)) * 8 : 0));
    ret = func_001CAD78(&f, fmt, ap);
;
    *f._p = 0;
    return ret;
}