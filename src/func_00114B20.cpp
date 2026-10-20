/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int D_00372AAC;
extern char D_00374600[];
extern int D_00373C80[];

int func_00113E88(int a);
void func_00105380(int sema);
int func_001092A8(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *arg);

int func_00114B20(void)
{
    int r;
    if (func_00113E88(0x3) == 0)
        return -1;
    if (func_001092A8(D_00374600, 0x4, 0, 0, 0, D_00373C80, 4, 0, 0) < 0) {
        func_00105380(D_00372AAC);
        return -1;
    }
    r = *(int *)((unsigned int)D_00373C80 | 0x20000000);
    func_00105380(D_00372AAC);
    return r;
}
