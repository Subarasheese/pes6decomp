/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00985C60(s32);                         /* extern */
s32 func_00985C70(void **);                         /* extern */
void *func_009E84F0();                              /* extern */
s32 func_009E9EC0();                                /* extern */
s32 func_009F4A40();                                /* extern */
extern void *D_00A7DF60;
extern char D_00A7DF64[];
extern M2C_UNK func_009E7AA0;
extern M2C_UNK func_009E7AF0;
extern M2C_UNK func_009E7B00;
extern M2C_UNK func_009E7B10;
extern M2C_UNK func_009E7B20;
extern M2C_UNK func_009E7B50;
extern M2C_UNK func_009E7B60;
extern M2C_UNK func_009E7BD0;
extern M2C_UNK func_009E7BE0;
extern M2C_UNK func_009E7C20;
extern M2C_UNK func_009E7C60;

s32 func_009E7960(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_009E84F0();
    if (temp_v0 == NULL) {
        return 0;
    }
    func_001C48E8(&D_00A7DF60, 0, 8);
    D_00A7DF60 = temp_v0;
    M2C_FIELD(temp_v0, void ***, 0x58) = &D_00A7DF60;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x78) = &func_009E7C60;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x7C) = &func_009E7C20;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x80) = &func_009E7BE0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x84) = &func_009E7BD0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x88) = &func_009E7B60;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x8C) = &func_009E7B50;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x90) = &func_009E7B20;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x94) = &func_009E7B10;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x98) = &func_009E7B00;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x9C) = &func_009E7AF0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0xA0) = &func_009E7AA0;
    M2C_FIELD(temp_v0, s32 *, 4) = arg0;
    M2C_FIELD(temp_v0, s32 *, 0) = 6;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x44) = 6;
    if (func_00985C70(&D_00A7DF60) == 0) {
        func_00985C60(func_009F4A40());
    }
    (*(s32 *)D_00A7DF64) = func_009E9EC0();
    return 1;
}
