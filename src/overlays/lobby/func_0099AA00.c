/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s64 func_001540C0();                                /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00209C60(s32, M2C_UNK);                /* extern */
M2C_UNK func_0020A4B0(s32, M2C_UNK, s32);           /* extern */
s32 func_0020A550(M2C_UNK);                         /* extern */
M2C_UNK func_002CB730(s64);                         /* extern */
extern char D_00A7D810[];
extern char D_00A7D820[];

void func_0099AA00(void) {
    s32 temp_v0;
    u16 var_s1;
    u16 var_s1_2;
    u16 var_s1_3;
    u16 var_s1_4;
    s64 temp_s0;

    if ((*(s32 *)D_00A7D810) == 0) {
        func_001C48E8(((void *)D_00A7D820), 0, 0xD4);
        temp_s0 = (s8) func_001540C0();
        func_002CB730(5);
        temp_v0 = func_0020A550(0xE8);
        (*(s32 *)D_00A7D810) = temp_v0;
        func_00209C60(temp_v0, 0);
        var_s1 = 0;
        do {
            func_0020A4B0((*(s32 *)D_00A7D810), 1, var_s1);
            var_s1 += 1;
        } while (var_s1 <= 0x38);
        func_00209C60((*(s32 *)D_00A7D810), 0);
        var_s1_2 = 0x39;
        do {
            func_0020A4B0((*(s32 *)D_00A7D810), 1, var_s1_2);
            var_s1_2 += 1;
        } while (var_s1_2 <= 0x3F);
        func_00209C60((*(s32 *)D_00A7D810), 0);
        var_s1_3 = 0x40;
        do {
            func_0020A4B0((*(s32 *)D_00A7D810), 1, var_s1_3);
            var_s1_3 += 1;
        } while (var_s1_3 <= 0xCB);
        func_00209C60((*(s32 *)D_00A7D810), 2);
        func_00209C60((*(s32 *)D_00A7D810), 0);
        var_s1_4 = 0x112;
        do {
            func_0020A4B0((*(s32 *)D_00A7D810), 1, var_s1_4);
            var_s1_4 += 1;
        } while (var_s1_4 <= 0x118);
        func_00209C60((*(s32 *)D_00A7D810), 0);
        func_0020A4B0((*(s32 *)D_00A7D810), 1, 0);
        func_002CB730(temp_s0);
    }
}
