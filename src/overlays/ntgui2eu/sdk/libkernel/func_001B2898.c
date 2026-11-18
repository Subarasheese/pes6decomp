/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/wsetup.c). */
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
extern struct _reent *D_005CC508[];
extern void func_001B2D08(struct _reent *s);
extern void func_001B2EB8(struct _reent *ptr, void *p);
extern void func_001B3880(FILE *fp);
int func_001B2898(FILE *fp)
{
    do { if ((fp)->_data == 0) (fp)->_data = (D_005CC508[0]); if (!(fp)->_data->__sdidinit) func_001B2D08((fp)->_data); } while (0);
    if ((fp->_flags & 0x0008) == 0) {
        if ((fp->_flags & 0x0010) == 0) {
            return (-1);
        }
        if (fp->_flags & 0x0004) {
            if (((fp)->_ub._base != 0)) {
                { if ((fp)->_ub._base != (fp)->_ubuf) func_001B2EB8((fp)->_data, (fp)->_ub._base); (fp)->_ub._base = 0; };
            }
            fp->_flags &= ~(0x0004 | 0x0020);
            fp->_r = 0;
            fp->_p = fp->_bf._base;
        }
        fp->_flags |= 0x0008;
    }
    if (fp->_bf._base == 0) {
        func_001B3880(fp);
    }
    if (fp->_flags & 0x0001) {
        fp->_w = 0;
        fp->_lbfsize = -fp->_bf._size;
    } else {
        fp->_w = fp->_flags & 0x0002 ? 0 : fp->_bf._size;
    }
    return 0;
}
