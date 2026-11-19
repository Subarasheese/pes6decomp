/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern char D_011FDD80[];
extern int D_005CAA38;
unsigned int func_001B0444(const char *s);
void *func_001AE624(void *dst, const void *src, unsigned int n);
void func_0019B150(int sema);

#define UNCACHED(p) ((char *)((unsigned int)(p) | 0x20000000))

void func_00196820(char *dst) {
    if (dst) {
        unsigned int n = func_001B0444(UNCACHED(D_011FDD80)) < 0x400 ? func_001B0444(UNCACHED(D_011FDD80)) : 0x3FF;
        func_001AE624(dst, UNCACHED(D_011FDD80), n);
        dst[n] = 0;
    }
    func_0019B150(D_005CAA38);
}
