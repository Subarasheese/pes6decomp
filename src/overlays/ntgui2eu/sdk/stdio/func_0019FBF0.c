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

extern int D_005CABEC;
extern char D_00600558[];
extern int func_0019B120(struct SemaParam *param);

void func_0019FBF0(void) {
    struct SemaParam param;

    if (D_005CABEC == -1) {
        param.initCount = 1;
        param.maxCount = 1;
        param.option = (unsigned int)D_00600558; /* "SceStdioFioSema" */
        D_005CABEC = func_0019B120(&param);
    }
}
