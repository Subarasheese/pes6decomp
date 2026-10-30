/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00A439C0();                            /* extern */
extern char D_005926E0[];

void func_00A021F0(void *arg0) {
    func_00A439C0();
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x62) = (u8) (*(u8 *)D_005926E0);
    func_00207390(M2C_FIELD(arg0, s32 *, 4), 2);
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = 2;
}
