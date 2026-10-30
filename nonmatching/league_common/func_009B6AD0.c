/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B79F0(s32);
extern void * func_00229380(void);
extern u32 func_009B7C90(void);
extern u8 func_00225820(void);
extern s32 func_009B7B30(s32);
M2C_UNK func_00225680(s32);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s64 func_00949130(u8, M2C_UNK, u8, u8);             /* extern */
s32 func_00995330(u8, s32);                         /* extern */
M2C_UNK func_009B5940(s8);                          /* extern */
M2C_UNK func_009B5A10(s64);                         /* extern */
s32 func_009B71E0(u8);                              /* extern */
extern char D_00591C09[];

s32 func_009B6AD0(void) {
    s32 temp_s2;
    s32 temp_v0_2;
    s64 temp_v0_4;
    s8 temp_v0_3;
    u32 temp_v0;
    u8 *temp_s1;
    u8 temp_a3;
    u8 temp_v1;
    u8 var_a2;

    temp_s1 = func_00229380();
    temp_v0 = func_009B7C90();
    if (temp_v0 != 0) {
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x238);
        switch (temp_v0_2) {                        /* irregular */
        case 1:
            temp_v0_3 = M2C_FIELD(temp_v0, s8 *, 0x22D);
            if (temp_v0_3 == 0) {
                if ((func_009B7B30((s32) M2C_FIELD(temp_v0, u8 *, 0x22C)) == 1) || (func_009B79F0((s32) M2C_FIELD(temp_v0, u8 *, 0x22C)) == 1)) {
                    M2C_FIELD(temp_v0, s8 *, 0x22D) = 1;
                    func_0026E840(0x8400F802);
                }
            } else if (temp_v0_3 == 1) {
                temp_s2 = func_00225820() & 0xFF;
                func_00225680(temp_s2);
                if ((*(u8 *)D_00591C09) != 4) {
                    if (((func_009B71E0(M2C_FIELD(temp_v0, u8 *, 0x22C)) & 0xFF) != 0xFF) && ((func_009B71E0(M2C_FIELD(temp_v0, u8 *, 0x22C)) & 0xFF) != 0xFE)) {
                        M2C_FIELD(temp_v0, s8 *, 0x22D) = 0;
                        func_0026E840(0x8400F802);
                    } else {
                        temp_v1 = *temp_s1;
                        if ((temp_v1 == 0xB) || (temp_v1 == 0xD)) {
                            M2C_FIELD(temp_v0, s8 *, 0x22D) = 0;
                            func_0026E840(0x8400F802);
                        }
                    }
                } else if ((func_00995330(M2C_FIELD(temp_v0, u8 *, 0x22C), temp_s2) & 0xFF) != 0xFF) {
                    M2C_FIELD(temp_v0, s8 *, 0x22D) = 0;
                    func_0026E840(0x8400F802);
                }
            }
            func_009B5940(M2C_FIELD(temp_v0, s8 *, 0x22D));
            break;
        case 0:
            temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x234);
            if ((s32) temp_a3 < 0xA) {
                var_a2 = temp_a3;
            } else {
                var_a2 = 0xA;
            }
            temp_v0_4 = func_00949130(M2C_FIELD(temp_v0, u8 *, 0x22C), 0, var_a2, temp_a3);
            M2C_FIELD(temp_v0, u8 *, 0x22C) = (u8) temp_v0_4;
            func_009B5A10((s64) (temp_v0_4 << 0x38) >> 0x38);
            func_0026E840(0x8400F802);
            break;
        }
    }
    return 0;
}
