/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090F9A0(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00926910(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00591BE4[];
extern char D_00591DC4[];
extern char D_005926FF[];

void func_00BEA440(void) {
    switch ((*(u8 *)D_005926FF)) {                           /* irregular */
    case 4:
    case 1:
        if (((u8) (*(u8 *)D_00591BE4) >> 1) == ((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_00591BE4))) {
            func_0090F9A0(1, (*(u8 *)D_00591BE4));
        }
        if (((u32) (*(u32 *)D_00591DC4) % (u32) ((*(u8 *)D_00591BE4) * 4)) == 0) {
            if ((*(u8 *)D_005926FF) == 1) {
                func_00926910(0, 2);
            } else {
                func_00926910(0, 0);
            }
            return;
        }
        return;
    case 3:
        if (((u8) (*(u8 *)D_00591BE4) >> 1) == ((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_00591BE4))) {
            func_0090F9A0(1, (*(u8 *)D_00591BE4));
        }
        if (((u32) (*(u32 *)D_00591DC4) % (u32) ((*(u8 *)D_00591BE4) * 8)) == 0) {
            func_00926910(1, 1);
        }
        break;
    }
}
