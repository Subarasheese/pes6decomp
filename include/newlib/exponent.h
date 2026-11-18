/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdio/vfprintf.c). */
int exponent(char *p0, int exp, int fmtch);
int exponent(char *p0, int exp, int fmtch)
{
    char *p, *t;
    char expbuf[308];
    p = p0;
    *p++ = fmtch;
    if (exp < 0) {
        exp = -exp;
        *p++ = '-';
    } else {
        *p++ = '+';
    }
    t = expbuf + 308;
    if (exp > 9) {
        do {
            *--t = ((exp % 10) + '0');
        } while ((exp /= 10) > 9);
        *--t = ((exp) + '0');
        for (; t < expbuf + 308; *p++ = *t++) {
        }
    } else {
        *p++ = '0';
        *p++ = ((exp) + '0');
    }
    return p - p0;
}
