/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_003713A8;
extern char D_003EF500[];
extern int D_003EF580[];
extern int D_003EF540[];

int func_001092A8(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);

int func_0010D708(int a0, int a1, int a2)
{
    if (D_003713A8 < 0)
        return 0;
    D_003EF580[0] = a1;
    D_003EF580[1] = a0;
    D_003EF580[2] = a2;
    if (func_001092A8(D_003EF500, 4, 0, D_003EF580, 0xC, D_003EF540, 4, 0, 0) < 0)
        return 0;
    return D_003EF540[0];
}
