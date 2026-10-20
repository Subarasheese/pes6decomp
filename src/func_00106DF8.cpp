/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern s32 D_003712F0;
extern char D_003EC100[];

/* Caller sets both $a0 (buffer) and $a1 (count) before each call. */
extern "C" void func_00106850(char *p, s32 n);

extern "C" void func_00106DF8(s32 arg0) {
    s32 n = D_003712F0;
    if (n >= 0x7E) {
        D_003712F0 = 0;
        D_003EC100[0x7F] = 0;
        func_00106850(D_003EC100, n);
        n = D_003712F0;
    }
    if (arg0 == 0xA) {
        D_003712F0 = 0;
        D_003EC100[n] = (char)arg0;
        D_003EC100[n + 1] = 0;
        func_00106850(D_003EC100, n);
        return;
    }
    D_003712F0 = n + 1;
    D_003EC100[n] = (char)arg0;
}
