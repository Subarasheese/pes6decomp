/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/newlib/getenv_r.c (_findenv_r). See THIRD_PARTY.md. */

typedef unsigned int __ULong;
struct _glue {
    struct _glue *_next;
    int _niobs;
    struct __sFILE *_iobs;
};
struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};
struct __tm {
    int __tm_sec;
    int __tm_min;
    int __tm_hour;
    int __tm_mday;
    int __tm_mon;
    int __tm_year;
    int __tm_wday;
    int __tm_yday;
    int __tm_isdst;
};
struct _atexit {
    struct _atexit *_next;
    int _ind;
    void (*_fns[32])(void);
};
struct __sbuf {
    unsigned char *_base;
    int _size;
};
typedef long _fpos_t;
struct __sFILE {
    unsigned char *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void *_cookie;
    int (*_read)(void *_cookie, char *_buf, int _n);
    int (*_write)(void *_cookie, const char *_buf, int _n);
    _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
    int (*_close)(void *_cookie);
    struct __sbuf _ub;
    unsigned char *_up;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    int _offset;
    struct _reent *_data;
};
struct _rand48 {
    unsigned short _seed[3];
    unsigned short _mult[3];
    unsigned short _add;
};
struct _reent {
    int _errno;
    struct __sFILE *_stdin;
    struct __sFILE *_stdout;
    struct __sFILE *_stderr;
    int _inc;
    char _emergency[25];
    int _current_category;
    const char *_current_locale;
    int __sdidinit;
    void (*__cleanup)(struct _reent *);
    struct _Bigint *_result;
    int _result_k;
    struct _Bigint *_p5s;
    struct _Bigint **_freelist;
    int _cvtlen;
    char *_cvtbuf;
    union {
        struct {
            unsigned int _unused_rand;
            char *_strtok_last;
            char _asctime_buf[26];
            struct __tm _localtime_buf;
            int _gamma_signgam;
            unsigned long long _rand_next;
            struct _rand48 _r48;
        } _reent;
        struct {
            unsigned char *_nextf[30];
            unsigned int _nmalloc[30];
        } _unused;
    } _new;
    struct _atexit *_atexit;
    struct _atexit _atexit0;
    void (**_sig_func)(int);
    struct _glue __sglue;
    struct __sFILE __sf[3];
};
typedef unsigned int size_t;
extern int func_001C83D8(const char *, const char *, size_t);
extern void func_001C1AD8(struct _reent *);
extern void func_001C1AE0(struct _reent *);
extern char ***D_00398720;

char *func_001C34F8(struct _reent *reent_ptr, register const char *name, int *offset) {
    register int len;
    register char **p;
    const char *c;
    func_001C1AD8(reent_ptr);
    if (!(*D_00398720))
        return 0;
    c = name;
    len = 0;
    while ((*c) && ((*c) != '=')) {
        c++;
        len++;
    }

    for (p = *D_00398720; *p; ++p)
        if (!func_001C83D8(*p, name, len))
            if ((*(c = (*p) + len)) == '=') {
                *offset = p - (*D_00398720);
                func_001C1AE0(reent_ptr);
                return (char *)(++c);
            }

    func_001C1AE0(reent_ptr);
    return 0;
}
