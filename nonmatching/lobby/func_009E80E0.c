/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00985C60(u32);
extern s32 func_00985C70(void);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
void *func_0082C2A0();                              /* extern */
void *func_009E84F0();                              /* extern */
s32 func_009E9EC0();                                /* extern */
u32 func_009F4A40();                                /* extern */
extern void *D_00A7DF80;
extern char D_00A7DF84[];
extern M2C_UNK func_009E8260;
extern M2C_UNK func_009E82B0;
extern M2C_UNK func_009E82C0;
extern M2C_UNK func_009E82F0;
extern M2C_UNK func_009E8300;
extern M2C_UNK func_009E8330;
extern M2C_UNK func_009E8340;
extern M2C_UNK func_009E83D0;
extern M2C_UNK func_009E83E0;
extern M2C_UNK func_009E8420;
extern M2C_UNK func_009E8470;

s32 func_009E80E0(s32 arg0) {
    s32 var_s3;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_009E84F0();
    if (temp_v0 == NULL) {
        return 0;
    }
    func_001C48E8(&D_00A7DF80, 0, 8);
    D_00A7DF80 = temp_v0;
    M2C_FIELD(temp_v0, void ***, 0x58) = &D_00A7DF80;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x78) = &func_009E8470;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x7C) = &func_009E8420;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x80) = &func_009E83E0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x84) = &func_009E83D0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x88) = &func_009E8340;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x8C) = &func_009E8330;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x90) = &func_009E8300;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x94) = &func_009E82F0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x98) = &func_009E82C0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x9C) = &func_009E82B0;
    temp_s2 = temp_v0 + 0x10;
    M2C_FIELD(temp_v0, M2C_UNK **, 0xA0) = &func_009E8260;
    var_s3 = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x44) = 0;
    temp_v0_2 = func_0082C2A0();
    if (temp_v0_2 != NULL) {
        var_s3 = M2C_FIELD(temp_v0_2, s32 *, 0x37D8);
        if (var_s3 < 0) {
            var_s3 = 0;
        }
    }
    M2C_FIELD(temp_s2, s32 *, 0x3C) = var_s3;
    M2C_FIELD(temp_s2, s32 *, 0x40) = arg0;
    if (func_00985C70() == 0) {
        func_00985C60(func_009F4A40());
    }
    (*(s32 *)D_00A7DF84) = func_009E9EC0();
    return 1;
}
