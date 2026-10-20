/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int func_0010EDD8(int);

int func_0010EDE8(int x) {
    if ((unsigned int)(x - 0xD) >= 0x23)
        return -1;
    return func_0010EDD8(x);
}
