/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_003EF8C0[];
extern int D_003EF6C0[];

int func_001092A8(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);
int func_0010DB60(void);
int func_0010DC60(void);

int func_0010E138(int value)
{
    if (func_0010DB60() < 0)
        return -0x10000;
    if (func_0010DC60() != 0)
        return -0x10004;
    D_003EF6C0[0] = value;
    if (func_001092A8(D_003EF8C0, 8, 0, D_003EF6C0, 4, D_003EF6C0, 4, 0, 0) < 0)
        return -0x10001;
    return D_003EF6C0[0];
}
