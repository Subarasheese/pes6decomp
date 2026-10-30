/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00154510();                            /* extern */
M2C_UNK func_001B02B0(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_005B57E8[];
extern char D_005BD348[];
extern char D_005BEB80[];

void func_00144080(void) {
    if ((*(s32 *)D_005BD348) == 0) {
        func_00154510();
        func_001B02B0(((void *)D_005B57E8), ((void *)D_005BEB80));
        M2C_FIELD((((void *)D_005BEB80) - 0x1100), s8 *, 0x1310) = 1;
        func_00136FD8(5, 0xF);
        func_001566A8();
    }
}
