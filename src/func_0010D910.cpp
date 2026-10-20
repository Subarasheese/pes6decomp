/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_003713A8;
extern char D_003EF500[];
extern unsigned int D_003EF540[];

int func_001092A8(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize,
                  void *end, void *arg);

unsigned int func_0010D910(void)
{
    if (D_003713A8 < 0)
        return 0;
    if (func_001092A8(D_003EF500, 0x5, 0, 0, 0, D_003EF540, 4, 0, 0) < 0)
        return 0xFFFFFFFF;
    return D_003EF540[0];
}
