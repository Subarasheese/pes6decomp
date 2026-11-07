/* compiler: ee-gcc-2.9-as210-G0 */
/* Sony SDK code; source adapted from kfiv-decomp (src/sce/libkernl/kprintf.c). */

/* Round a double's bit pattern to an integer: 0 below 2^-53, 9999 from 2^13 up. */
int ftoi(unsigned long long a)
{
    unsigned long long m = a;
    long long e;

    e = (long long)((m << 1) >> 53);
    e -= 1075;
    if (e < -53) {
        return 0;
    }
    if (e >= 13) {
        return 9999;
    }
    m = (m << 12) >> 12;
    m |= (unsigned long long)1 << 52;
    if (e < 0) {
        int s;

        e = -e;
        s = e - 2;
        m >>= s;
        if ((m & 3) == 3) {
            m = (m >> 2) + 1;
        } else {
            m >>= 2;
        }
    } else {
        m <<= e;
    }
    return (int)m;
}
