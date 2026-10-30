/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002E33D0(s32);                         /* extern */
s32 func_00B90090(s32, M2C_UNK);                    /* extern */
s32 func_00B91390();                                /* extern */
M2C_UNK func_00BB1620(s32, u8);                     /* extern */
M2C_UNK func_00BB1760(u8, u8);                      /* extern */
M2C_UNK func_00BB1910(s32, u8, u8);                 /* extern */
M2C_UNK func_00BB1CE0(s32, u8);                     /* extern */
extern char D_00CE4820[];
extern char D_00CE4824[];

void func_00BB1560(void *arg0) {
    s32 temp_s1;
    u8 temp_s0;

    if (func_00B91390() == 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 8);
        if (func_00B90090(temp_s1, 0x14) != 0) {
            func_00BB1CE0(temp_s1, M2C_FIELD(arg0, u8 *, 0x14));
        }
        if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
            func_00BB1910(temp_s1, M2C_FIELD(arg0, u8 *, 0x14), M2C_FIELD(arg0, u8 *, 0x13));
        }
        temp_s0 = M2C_FIELD(arg0, u8 *, 0x14);
        func_00BB1760(temp_s0, M2C_FIELD(arg0, u8 *, 0x13));
        func_00BB1620(temp_s1, temp_s0);
        return;
    }
    func_002E33D0((*(s32 *)D_00CE4820));
    func_001EDD90((*(s32 *)D_00CE4824));
}
