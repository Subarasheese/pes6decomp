/* compiler: ee-gcc-2.96 */
/* Adapted from recvx-decomp, src/cri/mwlib/ee/lib/libadxe/cri_cvfs.c (toUpperStr).
 * licence: MIT (see THIRD_PARTY.md) */
typedef signed char Sint8;
typedef unsigned int Uint32;
typedef unsigned int size_t;
extern size_t func_001C80F0(const char *);

void func_0016A948(Sint8 *src) {
    Uint32 len;
    Uint32 lp;
    len = func_001C80F0((const char *)src);
    for (lp = 0; lp < (len + 1); lp++) {
        if ((src[lp] >= 'a') && (src[lp] <= 'z')) {
            src[lp] -= 'a' - 'A';
        }
    }
}
