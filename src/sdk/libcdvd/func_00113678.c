/* compiler: ee-gcc-2.9-as210-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00372A94;
extern volatile int sceCdCbfunc_num;
extern volatile int D_00372AA0, _sceCd_ncmd_semid, D_00372AAC, D_00372AB0;
extern void func_00105380(int);
extern int func_00105370(int);
extern int DIntr(void);
extern void func_00108520(int);
extern int EIntr(void);

void func_00113678(void)
{
    int state;

    if (D_00372A94 != 0) {
        sceCdCbfunc_num = -1;
        func_00105380(D_00372AA0);
    }
    func_00105370(_sceCd_ncmd_semid);
    func_00105370(D_00372AAC);
    func_00105370(D_00372AB0);
    func_00105370(D_00372AA0);
    state = DIntr();
    func_00108520(0x80000012);
    if (state != 0)
        EIntr();
}
