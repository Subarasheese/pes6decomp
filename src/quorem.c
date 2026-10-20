/* compiler: ee-gcc-2.96 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/dtoa.c). */
/*
 * Unit: sdk/newlib/libc/stdlib/dtoa
 *
 * Functions:
 *   0x00274f30 quorem
 *   0x00275148 _dtoa_r
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

#define Exp_shift1 20
#define Exp_msk1 0x100000
#define Exp_mask 0x7ff00000
#define P 53
#define Bias 1023
#define Exp_11 0x3ff00000
#define Frac_mask1 0xfffff
#define Ten_pmax 22
#define Bletch 0x10
#define Bndry_mask 0xfffff
#define Log2P 1
#define Sign_bit 0x80000000
#define Quick_max 14
#define Int_max 14
#define n_bigtens 5

#define Storeinc(a, b, c) (((unsigned short *)a)[1] = b, ((unsigned short *)a)[0] = c, a++)

#define Bcopy(x, y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds * sizeof(Long) + 2 * sizeof(int))

extern void *memcpy(void *dst, const void *src, unsigned int n);

extern Bigint *_Balloc(struct _reent *ptr, int k);
extern void _Bfree(struct _reent *ptr, Bigint *v);
extern Bigint *_multadd(struct _reent *ptr, Bigint *b, int m, int a);
extern int _hi0bits(ULong x);
extern Bigint *_i2b(struct _reent *ptr, int i);
extern Bigint *_multiply(struct _reent *ptr, Bigint *a, Bigint *b);
extern Bigint *_pow5mult(struct _reent *ptr, Bigint *b, int k);
extern Bigint *_lshift(struct _reent *ptr, Bigint *b, int k);
extern int __mcmp(Bigint *a, Bigint *b);
extern Bigint *__mdiff(struct _reent *ptr, Bigint *a, Bigint *b);
extern Bigint *_d2b(struct _reent *ptr, double d, int *e, int *bits);

extern const double __mprec_tens[];
extern const double __mprec_bigtens[];

#define Balloc _Balloc
#define Bfree _Bfree
#define multadd _multadd
#define hi0bits _hi0bits
#define i2b _i2b
#define mult _multiply
#define pow5mult _pow5mult
#define lshift _lshift
#define cmp __mcmp
#define diff __mdiff
#define d2b _d2b
#define tens __mprec_tens
#define bigtens __mprec_bigtens


int quorem(Bigint *b, Bigint *S)
{
    int n;
    Long borrow, y;
    ULong carry, q, ys;
    ULong *bx, *bxe, *sx, *sxe;
    Long z;
    ULong si, zs;

    n = S->_wds;
    if (b->_wds < n) {
        return 0;
    }
    sx = S->_x;
    sxe = sx + --n;
    bx = b->_x;
    bxe = bx + n;
    q = *bxe / (*sxe + 1);
    if (q) {
        borrow = 0;
        carry = 0;
        do {
            si = *sx++;
            ys = (si & 0xffff) * q + carry;
            zs = (si >> 16) * q + (ys >> 16);
            carry = zs >> 16;
            y = (*bx & 0xffff) - (ys & 0xffff) + borrow;
            borrow = y >> 16;
            z = (*bx >> 16) - (zs & 0xffff) + borrow;
            borrow = z >> 16;
            Storeinc(bx, z, y);
        } while (sx <= sxe);
        if (!*bxe) {
            bx = b->_x;
            while (--bxe > bx && !*bxe) {
                --n;
            }
            b->_wds = n;
        }
    }
    if (cmp(b, S) >= 0) {
        q++;
        borrow = 0;
        carry = 0;
        bx = b->_x;
        sx = S->_x;
        do {
            si = *sx++;
            ys = (si & 0xffff) + carry;
            zs = (si >> 16) + (ys >> 16);
            carry = zs >> 16;
            y = (*bx & 0xffff) - (ys & 0xffff) + borrow;
            borrow = y >> 16;
            z = (*bx >> 16) - (zs & 0xffff) + borrow;
            borrow = z >> 16;
            Storeinc(bx, z, y);
        } while (sx <= sxe);
        bx = b->_x;
        bxe = bx + n;
        if (!*bxe) {
            while (--bxe > bx && !*bxe) {
                --n;
            }
            b->_wds = n;
        }
    }
    return q;
}
char *_dtoa_r(struct _reent *ptr, double _d, int mode, int ndigits, int *decpt,
              int *sign, char **rve);
