/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxps2.c (ADXM_ShutdownThrdEx). See THIRD_PARTY.md. */

extern int func_001051F0(int thread, int priority);
typedef void (*SvmFunc)(void *obj);
extern void func_00179E68(SvmFunc func, void *obj);
extern void func_00179E80(SvmFunc func, void *obj);
extern void func_0017A1C8(void);
extern int D_0037B938;
extern int D_0037B934;
extern volatile int D_0037B9D8;
extern int D_00383268;
extern void func_00160068(void);
extern void func_00160150(void);
extern void func_00160220(void);
extern void func_001602F0(void);
extern void func_001603C0(void);
extern void func_001604F0(void);
extern void func_001605C0(void);

void func_00160CF0(void) {
    if ((--D_0037B934) == 0) {
        func_00160068();
        func_00160150();
        func_00160220();
        func_001603C0();
        func_001602F0();
        func_001604F0();
        func_001605C0();
        func_001051F0(D_0037B9D8, D_00383268);
        func_00179E68(0, 0);
        func_00179E80(0, 0);
        D_0037B938 = 0;
        func_0017A1C8();
    }
}
