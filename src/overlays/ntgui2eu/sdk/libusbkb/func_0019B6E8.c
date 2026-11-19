/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_005CAB48;
extern int func_0019C888(void);
extern int func_0019C640(int a, int b);

int func_0019B6E8(int mode, int a, int b)
{
    if (mode == 1 || mode == 2) {
        if (D_005CAB48 == 0) {
            if (func_0019C888() == 0)
                return -1;
            D_005CAB48 = 1;
        }
        return func_0019C640(a, b);
    }
    return -1;
}
