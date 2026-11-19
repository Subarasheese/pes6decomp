/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_005CBBA0;

unsigned int func_001A5248(void) {
    if (D_005CBBA0 < 0)
        return 0x80008001;
    return *(volatile unsigned int *)0x10001010 & 3;
}
