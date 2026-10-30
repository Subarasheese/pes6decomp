/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019F560(void);
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005CABF0[];

s32 func_0019F7C8(u32 arg0) {
    func_0019F560();
    func_0019B160(M2C_FIELD(((void *)D_005CABF0), s32 *, 0));
    if (arg0 >= 0x20U) {
        func_0019B140(M2C_FIELD(((void *)D_005CABF0), s32 *, 0));
        return 0;
    }
    func_0019B140(M2C_FIELD(((void *)D_005CABF0), s32 *, -0x5410));
    return (arg0 * 0x10) + 0x01204840;
}
