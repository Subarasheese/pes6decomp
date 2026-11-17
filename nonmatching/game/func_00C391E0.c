/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern void func_00209820(void *);
extern void func_00207360(void *);
extern s32 func_00207D10(void *);
extern void func_002084C0(void *);
extern void func_00209A00(void *, s32, s32);
extern void func_00B2ACF0(void *, u16);
extern void func_00C3A630(void *, u16);
extern void func_00C3A850(void *, u16);
extern u8 D_003EA7F6;

void func_00C391E0(void **arg0) {
    u16 a1;
    void *obj;

    a1 = M2C_FIELD(*arg0, u16 *, 0x18);
    if (a1 == 0x33) {
        func_00B2ACF0(arg0, a1);
        func_00209820(M2C_FIELD(*arg0, void **, 4));
        obj = M2C_FIELD(*arg0, void **, 4);
        if ((s32) M2C_FIELD(obj, u16 *, 0x30) < 0x59A) {
            func_00207BE0(obj);
            obj = M2C_FIELD(*arg0, void **, 4);
            if (!(M2C_FIELD(obj, f32 *, 0x38) > 1.0f)) {
                return;
            }
            if (func_00207D10(obj) == 0) {
                return;
            }
            func_002084C0(M2C_FIELD(*arg0, void **, 4));
        } else {
            if (func_00207D10(obj) == 0) {
                return;
            }
            func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x489, 0);
            func_00207360(M2C_FIELD(*arg0, void **, 4));
        }
        obj = M2C_FIELD(*arg0, void **, 4);
        M2C_FIELD(obj, f32 *, 0x28) = M2C_FIELD(obj, f32 *, 0x28) * (f32) D_003EA7F6;
    } else if (a1 == 0x31) {
        func_00B2ACF0(arg0, a1);
        func_00209820(M2C_FIELD(*arg0, void **, 4));
        obj = M2C_FIELD(*arg0, void **, 4);
        if ((s32) M2C_FIELD(obj, u16 *, 0x30) < 0x59A) {
            func_00207BE0(obj);
            obj = M2C_FIELD(*arg0, void **, 4);
            if (!(M2C_FIELD(obj, f32 *, 0x38) > 1.0f)) {
                return;
            }
            if (func_00207D10(obj) == 0) {
                return;
            }
            func_002084C0(M2C_FIELD(*arg0, void **, 4));
        } else {
            if (func_00207D10(obj) == 0) {
                return;
            }
            func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x489, 0);
            func_00207360(M2C_FIELD(*arg0, void **, 4));
        }
        obj = M2C_FIELD(*arg0, void **, 4);
        M2C_FIELD(obj, f32 *, 0x28) = M2C_FIELD(obj, f32 *, 0x28) * (f32) D_003EA7F6;
    } else if (a1 == 0x32) {
        func_00C3A630(arg0, a1);
    } else if (a1 == 0x30) {
        func_00C3A850(arg0, a1);
    }
}
