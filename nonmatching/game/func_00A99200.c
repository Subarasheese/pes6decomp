/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0(void *);                          /* extern */
s32 func_009B30B0(s32, u16);                        /* extern */
extern char D_00591DC4[];
extern char D_005926DE[];
extern char D_005926E2[];

void func_00A99200(void *arg0) {
    s32 var_v1;

    if (!(M2C_FIELD(arg0, s32 *, 0xB4) & 0x200)) {
        if ((M2C_FIELD(arg0, s32 *, 0xB0) & 0x200) && (((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926DE)) == 0)) {
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + 1);
        }
        if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x200);
            if ((func_009B30B0(func_0099DFF0(arg0), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0xE) {
                var_v1 = M2C_FIELD(arg0, s32 *, 0xA8) - 1;
                goto block_7;
            }
        }
        return;
    }
    var_v1 = (s32) (*(u8 *)D_005926E2);
block_7:
    M2C_FIELD(arg0, s32 *, 0xA8) = var_v1;
}
