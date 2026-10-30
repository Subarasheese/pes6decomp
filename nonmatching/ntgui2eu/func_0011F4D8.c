/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011EE00(s32, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_005B3708[];
extern char D_005B3718[];
extern char D_005B371C[];
extern char D_011D3E40[];
extern char D_011D3EC0[];
extern char D_011D3F40[];
extern char D_011D3FC0[];

void func_0011F4D8(void) {
    func_0011EE00((*(s32 *)D_005B3708), (*(s32 *)D_005B3718), ((void *)D_011D3E40), 0, 0, 0, 0x3F800000);
    func_0011EE00((*(s32 *)D_005B3718), (*(s32 *)D_005B3708), ((void *)D_011D3EC0), 0, 0, 0, 0x3F800000);
    func_0011EE00((*(s32 *)D_005B3718), (*(s32 *)D_005B371C), ((void *)D_011D3F40), 0, 0, 0, 0x3F800000);
    func_0011EE00((*(s32 *)D_005B371C), (*(s32 *)D_005B3718), ((void *)D_011D3FC0), 0, 0, 0, 0x3F800000);
}
