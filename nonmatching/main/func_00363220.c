/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0061EC60[];
extern char D_0061EC61[];
extern char D_0061EC62[];
extern char D_0061ECF4[];
extern char D_0061ECF5[];

s32 func_00363220(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x12:
        if ((*(u8 *)D_0061EC62) != 0) {
            return -1;
        }
block_16:
    default:
        return 0;
    case 0xA4:
        if ((*(u8 *)D_0061ECF4) != 0) {
            return -1;
        }
        goto block_16;
    case 0xA5:
        if ((*(u8 *)D_0061ECF5) != 0) {
            return -1;
        }
        goto block_16;
    case 0x11:
        if ((*(u8 *)D_0061EC61) != 0) {
            return -1;
        }
        goto block_16;
    case 0x10:
        if ((*(u8 *)D_0061EC60) != 0) {
            return -1;
        }
        goto block_16;
    }
}
