/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};

extern int D_00371398;
extern int D_0037139C;
extern char D_003C3BE0[];
extern char D_003C3BF0[];
extern int func_00105360(struct SemaParam *p); /* CreateSema */

void func_001099D8(void)
{
    struct SemaParam p;

    if (D_00371398 == -1) {
        p.initCount = 1;
        p.maxCount = 1;
        p.option = (unsigned int)D_003C3BE0;
        D_00371398 = func_00105360(&p);
        p.option = (unsigned int)D_003C3BF0;
        D_0037139C = func_00105360(&p);
    }
}
