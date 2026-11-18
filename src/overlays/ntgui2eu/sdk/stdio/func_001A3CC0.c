/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_01204F00[];
extern int D_01204D00[];

int func_0019EE30(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);
int func_001A36E8(void);
int func_001A37E8(void);

int func_001A3CC0(int value)
{
    if (func_001A36E8() < 0)
        return -0x10000;
    if (func_001A37E8() != 0)
        return -0x10004;
    D_01204D00[0] = value;
    if (func_0019EE30(D_01204F00, 8, 0, D_01204D00, 4, D_01204D00, 4, 0, 0) < 0)
        return -0x10001;
    return D_01204D00[0];
}
