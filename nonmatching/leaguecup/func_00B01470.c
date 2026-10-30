/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B01540(s32);
M2C_UNK func_00AF8DB0();                            /* extern */
M2C_UNK func_00AF8E60();                            /* extern */
M2C_UNK func_00AF93D0(u8);                          /* extern */
M2C_UNK func_00AF9420();                            /* extern */
extern void *D_003EAD54;

void func_00B01470(s32 arg0) {
    s32 temp_s2;
    void *temp_s0;

    temp_s0 = D_003EAD54;
    if (temp_s0 != NULL) {
        temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x5C7) + M2C_FIELD(temp_s0, u8 *, 0x5D0);
        if (temp_s2 >= (func_00B01540(arg0) - 1)) {
            if (func_00B01540(arg0) < 0xC) {
                M2C_FIELD(temp_s0, u8 *, 0x5C7) = (u8) (func_00B01540(arg0) - 1);
                M2C_FIELD(temp_s0, s8 *, 0x5D0) = 0;
            } else {
                M2C_FIELD(temp_s0, u8 *, 0x5C7) = 0xAU;
                M2C_FIELD(temp_s0, s8 *, 0x5D0) = (s8) ((func_00B01540(arg0) - 1) - M2C_FIELD(temp_s0, u8 *, 0x5C7));
            }
            func_00AF9420();
            func_00AF93D0(M2C_FIELD(temp_s0, u8 *, 0x5C7));
        }
        func_00AF8E60();
        func_00AF9420();
        func_00AF8DB0();
    }
}
