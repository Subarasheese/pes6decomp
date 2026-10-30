/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A14EC0(void *, void *);                  /* extern */
M2C_UNK func_00A15540(void *, void *, void *, void *); /* extern */
M2C_UNK func_00AABA00(void *, s32, M2C_UNK);        /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E0[];
extern char Pes6MatchSquads[];

void func_00AABED0(void *arg0) {
    s32 temp_a0_2;
    u64 temp_v1;
    void *temp_a0;
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_a1, void **, 4);
    temp_v1 = (u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0xD) << 0x38) >> 0x39;
    if ((temp_v1 != 8) && (temp_v1 != 7) && (temp_v1 != 6)) {
        goto block_6;
    }
    if (M2C_FIELD(temp_a1, f32 *, 0x38) <= (f32) ((M2C_FIELD(temp_a0, u16 *, 8) * 2) + 4)) {
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD((((*(u8 *)D_005926E0) * 4) + Pes6Ball_Current), f32 *, 0x47C);
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD((((*(u8 *)D_005926E0) * 4) + Pes6Ball_Current), f32 *, 0xB7C);
        M2C_FIELD(Pes6Ball_Current, s8 *, 0x68) = 4;
        func_00A15540(arg0, arg0, Pes6Ball_Current, Pes6Ball_Current);
        return;
    }
block_6:
    if (func_00A14EC0(arg0, arg0) == 0) {
        temp_a0_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        func_00AABA00(arg0, ((temp_a0_2 * -0x1A4) / 183) + ((u32) (temp_a0_2 * -0x1A4) >> 0x1F), 1);
    }
}
