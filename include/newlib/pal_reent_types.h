/* Types adapted from newlib 1.9.0, libc/include/sys/reent.h and libc/include/time.h.
 * See the newlib notices in THIRD_PARTY.md. */
#ifndef NEWLIB_PAL_REENT_TYPES_H
#define NEWLIB_PAL_REENT_TYPES_H

typedef struct __sFILE FILE;

typedef unsigned long __ULong;

typedef long _fpos_t;

typedef void (*_sig_func_ptr)(int);

typedef unsigned int size_t;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

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

struct _atexit {
    struct _atexit *_next;
    int _ind;
    void (*_fns[32])(void);
};

struct __sbuf {
    unsigned char *_base;
    int _size;
};

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
            struct tm _localtime_buf;
            int _gamma_signgam;
            unsigned long long _rand_next;
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

#endif
