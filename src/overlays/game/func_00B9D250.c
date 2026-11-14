/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00B364A0(void);
extern void func_00B364D0(u32);
extern void func_001CD9E0(f32);
extern void func_00207390(void *, s32);
extern void func_00209A00(void *, u16, s32);
extern u32 func_009B33A0(void *, s32, s32);
extern void func_00B846A0(void **);
extern void func_00B89870(void **);
extern void func_00BD3CF0(void **, f32, f32);
extern u8 D_00CBCD81[];
extern u8 D_00CBCD8E[];

void func_00B9D250(void **arg0) {
    void *p;
    s32 t;
    u16 a1;
    u32 v;

    p = *arg0;
    v = func_009B33A0(p, (s32)M2C_FIELD(p, f32 *, 0x6C), (s32)M2C_FIELD(p, f32 *, 0x70));
    func_001CD9E0((f32)v);
    p = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(p, f32 *, 0x6C), M2C_FIELD(p, f32 *, 0x70));
    if (D_00CBCD81[0] == 1) {
        D_00CBCD81[0] = 2;
        func_00B364D0(2);
        func_00B89870(arg0);
        t = func_00B364A0() & 0xFF;
        switch (t) {
        case 2:
            a1 = 0x4EE;
            break;
        case 3:
            a1 = 0x4F0;
            break;
        case 4:
            a1 = 0x4EC;
            break;
        default:
            a1 = 0x2ED;
            break;
        }
        M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u8 *, 0x2D) = D_00CBCD8E[0];
        func_00209A00(M2C_FIELD(*arg0, void **, 4), a1, 0);
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
        M2C_FIELD(*arg0, u8 *, 0x66) = 0xFF;
        func_00B846A0(arg0);
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x23;
    }
}
