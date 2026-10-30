/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_001B77F0(s32);
M2C_UNK func_001C4730(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_0090AE10(s32);                         /* extern */
extern char D_003AE976[];
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char Pes6MatchSquads[];
extern void *D_00923FC8;

s32 func_0090B2E0(void) {
    s16 temp_s1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;

    temp_s1 = M2C_FIELD(D_00923FC8, s16 *, 0xDFA);
    var_s0 = 5;
    func_001B77F0(3);
    switch (temp_s1) {                              /* irregular */
    case 2:
        func_008B34C0();
        func_001BC2B0();
        var_s0 = 7;
        M2C_FIELD(D_00923FC8, s8 *, 0x24) = 1;
        (*(s8 *)D_003AE976) = 2;
        break;
    case 1:
        func_008B34C0();
        func_001BC2B0();
        var_s1 = 0;
        var_s0_2 = 0;
        do {
            if (M2C_FIELD((D_00923FC8 + var_s0_2), u16 *, 8) == 0x11E) {
                func_0090AE10((var_s1 + 0x126) & 0xFFFF);
            }
            var_s1 += 1;
            var_s0_2 += 2;
        } while (var_s1 < 2);
        func_001C4730(((void *)Pes6MatchSquads), D_00923FC8 + 0xE18, 0xD200);
        var_s0 = 1;
        D_003E9E88 = M2C_FIELD(D_00923FC8, u8 *, 0xA0);
        D_003E9E89 = M2C_FIELD(D_00923FC8, u8 *, 0xA1);
        break;
    case 0:
        M2C_FIELD(D_00923FC8, s8 *, 0xDF8) = 1;
        break;
    }
    return var_s0;
}
