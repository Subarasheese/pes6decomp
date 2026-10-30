/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_001D5A10(M2C_UNK);                         /* extern */
M2C_UNK func_001D5EE0(M2C_UNK, s32);                /* extern */
s32 func_001DA380(M2C_UNK);                         /* extern */
s32 func_001DD3C0(M2C_UNK);                         /* extern */
M2C_UNK func_001DD680(M2C_UNK, s32);                /* extern */
s32 func_001E6E10(s32);                             /* extern */
M2C_UNK func_001E7370(s32, s32);                    /* extern */
s32 func_001F01D0(s32);                             /* extern */
M2C_UNK func_001F04F0(s32, s32);                    /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
M2C_UNK func_0099ABF0();                            /* extern */
extern char D_00A7DDC0[];
extern char D_00A7DDC4[];
extern char D_00A7DDC8[];
extern char D_00A7DDCC[];
extern char D_00A7DDD0[];
extern char D_00A7DDD4[];
extern char D_00A7DDD8[];

void func_009CDC00(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    func_001C48E8(((void *)D_00A7DDC0), 0, 0x1C);
    if (func_001DA380(2) == 0) {
        func_0099ABF0();
        (*(s32 *)D_00A7DDC0) = 1;
    }
    if (func_001DD3C0(1) == 0) {
        func_001DD680(1, arg0 + 4);
        (*(s32 *)D_00A7DDC4) = 1;
    }
    temp_v0 = func_0021E000(0x73);
    if (func_001E6E10(temp_v0) == 0) {
        func_001E7370(temp_v0, arg0);
        (*(s32 *)D_00A7DDC8) = 1;
    }
    temp_v0_2 = func_0021E000(0x74);
    if (func_001E6E10(temp_v0_2) == 0) {
        func_001E7370(temp_v0_2, arg0);
        (*(s32 *)D_00A7DDCC) = 1;
    }
    temp_v0_3 = func_0021DF90(5);
    if (func_001F01D0(temp_v0_3) == 0) {
        func_001F04F0(temp_v0_3, arg0 + 4);
        (*(s32 *)D_00A7DDD0) = 1;
    }
    if (func_001D5A10(0x1020E) == 0) {
        func_001D5EE0(0x1020E, arg0 + 4);
        (*(s32 *)D_00A7DDD4) = 1;
    }
    if (func_001D5A10(0x10200) == 0) {
        func_001D5EE0(0x10200, arg0 + 4);
        (*(s32 *)D_00A7DDD8) = 1;
    }
}
