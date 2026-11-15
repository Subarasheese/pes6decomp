/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Random_Below(M2C_UNK);                         /* extern */
extern char D_0051FF51[];

void func_001A3340(s32 arg0) {
    if (arg0 == 1) {
        if ((Pes6Random_Below(0xA) & 0xFFFF) <= 6) {
            (*(s8 *)D_0051FF51) = 1;
            return;
        }
        (*(s8 *)D_0051FF51) = 2;
        return;
    }
    (*(s8 *)D_0051FF51) = 0;
}
