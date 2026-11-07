/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F87E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_002F7970();                                /* extern */
s32 func_008F9D30(s32);                             /* extern */
extern char D_003AE982[];
extern char D_003AE992[];
extern char D_003AE99B[];
extern char D_00591DB5[];
extern char D_00591DB7[];

s32 func_0026BED0(s32 arg0) {
    u8 temp_v1;

    if ((*(s8 *)D_00591DB5) == 0) {
        return 0;
    }
    if ((*(u8 *)D_003AE99B) != 0) {
        temp_v1 = (*(u8 *)D_003AE99B) - 1;
        (*(u8 *)D_003AE99B) = temp_v1;
        if (!(temp_v1 & 0xFF)) {
            func_001F87E0(0, 0x40);
        }
    }
    if ((*(u8 *)D_00591DB7) != 0) {
        return 0;
    }
    if (((func_002F7970() != 0) || ((*(u8 *)D_003AE992) != 0)) && ((*(s8 *)D_003AE982) == 0)) {
        return 0;
    }
    return func_008F9D30(arg0);
}
