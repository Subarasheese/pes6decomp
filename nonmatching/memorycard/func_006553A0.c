/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EDC0[];
extern char D_0065EE7D[];

void func_006553A0(s8 arg0) {
    if ((*(u8 *)D_0065EE7D) != (arg0 & 0xFF)) {
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xBD) = arg0;
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xBC) = 1;
    }
}
