/* compiler: mwcc-3.0.1b151 */
/* dreamingmoths/memory-of-alessa, silent-hill-2/src/movie/pss_videodec.c (cpy2area). See
 * THIRD_PARTY.md. */
typedef unsigned char u_char;
extern void *memcpy(void *__dest, const void *__src, unsigned int __n);
int func_001344D0(u_char *pd0, int d0, u_char *pd1, int d1, const u_char *ps0, int s0,
                  const u_char *ps1, int s1) {
    if ((d0 + d1) < (s0 + s1)) {
        return 0;
    }
    if (s0 >= d0) {
        memcpy(pd0, ps0, d0);
        memcpy(pd1, ps0 + d0, s0 - d0);
        memcpy((pd1 + s0) - d0, ps1, s1);
    } else if (s1 >= (d0 - s0)) {
        memcpy(pd0, ps0, s0);
        memcpy(pd0 + s0, ps1, d0 - s0);
        memcpy(pd1, (ps1 + d0) - s0, s1 - (d0 - s0));
    } else {
        memcpy(pd0, ps0, s0);
        memcpy(pd0 + s0, ps1, s1);
    }
    return s0 + s1;
}
