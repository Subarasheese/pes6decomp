/* compiler: ee-gcc-2.96 */
extern void *memcpy(void *, const void *, unsigned int);
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/cri_cvfs.c (getDefDev).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned int size_t;
typedef int s32;
typedef s32 strlen_t;
typedef char Char8;
extern size_t func_001C80F0(const char *s);
extern Char8 D_0050E780[0x10];

void func_0016AF68(Char8 *arg0) {
    strlen_t len = func_001C80F0(D_0050E780);
    if (D_0050E780[0] == '\0') {
        arg0[0] = '\0';
        return;
    }
    memcpy(arg0, D_0050E780, len + 1);
}
