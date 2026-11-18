/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_005CABFC;
extern char D_01204B40[];
extern int D_01204BC0[];
extern int D_01204B80[];

int func_0019EE30(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);

int func_001A3310(int value)
{
    if (D_005CABFC < 0)
        return 0;
    D_01204BC0[0] = value;
    if (func_0019EE30(D_01204B40, 2, 0, D_01204BC0, 4, D_01204B80, 4, 0, 0) < 0)
        return -1;
    return D_01204B80[0];
}
