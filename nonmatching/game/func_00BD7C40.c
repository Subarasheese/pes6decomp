/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
u32 func_009B33A0(s32, s32, s32);
u16 func_009B3480(void *, f32, f32);
s32 *func_00B2A420(u8);
M2C_UNK func_00B35E10(void *, s32 *, s32 *);
s32 func_00BA8740(M2C_UNK);
M2C_UNK func_00BBA080(void *);
s32 func_00BBB990(s32, M2C_UNK);
s32 func_00BBB9C0(s32, M2C_UNK);
M2C_UNK func_00BD8510(void *, s32 *, s32 *);
extern char D_00592370[];

void func_00BD7C40(void *arg0) {
    char *p;
    f32 *fx;
    f32 *fy;
    s32 *var_s1;
    s32 var_s0;
    s32 a;
    s8 var_v1;

    p = *(char **)arg0;
    fy = (f32 *)(p + 0x70);
    fx = (f32 *)(p + 0x6C);
    func_00B2A420(func_00BF6270());
    if (*(u8 *)D_00592370 == 0) {
        func_00B35E10(arg0, (s32 *)fx, (s32 *)fy);
        if (*(u8 *)(*(char **)arg0 + 0x10) != 0) {
            func_00BD8510(arg0, (s32 *)fx, (s32 *)fy);
        }
        var_s1 = func_00B2A420(1U);
        var_s0 = 0;
        for (;;) {
            if (arg0 != (void *)var_s1) {
                p = *(char **)arg0;
                if (func_009B33A0(*var_s1, (s32)*(f32 *)(p + 0x6C), (s32)*(f32 *)(p + 0x70)) < 0x24001U) {
                    break;
                }
            }
            var_s0 += 1;
            var_s1 += 2;
            if (var_s0 >= 0x16) {
                goto top;
            }
        }
        p = *(char **)arg0;
        a = (func_009B3480(p, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70)) & 0xFFFF) + 0x4000;
        var_s0 = a & 0xFFFF;
        p = *(char **)arg0;
        *(f32 *)(p + 0x6C) = *(f32 *)(p + 0x6C) + (f32)func_00BBB990(var_s0 & 0xFFFF, 0x500);
        p = *(char **)arg0;
        *(f32 *)(p + 0x70) = *(f32 *)(p + 0x70) + (f32)func_00BBB9C0(var_s0 & 0xFFFF, 0x500);
    } else {
        *(s32 *)fx = 0;
        *(s32 *)fy = 0x46086400;
        goto top;
    }
top:
    if (func_00BA8740(0x23) == 0) {
        p = *(char **)arg0;
        var_v1 = 0x23;
        *(u16 *)(*(char **)arg0 + 0x2C) = func_009B3480(p, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
    } else if (func_00BA8740(0x12) != 0) {
        p = *(char **)arg0;
        var_v1 = 0x2F;
        *(u16 *)(*(char **)arg0 + 0x2C) = func_009B3480(p, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
        p = *(char **)arg0;
        *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
        p = *(char **)arg0;
        *(u16 *)(p + 0x28) = *(u16 *)(p + 0x26);
    } else {
        p = *(char **)arg0;
        var_v1 = 0x12;
        *(u16 *)(*(char **)arg0 + 0x2C) = func_009B3480(p, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
    }
    *(s8 *)(*(char **)((char *)arg0 + 4) + 0x4C) = var_v1;
    func_00BBA080(arg0);
}
