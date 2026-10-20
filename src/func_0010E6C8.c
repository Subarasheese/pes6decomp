/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_003C3E98[];
extern int _sceSifLoadElfPart(int, char *, int, int);

int func_0010E6C8(int a, int b) {
    return _sceSifLoadElfPart(a, D_003C3E98, b, 1);
}
