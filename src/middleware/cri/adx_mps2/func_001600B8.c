/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_mps2.c (ADXM_ShutdownThrd).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef signed int Sint32;
extern void func_00179E68(void (*func)(void *), void *object);
extern void func_00179E80(void (*func)(void *), void *object);
extern void func_0017A1C8(void);
extern int func_001051F0(int, int);
extern Sint32 D_0037B934;
extern volatile Sint32 D_0037B9D8;
extern Sint32 D_00383268;
extern void func_00160068(void);
extern void func_00160220(void);
extern void func_001602F0(void);
extern void func_001603C0(void);
extern void func_001605C0(void);

void func_001600B8(void) {
    if ((--D_0037B934) == 0) {
        func_00160068();
        func_00160220();
        func_001603C0();
        func_001602F0();
        func_001605C0();
        func_001051F0(D_0037B9D8, D_00383268);
        func_00179E68(0, 0);
        func_00179E80(0, 0);
        func_0017A1C8();
    }
}
