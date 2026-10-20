/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int sceTtyInit(void);
extern int sceTtyRead(int a, int b);
extern int D_003712E0;

int read(int mode, int a, int b)
{
    if (mode == 0) {
        if (D_003712E0 == 0) {
            if (sceTtyInit() == 0)
                return -1;
            D_003712E0 = 1;
        }
        return sceTtyRead(a, b);
    }
    return -1;
}
