/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, s32);                /* extern */
M2C_UNK func_00BE2800(void **);                     /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E6[];

void func_00BE4F60(void **arg0) {
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) M2C_FIELD((((*(u8 *)D_005926E6) * 4) + Pes6Ball_Current), f32 *, 0x47C);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) M2C_FIELD((((*(u8 *)D_005926E6) * 4) + Pes6Ball_Current), f32 *, 0xB7C);
    temp_a0 = *arg0;
    if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) < 0x100001U) {
        var_v0 = 3;
    } else {
        var_v0 = 4;
    }
    func_00BD4040(arg0, var_v0 & 0xFF);
    temp_a0_2 = *arg0;
    if (M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u16 *, 0x30) == 0x2C6) {
        func_00BE2800(arg0);
        return;
    }
    if (func_009B33A0(temp_a0_2, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18)) >= 0x640001U) {
        func_00BD3BA0(arg0, 4, 1);
    }
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0xA8;
}
