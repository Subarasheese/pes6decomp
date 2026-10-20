/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_003712E0;
extern int func_00106D00(void);
extern int func_00106AB8(int a, int b);

int write(int mode, int a, int b)
{
    if (mode == 1 || mode == 2) {
        if (D_003712E0 == 0) {
            if (func_00106D00() == 0)
                return -1;
            D_003712E0 = 1;
        }
        return func_00106AB8(a, b);
    }
    return -1;
}
