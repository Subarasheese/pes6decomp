/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0082C0A0();                            /* extern */
M2C_UNK func_00857B70(void *);                      /* extern */
M2C_UNK func_00D0FDD0();                            /* extern */
extern void *D_008A4398;
extern char D_008A5F70[];

s32 func_0082BF30(void) {
    s32 var_s2;
    void *temp_s1;
    void *temp_s3;

    temp_s1 = D_008A4398;
    func_0082C0A0();
    func_00D0FDD0();
    if (temp_s1 != NULL) {
        M2C_FIELD(temp_s1, s32 *, 0x49E8) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x139A9) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x152AC) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x152AD) = 0;
        M2C_FIELD(temp_s1, s16 *, 0x153AA) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x153B0) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x153B4) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x153B8) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x153BC) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x117F0) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x11825) = 0;
        var_s2 = 0;
        M2C_FIELD(temp_s1, s32 *, 0xF8A0) = 0;
        do {
            temp_s3 = temp_s1 + (var_s2 * 0x38);
            func_00857B70(temp_s3 + 0xFE6C);
            var_s2 += 1;
            M2C_FIELD(temp_s3, s32 *, 0xFE68) = 0;
            M2C_FIELD(temp_s3, s32 *, 0xFE64) = 0;
        } while (var_s2 < 8);
    }
    if (((void *)D_008A5F70) != NULL) {
        func_001C48E8(((void *)D_008A5F70) + 0x3AD0, 0, 0x16C8);
        func_001C48E8(((void *)D_008A5F70) + 0x5434, 0, 0xBC);
        func_001C48E8(((void *)D_008A5F70) + 0x54F0, 0, 0x48);
        M2C_FIELD(((void *)D_008A5F70), s32 *, 0x5560) = 0;
        M2C_FIELD(((void *)D_008A5F70), s8 *, 0x5564) = 0;
    }
    return 1;
}
