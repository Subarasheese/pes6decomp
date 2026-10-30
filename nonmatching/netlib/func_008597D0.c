/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00844D40(s32, M2C_UNK, s16 *, M2C_UNK); /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_00858C40(M2C_UNK, s32, s32, s16);          /* extern */
extern char D_008B22C0[];

s32 func_008597D0(void) {
    s16 sp20;
    s16 sp22;
    s8 sp24;
    s8 sp25;
    s8 sp26;
    s16 temp_a3;
    s32 temp_a1;
    void *temp_s0;

    temp_s0 = ((void *)D_008B22C0) + ((*func_008472D0() - 1) * 8) + 4;
    func_001C48E8(&sp20, 0, 0x10);
    sp20 = 0xD;
    temp_a3 = *func_008472D0();
    temp_a1 = M2C_FIELD(temp_s0, s32 *, 0);
    sp22 = temp_a3;
    sp24 = (s8) temp_a1;
    sp25 = M2C_FIELD(temp_s0, s8 *, 4);
    sp26 = M2C_FIELD(temp_s0, s8 *, 5);
    sp20 = (s16) (*(s32 *)D_008B22C0);
    if ((*(s32 *)D_008B22C0) != 5) {
        if ((*(s32 *)D_008B22C0) == 4) {
            func_00844D40(func_00858C40(0, temp_a1, (*(s32 *)D_008B22C0), temp_a3), 0x40, &sp20, 0x10);
        }
    } else {
        func_00844D40(func_00858C40(1, temp_a1, (*(s32 *)D_008B22C0), temp_a3), 0x60, &sp20, 0x10);
    }
    return 0;
}
