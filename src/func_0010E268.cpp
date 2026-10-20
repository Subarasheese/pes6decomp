/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_003EF8C0[];
extern int D_003EF6C0[];

int sceSifCallRpc(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);
int _lf_bind(void);
int func_0010DC60(void);

int func_0010E268(int value)
{
    if (_lf_bind() < 0)
        return -0x10000;
    if (func_0010DC60() != 0)
        return -0x10004;
    D_003EF6C0[0] = value;
    if (sceSifCallRpc(D_003EF8C0, 0xA, 0, D_003EF6C0, 4, D_003EF6C0, 4, 0, 0) < 0)
        return -0x10001;
    return D_003EF6C0[0];
}
