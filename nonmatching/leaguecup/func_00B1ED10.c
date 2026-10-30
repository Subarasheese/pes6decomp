/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
extern void func_001D7D60(void *, s8);
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_0095C390(s32);                             /* extern */
void *func_00970870(s32);                           /* extern */
M2C_UNK func_00971AF0(s32, f32 *);                  /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00971DD0(s32, s32);                    /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00973C70(void *, f32 *);               /* extern */
s32 func_00B1E0B0(s32);                             /* extern */

void func_00B1ED10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    u32 temp_v0;
    void *temp_s4_2;
    void *temp_v0_2;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        if (arg0 == 2) {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x208), 1);
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x228), 1);
            temp_v0_2 = ((func_00B1E0B0(arg1) & 0xFF) * 0x10) + temp_v0;
            sp70 = M2C_FIELD(temp_v0_2, f32 *, 0x22C);
            sp74 = M2C_FIELD(temp_v0_2, f32 *, 0x230);
            sp78 = M2C_FIELD(temp_v0_2, f32 *, 0x234);
            sp7C = M2C_FIELD(temp_v0_2, f32 *, 0x238);
            func_00973C70(M2C_FIELD(temp_v0, void **, 0x208), &sp70);
            sp70 += M2C_FIELD(temp_v0, f32 *, 0x2DC);
            sp74 += M2C_FIELD(temp_v0, f32 *, 0x2E0);
            func_00971AF0(M2C_FIELD(temp_v0, s32 *, 0x228), &sp70);
            temp_s4 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x2F8), arg1) & 0xFFFF;
            temp_s4_2 = func_00970870(temp_s4);
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x210), 4, func_0095C390(temp_s4));
            func_00973480(M2C_FIELD(temp_v0, s32 *, 0x20C), (u64) ((s64) M2C_FIELD(temp_s4_2, u8 *, 1) << 0x38) >> 0x3C);
            func_00971DD0(M2C_FIELD(temp_v0, s32 *, 0x228), arg2 & 0xFF);
            if ((arg3 & 0xFF) == 0xFF) {
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x218), 0);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x21C), 0);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x220), 0);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x224), 0);
            } else {
                temp_s3 = func_00224BC0(M2C_FIELD(temp_v0, u8 *, 0x2F8), arg3) & 0xFFFF;
                func_00970870(temp_s3);
                temp_s3_2 = func_0095C390(temp_s3);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x218), 1);
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x218), 6, temp_s3_2);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x21C), 1);
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x21C), 7, M2C_FIELD(((arg3 & 0xFF) + temp_v0), u8 *, 0x2FA) + 1);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x220), 1);
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x220), 7, (arg4 & 0xFF) + 1);
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x224), 1);
            }
        } else {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x208), 0);
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x228), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x218), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x21C), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x220), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x224), 0);
        }
    }
}
