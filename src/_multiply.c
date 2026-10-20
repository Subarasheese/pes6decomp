/* compiler: ee-gcc-2.96 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/mprec.c). */
/*
 * Unit: sdk/newlib/libc/stdlib/mprec
 *
 * Functions:
 *   0x002773d8 _Balloc
 *   0x00277480 _Bfree
 *   0x002774b0 _multadd
 *   0x002775c8 _s2b
 *   0x00277710 _hi0bits
 *   0x00277798 _lo0bits
 *   0x00277858 _i2b
 *   0x00277890 _multiply
 *   0x00277ac0 _pow5mult
 *   0x00277bc0 _lshift
 *   0x00277d38 __mcmp
 *   0x00277da0 __mdiff
 *   0x00277f30 _ulp
 *   0x00277fc8 _b2d
 *   0x00278148 _d2b
 *   0x002782c8 _ratio
 *   0x00278388 _mprec_log10
 */

typedef unsigned int __ULong;
typedef int __Long;

#define ULong __ULong
#define Long __Long

struct _Bigint {
    struct _Bigint *_next;
    int _k, _maxwds, _sign, _wds;
    __ULong _x[1];
};

typedef struct _Bigint _Bigint;

#define Bigint _Bigint

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

union double_union {
    double d;
    __ULong i[2];
};

#define word0(x) ((x).i[1])
#define word1(x) ((x).i[0])

#define Exp_shift 20
#define Exp_msk1 0x100000
#define Exp_mask 0x7ff00000
#define P 53
#define Bias 1023
#define Frac_mask 0xfffff
#define Ebits 11
#define Exp_1 0x3ff00000
#define _Kmax 15

#define Storeinc(a, b, c) (((unsigned short *)a)[1] = b, ((unsigned short *)a)[0] = c, a++)

#define Bcopy(x, y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds * sizeof(Long) + 2 * sizeof(int))

extern void *memcpy(void *dst, const void *src, unsigned int n);
extern void *_calloc_r(struct _reent *ptr, unsigned int nmemb, unsigned int size);

Bigint *_multiply(struct _reent *ptr, Bigint *a, Bigint *b);
double _b2d(Bigint *a, int *e);

#define tens __mprec_tens
#define bigtens __mprec_bigtens
#define tinytens __mprec_tinytens

#define Balloc _Balloc
#define Bfree _Bfree
#define multadd _multadd
#define i2b _i2b
#define hi0bits _hi0bits
#define lo0bits _lo0bits
#define mult _multiply
#define cmp __mcmp
#define b2d _b2d
Bigint *_Balloc(struct _reent *ptr, int k);
void _Bfree(struct _reent *ptr, Bigint *v);
Bigint *_multadd(struct _reent *ptr, Bigint *b, int m, int a);
Bigint *_s2b(struct _reent *ptr, const char *s, int nd0, int nd, ULong y9);
int _hi0bits(ULong x);
int _lo0bits(ULong *y);
Bigint *_i2b(struct _reent *ptr, int i);



Bigint *_multiply(struct _reent *ptr, Bigint *a, Bigint *b)
{
    Bigint *c;
    int k, wa, wb, wc;
    ULong carry, y, z;
    ULong *x, *xa, *xae, *xb, *xbe, *xc, *xc0;
    ULong z2;

    if (a->_wds < b->_wds) {
        c = a;
        a = b;
        b = c;
    }
    k = a->_k;
    wa = a->_wds;
    wb = b->_wds;
    wc = wa + wb;
    if (wc > a->_maxwds) {
        k++;
    }
    c = Balloc(ptr, k);
    for (x = c->_x, xa = x + wc; x < xa; x++) {
        *x = 0;
    }
    xa = a->_x;
    xae = xa + wa;
    xb = b->_x;
    xbe = xb + wb;
    xc0 = c->_x;
    for (; xb < xbe; xb++, xc0++) {
        if ((y = *xb & 0xffff) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            do {
                z = (*x & 0xffff) * y + (*xc & 0xffff) + carry;
                carry = z >> 16;
                z2 = (*x++ >> 16) * y + (*xc >> 16) + carry;
                carry = z2 >> 16;
                Storeinc(xc, z2, z);
            } while (x < xae);
            *xc = carry;
        }
        if ((y = *xb >> 16) != 0) {
            x = xa;
            xc = xc0;
            carry = 0;
            z2 = *xc;
            do {
                z = (*x & 0xffff) * y + (*xc >> 16) + carry;
                carry = z >> 16;
                Storeinc(xc, z, z2);
                z2 = (*x++ >> 16) * y + (*xc & 0xffff) + carry;
                carry = z2 >> 16;
            } while (x < xae);
            *xc = z2;
        }
    }
    for (xc0 = c->_x, xc = xc0 + wc; wc > 0 && !*--xc; --wc) {
    }
    c->_wds = wc;
    return c;
}
Bigint *_pow5mult(struct _reent *ptr, Bigint *b, int k);
Bigint *_lshift(struct _reent *ptr, Bigint *b, int k);
int __mcmp(Bigint *a, Bigint *b);
Bigint *__mdiff(struct _reent *ptr, Bigint *a, Bigint *b);
double _ulp(double _x);
double _b2d(Bigint *a, int *e);
Bigint *_d2b(struct _reent *ptr, double _d, int *e, int *bits);
double _ratio(Bigint *a, Bigint *b);
extern const double tens[];
extern const double bigtens[];
extern const double tinytens[];
double _mprec_log10(int dig);
