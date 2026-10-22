/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_003740C0;
extern int D_00373C80[];
extern int D_00374628, D_0037462C, D_00374630;
extern int D_00372AAC;
extern char D_00374600[];
int func_00113E88(int);
void func_00105380(int);
int sceSifWriteBackDCache(void *, int);
int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
int func_00114D28(int arg0) {
    int r;
    int *p = &D_003740C0;
    if (func_00113E88(0x22) == 0) return 0;
    *p = arg0;
    sceSifWriteBackDCache(p, 4);
    if (sceSifCallRpc(D_00374600, D_00374628, 0, p, D_0037462C, D_00373C80, D_00374630, 0, 0) < 0) {
        func_00105380(D_00372AAC);
        return 0;
    }
    r = *(int *)((unsigned int)D_00373C80 | 0x20000000);
    func_00105380(D_00372AAC);
    return r;
}
