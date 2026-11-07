/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mprec.c). */
typedef unsigned int __ULong;
typedef int __Long;
struct _Bigint {
    struct _Bigint *_next;
    int _k, _maxwds, _sign, _wds;
    __ULong _x[1];
};
typedef struct _Bigint _Bigint;
struct _reent {
    int _errno;
    void *_stdin, *_stdout, *_stderr;
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
};
extern void *_calloc_r(struct _reent *ptr, unsigned int nmemb, unsigned int size);
_Bigint *_multiply(struct _reent *ptr, _Bigint *a, _Bigint *b);
double _b2d(_Bigint *a, int *e);
_Bigint *_Balloc(struct _reent *ptr, int k);
void _Bfree(struct _reent *ptr, _Bigint *v);
_Bigint *func_001C51B8(struct _reent *ptr, _Bigint *b, int m, int a);
_Bigint *_s2b(struct _reent *ptr, const char *s, int nd0, int nd, __ULong y9)
{
    _Bigint *b;
    int i, k;
    __Long x, y;
    x = (nd + 8) / 9;
    for (k = 0, y = 1; x > y; y <<= 1, k++) {
    }
    b = _Balloc(ptr, k);
    b->_x[0] = y9;
    b->_wds = 1;
    i = 9;
    if (9 < nd0) {
        s += 9;
        do {
            b = func_001C51B8(ptr, b, 10, *s++ - '0');
        } while (++i < nd0);
        s++;
    } else {
        s += 10;
    }
    for (; i < nd; i++) {
        b = func_001C51B8(ptr, b, 10, *s++ - '0');
    }
    return b;
}
_Bigint *_i2b(struct _reent *ptr, int i);
_Bigint *_multiply(struct _reent *ptr, _Bigint *a, _Bigint *b);
_Bigint *func_001C5778(struct _reent *ptr, _Bigint *b, int k);
_Bigint *_lshift(struct _reent *ptr, _Bigint *b, int k);
int __mcmp(_Bigint *a, _Bigint *b);
_Bigint *__mdiff(struct _reent *ptr, _Bigint *a, _Bigint *b);
double _b2d(_Bigint *a, int *e);
_Bigint *func_001C5E30(struct _reent *ptr, double _d, int *e, int *bits);
double func_001C5FB8(_Bigint *a, _Bigint *b);