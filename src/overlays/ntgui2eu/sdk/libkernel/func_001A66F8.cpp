/* compiler: ee-gcc-2.9-G0 */
/* This NTGUI2EU runtime copy also appears at 001113F0 in SLES-542.03. */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern "C" {
extern int D_005CBBB8;
extern int D_005CBBBC;
extern char D_012073C8[];
void func_001AE7D8(char *, int, int);

void func_001A66F8(void) {
    D_005CBBB8 = 0;
    D_005CBBBC = 0;
    return func_001AE7D8(D_012073C8, 0, 0x200);
}
}
