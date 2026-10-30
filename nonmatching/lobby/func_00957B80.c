/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008226A0();                            /* extern */
M2C_UNK func_008247A0(M2C_UNK);                     /* extern */
M2C_UNK func_00824BF0(M2C_UNK);                     /* extern */
M2C_UNK func_00824C10(M2C_UNK);                     /* extern */
M2C_UNK func_0082B030();                            /* extern */
void *func_0082C2A0();                              /* extern */
M2C_UNK func_00832D40(M2C_UNK);                     /* extern */
M2C_UNK func_00832E10(M2C_UNK);                     /* extern */
s32 func_00936B90();                                /* extern */
M2C_UNK func_00951F30(M2C_UNK);                     /* extern */
M2C_UNK func_00951FE0(M2C_UNK);                     /* extern */
M2C_UNK func_00980690();                            /* extern */
M2C_UNK func_00D0FDD0();                            /* extern */
extern char D_008A64A0[];
extern char D_008A64C8[];
extern char D_008A64CC[];
extern char D_008A7428[];
extern char D_008AA11C[];
extern char D_008AA120[];
extern char D_008AA124[];

s32 func_00957B80(void) {
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        return 2;
    }
    if (temp_s1 != NULL) {
        M2C_FIELD(temp_s1, s8 *, 0x139A9) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x152AC) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x152AD) = 0;
        M2C_FIELD(temp_s1, s16 *, 0x153AA) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x153B0) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x153B4) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x153B8) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x153BC) = 0;
        func_00980690();
        func_00824C10(0);
        func_00824BF0(0);
        func_00D0FDD0();
        (*(s32 *)D_008AA11C) = 0;
        (*(s32 *)D_008AA120) = 0;
        (*(s32 *)D_008AA124) = 0;
        func_008247A0(0);
        func_008226A0();
        func_00951FE0(0);
        func_00951F30(0);
        (*(s8 *)D_008A64C8) = 1;
        func_001C48E8(((void *)D_008A64CC), 0, 0xF5C);
        func_001C48E8(((void *)D_008A7428), 0, 0xF5C);
        func_001C48E8(temp_v0 + 0x28414, 0, 0x36B4);
        func_001C48E8(temp_v0 + 0x2BAC8, 0, 0x36B4);
        func_001C48E8(temp_v0 + 0x2F17C, 0, 0x40DC);
        M2C_FIELD(temp_s1, s32 *, 0x117F0) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x11825) = 0;
        func_00832E10(0);
        func_00832D40(0);
        (*(s32 *)D_008A64A0) = -1;
        func_0082B030();
        return 4;
    }
    return 2;
}
