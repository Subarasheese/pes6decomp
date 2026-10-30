/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0084A790(s32);
M2C_UNK func_00844100();                            /* extern */
void *func_00847280(s64);                           /* extern */
M2C_UNK func_00859020(M2C_UNK *, void *);           /* extern */
extern char D_008B21C0[];

s32 func_008118A0(s64 arg0, s32 arg1) {
    s8 temp_a0;
    void *temp_v0;

    temp_v0 = func_00847280((s64) (arg0 << 0x30) >> 0x30);
    if (temp_v0 != NULL) {
        if (arg1 >= 0x1388) {
            temp_a0 = M2C_FIELD(temp_v0, s8 *, 0x50);
            switch (temp_a0) {                      /* irregular */
            case 4:
                break;
            case 2:
                if (arg1 >= 0x3E81) {
                    M2C_FIELD(temp_v0, s8 *, 0x50) = 4;
                    if (M2C_FIELD(temp_v0, u8 *, 0x51) == 1) {
                        func_0084A790(1);
                    }
                    func_00859020(((void *)D_008B21C0), temp_v0);
                    func_00844100();
                }
                break;
            default:
                M2C_FIELD(temp_v0, s8 *, 0x50) = 2;
                break;
            case 3:
            case 1:
                M2C_FIELD(temp_v0, s8 *, 0x50) = 2;
                func_00859020(((void *)D_008B21C0), temp_v0);
                break;
            }
            return 0;
        }
        M2C_FIELD(temp_v0, s8 *, 0x50) = 1;
        return 0;
    }
    return -1;
}
