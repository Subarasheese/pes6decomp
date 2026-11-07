/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern long func_008F8578(void *);
extern void func_008F8908(void *);
u32 func_008F87E0(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x828) != 0) || (M2C_FIELD(arg0, s32 *, 0x84C) < arg1)) {
        func_008F8908(arg0);
        *(s32 *)0x10002000 = 0x40000000;
        M2C_FIELD(arg0, s32 *, 0x828) = 0;
        M2C_FIELD(arg0, s32 *, 0x82C) = 0x40000000;
        M2C_FIELD(arg0, u32 *, 0x848) = (u32) ((s64) (func_008F8578(arg0) << 0x20) >> 0x20);
        M2C_FIELD(arg0, s32 *, 0x84C) = 0x20;
    }
    return (u32) M2C_FIELD(arg0, u32 *, 0x848) >> -arg1;
}
