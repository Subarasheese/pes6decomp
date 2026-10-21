/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/makebuf.c). */
typedef unsigned int size_t;
struct __sbuf {
    unsigned char *_base;
    int _size;
};
struct _reent;
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
    void (*__cleanup)(struct _reent *);
};
struct stat {
    short st_dev;
    short st_ino;
    unsigned int st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    short st_rdev;
    long st_size;
    long st_atime;
    long st_spare1;
    long st_mtime;
    long st_spare2;
    long st_ctime;
    long st_spare3;
    long st_blksize;
    long st_blocks;
    long st_spare4[2];
};
extern int func_001C2E40(struct _reent *ptr, int fd, struct stat *st);
extern void *_malloc_r(struct _reent *ptr, size_t size);
extern int func_00105B10(int fd);
extern long __sseek(void *cookie, long offset, int whence);
extern void func_001C20C8(struct _reent *ptr);
void __smakebuf(FILE *fp)
{
    size_t size, couldbetty;
    void *p;
    struct stat st;
    if (fp->_flags & 0x0002) {
        fp->_bf._base = fp->_p = fp->_nbuf;
        fp->_bf._size = 1;
        return;
    }
    if (fp->_file < 0 || func_001C2E40(fp->_data, fp->_file, &st) < 0) {
        couldbetty = 0;
        size = 1024;
        fp->_flags |= 0x0800;
    } else {
        couldbetty = (st.st_mode & 0170000) == 0020000;
        size = 1024;
        if ((st.st_mode & 0170000) == 0100000 && fp->_seek == __sseek) {
            fp->_flags |= 0x0400;
            fp->_blksize = 1024;
        } else {
            fp->_flags |= 0x0800;
        }
    }
    if ((p = _malloc_r(fp->_data, size)) == 0) {
        fp->_flags |= 0x0002;
        fp->_bf._base = fp->_p = fp->_nbuf;
        fp->_bf._size = 1;
    } else {
        fp->_data->__cleanup = func_001C20C8;
        fp->_flags |= 0x0080;
        fp->_bf._base = fp->_p = p;
        fp->_bf._size = size;
        if (couldbetty && func_00105B10(fp->_file)) {
            fp->_flags |= 0x0001;
        }
    }
}