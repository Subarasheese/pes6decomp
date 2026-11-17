/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32, void *);
extern s32 func_00BBB990(u16, s32);
extern s32 func_00BBB9C0(u16, s32);

void func_00BDD840(void *arg0) {
    u8 *obj;
    u8 st;
    s16 var;
    void *p;

    obj = M2C_FIELD(arg0, u8 **, 0);
    if (M2C_FIELD(obj, s32 *, 0x1C) > 0) {
        M2C_FIELD(obj, s32 *, 0x1C) = 0;
    }
    obj = M2C_FIELD(arg0, u8 **, 0);
    st = obj[0x4E];
    if (st != 0xFF) {
        if (st != 0) {
            obj[0x4E] = st - 1;
        }
        obj = M2C_FIELD(arg0, u8 **, 0);
        if (obj[0x4E] != 0) {
            return;
        }
        M2C_FIELD(obj, u16 *, 0x2C) = M2C_FIELD(obj, u16 *, 0x26) + 0x4000;
        obj = M2C_FIELD(arg0, u8 **, 0);
        M2C_FIELD(obj, f32 *, 0x6C) = M2C_FIELD(obj, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(obj, u16 *, 0x2C), 0x500);
        obj = M2C_FIELD(arg0, u8 **, 0);
        M2C_FIELD(obj, f32 *, 0x70) = M2C_FIELD(obj, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(obj, u16 *, 0x2C), 0x500);
    } else {
        if (func_00BBB8C0(0x64, obj + 0x4E) >= 6) {
            return;
        }
    }
    p = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(p, u8 *, 0x4C) = 0xA;
    st = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
    if (st == 3) {
        var = 9;
    } else if (st == 2 || st == 1 || st == 0) {
        var = 7;
    } else {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var;
}
