/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int func_00107E60(char **pp, int *left, int c) {
    if (*left == 0) {
        return 1;
    }
    if (c < 0x100) {
        if (*left == 1) {
            c = 0;
        }
        *(*pp)++ = c;
        (*left)--;
        return 1;
    }
    **pp = 0;
    return 0;
}
