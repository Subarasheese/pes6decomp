/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/dtoa.c). */
#include "mprec.h"

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
