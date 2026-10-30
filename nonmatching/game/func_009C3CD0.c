/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B36C0(void *, u16, s32, u16, u8);   /* extern */
M2C_UNK func_009C3570(void *, void *);              /* extern */
s32 func_00A1B4A0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char D_005926FC[];

void func_009C3CD0(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 var_f0;
    s32 temp_a0;
    s32 var_a2;
    void *temp_v1;

    if ((M2C_FIELD(arg0, u8 *, 0) != M2C_FIELD(arg1, u8 *, 0)) && (func_00A1B4A0(arg1) == 0)) {
        temp_a0 = 0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC);
        if ((M2C_FIELD(arg0, s32 *, 0x1C) < temp_a0) && (M2C_FIELD(arg1, s32 *, 0x1C) < temp_a0)) {
            return;
        }
        if ((s32) (*(u8 *)D_005926FC) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926FC);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
        }
        if ((((*(f32 *)D_005926D8) < var_f0) || !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < -128.0f)) && ((u32) M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 4) + arg0), u32 *, 0x158) < 0x64000U)) {
            temp_v1 = M2C_FIELD(arg0, void **, 4);
            temp_f1 = M2C_FIELD(temp_v1, f32 *, 0x38);
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_a2 = (s32) temp_f1;
            } else {
                var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            func_009B36C0(arg0, M2C_FIELD(temp_v1, u16 *, 0x30), var_a2, M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_v1, u8 *, 0x2D));
            func_009C3570(arg0, arg1);
        }
    }
}
