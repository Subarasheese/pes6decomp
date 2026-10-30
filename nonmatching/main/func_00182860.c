/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00141E10();                            /* extern */
M2C_UNK func_00141EE0();                            /* extern */
M2C_UNK func_00141FE0(M2C_UNK);                     /* extern */
M2C_UNK func_00181AF0(M2C_UNK);                     /* extern */
M2C_UNK func_00185910();                            /* extern */
M2C_UNK func_001859F0();                            /* extern */
M2C_UNK func_0018D510();                            /* extern */
extern char D_0051FF4C[];

void func_00182860(void) {
    if ((*(u8 *)D_0051FF4C) != 0) {
        func_001859F0();
        func_00141FE0(0xD);
        func_00141EE0();
        func_00141E10();
        func_00181AF0(8);
        func_0018D510();
        func_00141FE0(0x1001);
        func_00185910();
    }
}
