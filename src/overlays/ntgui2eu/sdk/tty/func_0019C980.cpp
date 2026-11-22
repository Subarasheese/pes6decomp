/* compiler: ee-gcc-2.9-G0 */
/* This NTGUI2EU runtime copy also appears at 00106DF8 in SLES-542.03. */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern s32 D_005CAB54;
extern char D_01201740[];

/* Caller sets both $a0 (buffer) and $a1 (count) before each call. */
extern "C" void func_001A6B68(char *p, s32 n);

extern "C" void func_0019C980(s32 arg0) {
    s32 n = D_005CAB54;
    if (n >= 0x7E) {
        D_005CAB54 = 0;
        D_01201740[0x7F] = 0;
        func_001A6B68(D_01201740, n);
        n = D_005CAB54;
    }
    if (arg0 == 0xA) {
        D_005CAB54 = 0;
        D_01201740[n] = (char)arg0;
        D_01201740[n + 1] = 0;
        func_001A6B68(D_01201740, n);
        return;
    }
    D_005CAB54 = n + 1;
    D_01201740[n] = (char)arg0;
}
