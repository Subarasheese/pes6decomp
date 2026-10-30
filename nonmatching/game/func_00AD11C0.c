/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0099DFF0(void *);                          /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
u16 func_009B32D0(s32, u16, M2C_UNK);               /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
extern s32 Pes6Ball_Current;
extern char D_005926E4[];
extern char Pes6MatchSquads[];

s32 func_00AD11C0(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s8 var_v0;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (!(temp_v1 & 0x100) && (temp_v1 & 0x4000)) {
        M2C_FIELD(arg0, s8 *, 0x4A) = 1;
        M2C_FIELD(arg0, u8 *, 0x50) = (u8) ((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u16 *, 8) * 2) - (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38));
        if ((s32) M2C_FIELD(arg0, u8 *, 0x50) >= 9) {
            M2C_FIELD(arg0, u8 *, 0x50) = 8U;
        }
        temp_s1 = func_0099DFF0(arg0) & 0xFFFF;
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), temp_s1) & 0xFFFF) >= 0xE) {
            var_v0 = (((M2C_FIELD(arg0, u16 *, 0x26) - (temp_s1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
        } else {
            var_v0 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1;
        }
        M2C_FIELD(arg0, s8 *, 0x4F) = var_v0;
        func_00209540(M2C_FIELD(arg0, void **, 4), 0x22A, 0x1F40);
        temp_v0 = ((*(u8 *)D_005926E4) * 4) + Pes6Ball_Current;
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0(func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C)), M2C_FIELD(arg0, u16 *, 0x26), 0x1000);
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
        func_00207390(M2C_FIELD(arg0, void **, 4), 8);
        M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        return 1;
    }
    return 0;
}
