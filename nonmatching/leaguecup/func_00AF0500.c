/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AF2100(s32);
extern u32 func_00AEFF50(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_00AEECE0();                                /* extern */
M2C_UNK func_00AEF8A0(s32);                         /* extern */
M2C_UNK func_00AF2320(s32, u8, M2C_UNK);            /* extern */
M2C_UNK func_00AF2930(M2C_UNK);                     /* extern */
M2C_UNK func_00AF2AB0(M2C_UNK);                     /* extern */

s32 func_00AF0500(void) {
    s32 temp_v1;
    s32 var_a0;
    u32 temp_v0;
    void *temp_v1_2;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x2330);
        switch (temp_v1) {                          /* irregular */
        case 0:
            break;
        case 3:
        case 2:
        case 1:
            if ((func_00AEECE0() & 0xFFFF) == 0xFFFF) {
                M2C_FIELD(temp_v0, s32 *, 0x2330) = 0;
                M2C_FIELD(temp_v0, u8 *, 0x2084) = 1U;
                var_a0 = 0;
                M2C_FIELD(temp_v0, s8 *, 0x21CE) = 0;
                M2C_FIELD(temp_v0, s8 *, 0x21CD) = 0;
                do {
                    temp_v1_2 = temp_v0 + var_a0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21CF) = 0;
                    var_a0 += 8;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D0) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D1) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D2) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D3) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D4) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D5) = 0;
                    M2C_FIELD(temp_v1_2, s8 *, 0x21D6) = 0;
                } while (var_a0 < 0x20);
                M2C_FIELD(temp_v0, s16 *, 0x21F0) = 0xFFFF;
                M2C_FIELD(temp_v0, s16 *, 0x21F2) = 0xFFFF;
                M2C_FIELD(temp_v0, s16 *, 0x21F4) = 0xFFFF;
                M2C_FIELD(temp_v0, s16 *, 0x21F6) = 0xFFFF;
                func_00AEF8A0(var_a0);
                func_00AF2930(0);
                func_00AF2320(M2C_FIELD(temp_v0, s32 *, 0x2330), M2C_FIELD(temp_v0, u8 *, 0x2084), 0);
                func_00AF2AB0(0xFFFF);
                func_00AF2100((s32) M2C_FIELD(temp_v0, u8 *, 0x2087));
                func_00958000(0x8C);
                func_0026E840(0x84028400);
            }
            break;
        }
    }
    return 0;
}
