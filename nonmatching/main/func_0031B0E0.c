/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030EA90(u8, int);
extern int func_003387D0(void *, int);
extern s32 func_003389F0(void *, s32, s32);
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK func_00319D50;
extern M2C_UNK func_0031B230;

s32 func_0031B0E0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    if (func_0030EA90(M2C_FIELD(temp_s0, u8 *, 0), (s32) M2C_FIELD(temp_s0, u8 *, 2)) == 0) {
        M2C_FIELD(temp_s0, u8 *, 2) = 0xABU;
        if (func_00341910(1, 5, 0xA) != 0) {
            func_003387D0(arg0, (s32) &func_0031B230);
        } else {
            func_003387D0(arg0, (s32) &func_00319D50);
            func_003389F0(arg0, 0, 0xFF);
            func_003389F0(arg0, 1, 0xFF);
        }
        return 1;
    }
    return 0;
}
