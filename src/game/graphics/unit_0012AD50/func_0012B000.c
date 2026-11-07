/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


M2C_UNK func_00100410();                            /* extern */
M2C_UNK func_00101F20(M2C_UNK);                     /* extern */
M2C_UNK func_00102600();                            /* extern */
M2C_UNK func_00102B38();                            /* extern */

typedef struct { s32 p[2]; s32 f8; } F;

s32 func_0012B000(F *arg0) {
    if (arg0->f8 & 1) {
        *(s32 *)0x10000010 = 0x83;
    }
    if (arg0->f8 & 0x80) {
        *(s32 *)0x10000810 = 0x82;
    }
    if (arg0->f8 & 2) {
        func_00102600();
    }
    if (arg0->f8 & 4) {
        func_00102B38();
    }
    if (arg0->f8 & 8) {
        func_00100410();
    }
    if (arg0->f8 & 0x10) {
        func_00101F20(1);
    }
    return 0x3030;
}
