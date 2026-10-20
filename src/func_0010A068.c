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

extern int D_00371394;
extern char D_003C3C68[];
extern int func_00105360(struct SemaParam *param);

void func_0010A068(void) {
    struct SemaParam param;

    if (D_00371394 == -1) {
        param.initCount = 1;
        param.maxCount = 1;
        param.option = (unsigned int)D_003C3C68; /* "SceStdioFioSema" */
        D_00371394 = func_00105360(&param);
    }
}
