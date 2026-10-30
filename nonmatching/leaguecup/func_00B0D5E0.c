/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
extern void func_00B0FDE0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_00B0C770();                                /* extern */
M2C_UNK func_00B0CBD0(s32, void *);                 /* extern */
M2C_UNK func_00B0F8A0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00B0FF00(M2C_UNK);                     /* extern */
M2C_UNK func_00B10110(M2C_UNK);                     /* extern */

s32 func_00B0D5E0(void) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    u32 temp_v0;
    u32 var_a1;
    void *temp_v1_2;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x141C);
        switch (temp_v1) {                          /* irregular */
        case 0:
            break;
        case 2:
        case 3:
        case 1:
            if ((func_00B0C770() & 0xFFFF) == 0xFFFF) {
                M2C_FIELD(temp_v0, s32 *, 0x141C) = 0;
                var_a0 = 0;
                M2C_FIELD(temp_v0, s8 *, 0x13C5) = 0;
                M2C_FIELD(temp_v0, s8 *, 0x13C4) = 0;
                do {
                    temp_v1_2 = temp_v0 + var_a0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13C6) = 0;
                    var_a0 += 8;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13C7) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13C8) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13C9) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13CA) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13CB) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13CC) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x13CD) = 0;
                } while (var_a0 < 0x28);
                var_a0_2 = 0;
                var_a1 = temp_v0;
                do {
                    M2C_FIELD(var_a1, s16 *, 0x13EE) = 0xFFFF;
                    var_a0_2 += 5;
                    M2C_FIELD(var_a1, s16 *, 0x13F0) = 0xFFFF;
                    M2C_FIELD(var_a1, s16 *, 0x13F2) = 0xFFFF;
                    M2C_FIELD(var_a1, s16 *, 0x13F4) = 0xFFFF;
                    M2C_FIELD(var_a1, s16 *, 0x13F6) = 0xFFFF;
                    var_a1 += 0xA;
                } while (var_a0_2 < 0xA);
                func_00B0CBD0(var_a0_2, (void *) var_a1);
                func_00B0FF00(0);
                func_00B10110(0xFFFF);
                func_00B0FDE0((s32) M2C_FIELD(temp_v0, u8 *, 0x132D));
                func_00B0F8A0(M2C_FIELD(temp_v0, s32 *, 0x141C), 0, 0);
                func_00958000(0x8C);
                func_0026E840(0x84028400);
            }
            break;
        }
    }
    return 0;
}
