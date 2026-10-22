/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern char D_003F3E40[];
extern int D_00374658;
unsigned int func_001C80F0(const char *s);
void *memcpy(void *dst, const void *src, unsigned int n);
void iSignalSema(int sema);

#define UNCACHED(p) ((char *)((unsigned int)(p) | 0x20000000))

void func_00116338(char *dst) {
    if (dst) {
        unsigned int n = func_001C80F0(UNCACHED(D_003F3E40)) < 0x400 ? func_001C80F0(UNCACHED(D_003F3E40)) : 0x3FF;
        memcpy(dst, UNCACHED(D_003F3E40), n);
        dst[n] = 0;
    }
    iSignalSema(D_00374658);
}
