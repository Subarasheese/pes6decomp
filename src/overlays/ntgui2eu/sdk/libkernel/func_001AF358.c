/* compiler: ee-gcc-2.96-G0-g */
/* newlib-1.10.0 newlib/libc/stdlib/rand_r.c (rand_r). See THIRD_PARTY.md. */


int func_001AF358(unsigned int *seed) {
    long k;
    long s = (long)(*seed);
    if (s == 0)
        s = 0x12345987;
    k = s / 127773;
    s = (16807 * (s - (k * 127773))) - (2836 * k);
    if (s < 0)
        s += 2147483647;
    *seed = (unsigned int)s;
    return (int)(s & 0x7fffffff);
}
