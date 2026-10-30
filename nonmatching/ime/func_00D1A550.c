/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00D18CE0(u8);                              /* extern */
extern s32 D_003EB36C;
extern char D_00D3958C[];
extern char D_00D395A4[];

s32 func_00D1A550(void) {
    if (((*(u8 *)D_00D395A4) & 1) != 1) {
        D_003EB36C = 1;
        if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3E) >> 0x3F) != 0) {
            if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3C) >> 0x3F) == 0) {
                func_0026E840(0x84028400);
            } else if ((*(s32 *)D_00D3958C) == 3) {
                func_0026E840(0x84028400);
            } else {
                goto block_9;
            }
        } else {
block_9:
            if (func_00D18CE0((*(u8 *)D_00D395A4)) >= 0) {
                func_0026E840(0x84028400);
            }
        }
        return -1;
    }
    return 0;
}
