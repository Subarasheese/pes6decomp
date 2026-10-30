/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_0098A8B0(u8);                          /* extern */
M2C_UNK func_0099EAE0(void *);                      /* extern */
M2C_UNK func_00BF1360(void *, M2C_UNK);             /* extern */
s32 func_00BF3EA0(void *);                          /* extern */

s32 func_009ECDE0(void *arg0) {
    s32 var_s0;

    var_s0 = 0xFF;
    if (M2C_FIELD(arg0, s32 *, 0x9C) == 0) {
        if ((func_002DCA30() == 0) && (M2C_FIELD(arg0, u8 *, 0x24) == 0)) {
            func_0099EAE0(arg0);
        }
        var_s0 = func_00BF3EA0(arg0) & 0xFF;
        switch (var_s0) {                           /* irregular */
        case 5:
            M2C_FIELD(arg0, s8 *, 0x4C) = 0xD;
            M2C_FIELD(arg0, s32 *, 0x9C) = 1;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x9C) = 4;
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x9C) = 2;
            func_0098A8B0(M2C_FIELD(arg0, u8 *, 0x48));
            break;
        case 1:
            M2C_FIELD(arg0, s8 *, 0x4C) = 1;
            func_00BF1360(arg0, 0);
            M2C_FIELD(arg0, s32 *, 0x9C) = 1;
            func_0098A8B0(M2C_FIELD(arg0, u8 *, 0x48));
            break;
        case 0:
            M2C_FIELD(arg0, s8 *, 0x4C) = 0;
            func_00BF1360(arg0, 0);
            M2C_FIELD(arg0, s32 *, 0x9C) = 1;
            func_0098A8B0(M2C_FIELD(arg0, u8 *, 0x48));
            break;
        }
    }
    return var_s0;
}
