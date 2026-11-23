/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/bn/bn_exp2.c (BN_mod_exp2_mont). See THIRD_PARTY.md. */

#include "pes6/https/ssleay_091b_types.h"
typedef struct bn_mont_ctx_st {
    unsigned char reserved_00[12];
    BIGNUM RR;
    unsigned char reserved_20[56];
} BN_MONT_CTX;
extern BIGNUM *func_00BA4178(void);
extern int func_00BA4268(BIGNUM *a);
extern void func_00BA4480(BIGNUM *);
extern void func_00BA42B0(BIGNUM *a);
extern int func_00BA3E08(BIGNUM *rem, BIGNUM *m, BIGNUM *d, BN_CTX *ctx);
extern int func_00BA4808(BIGNUM *a, unsigned long w);
extern int func_00BA4CC0(BIGNUM *a, int n);
extern int func_00BA4A70(BIGNUM *a, BIGNUM *b);
extern BN_MONT_CTX *func_00BA5600(void);
extern int func_00BA51C8(BIGNUM *r, BIGNUM *a, BIGNUM *b, BN_MONT_CTX *mont, BN_CTX *ctx);
extern int func_00BA53D0(BIGNUM *r, BIGNUM *a, BN_MONT_CTX *mont, BN_CTX *ctx);
extern void func_00BA5690(BN_MONT_CTX *mont);
extern int func_00BA8C68(BN_MONT_CTX *mont, BIGNUM *modulus, BN_CTX *ctx);

int func_00BA7608(BIGNUM *rr, BIGNUM *a1, BIGNUM *p1, BIGNUM *a2, BIGNUM *p2, BIGNUM *m,
                  BN_CTX *ctx, BN_MONT_CTX *in_mont) {
    int i;
    int j;
    int k;
    int bits;
    int bits1;
    int bits2;
    int ret = 0;
    int wstart;
    int wend;
    int window;
    int xvalue;
    int yvalue;
    int start = 1;
    int ts = 0;
    int x;
    int y;
    BIGNUM *d;
    BIGNUM *aa1;
    BIGNUM *aa2;
    BIGNUM *r;
    BIGNUM val[4][4];
    BN_MONT_CTX *mont = 0;
    if (!(m->d[0] & 1)) {
        return 0;
    }
    d = &ctx->bn[ctx->tos++];
    r = &ctx->bn[ctx->tos++];
    bits1 = func_00BA4268(p1);
    bits2 = func_00BA4268(p2);
    if ((bits1 == 0) && (bits2 == 0)) {
        func_00BA4808(r, 1);
        return 1;
    }
    bits = (bits1 > bits2) ? (bits1) : (bits2);
    if (in_mont != 0)
        mont = in_mont;
    else {
        if ((mont = func_00BA5600()) == 0)
            goto err;
        if (!func_00BA8C68(mont, m, ctx))
            goto err;
    }
    func_00BA4480(&val[0][0]);
    func_00BA4480(&val[1][1]);
    func_00BA4480(&val[0][1]);
    func_00BA4480(&val[1][0]);
    ts = 1;
    if (func_00BA4A70(a1, m) >= 0) {
        func_00BA3E08(&val[1][0], a1, m, ctx);
        aa1 = &val[1][0];
    } else
        aa1 = a1;
    if (func_00BA4A70(a2, m) >= 0) {
        func_00BA3E08(&val[0][1], a2, m, ctx);
        aa2 = &val[0][1];
    } else
        aa2 = a2;
    if (!func_00BA51C8(&val[1][0], aa1, &mont->RR, mont, ctx))
        goto err;
    if (!func_00BA51C8(&val[0][1], aa2, &mont->RR, mont, ctx))
        goto err;
    if (!func_00BA51C8(&val[1][1], &val[1][0], &val[0][1], mont, ctx))
        goto err;
    window = 2;
    k = 1 << window;
    for (x = 0; x < k; x++) {
        if (x >= 2) {
            func_00BA4480(&val[x][0]);
            func_00BA4480(&val[x][1]);
            if (!func_00BA51C8(&val[x][0], &val[1][0], &val[x - 1][0], mont, ctx))
                goto err;
            if (!func_00BA51C8(&val[x][1], &val[1][0], &val[x - 1][1], mont, ctx))
                goto err;
        }
        for (y = 2; y < k; y++) {
            func_00BA4480(&val[x][y]);
            if (!func_00BA51C8(&val[x][y], &val[x][y - 1], &val[0][1], mont, ctx))
                goto err;
        }
    }

    ts = k;
    start = 1;
    xvalue = 0;
    yvalue = 0;
    wstart = bits - 1;
    wend = 0;
    if (!func_00BA51C8(r, func_00BA4178(), &mont->RR, mont, ctx))
        goto err;
    for (;;) {
        xvalue = func_00BA4CC0(p1, wstart);
        yvalue = func_00BA4CC0(p2, wstart);
        if (!(xvalue || yvalue)) {
            if (!start) {
                if (!func_00BA51C8(r, r, r, mont, ctx))
                    goto err;
            }
            wstart--;
            if (wstart < 0)
                break;
            continue;
        }
        j = wstart;
        wend = 0;
        for (i = 1; i < window; i++) {
            if ((wstart - i) < 0)
                break;
            xvalue += xvalue;
            xvalue |= func_00BA4CC0(p1, wstart - i);
            yvalue += yvalue;
            yvalue |= func_00BA4CC0(p2, wstart - i);
        }

        if (!start)
            for (j = 0; j < i; j++) {
                if (!func_00BA51C8(r, r, r, mont, ctx))
                    goto err;
            }

        if (xvalue || yvalue) {
            if (!func_00BA51C8(r, r, &val[xvalue][yvalue], mont, ctx))
                goto err;
        }
        wstart -= i;
        start = 0;
        if (wstart < 0)
            break;
    }

    func_00BA53D0(rr, r, mont, ctx);
    ret = 1;
err:
    if ((in_mont == 0) && (mont != 0))
        func_00BA5690(mont);

    ctx->tos -= 2;
    for (i = 0; i < ts; i++) {
        for (j = 0; j < ts; j++) {
            func_00BA42B0(&val[i][j]);
        }
    }

    return ret;
}
