/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00140258();                            /* extern */
M2C_UNK func_00153F78(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_00154018(M2C_UNK *);                       /* extern */
extern char D_005B3744[];
extern char D_005BDA80[];
extern char D_005FC090[];
extern char D_005FC0B8[];
extern char D_005FC0D8[];
extern M2C_UNK func_001418F8;

void func_00141970(void) {
    func_00140258();
    func_001566A8();
    switch (M2C_FIELD(((void *)D_005BDA80), s32 *, 0x1304)) { /* irregular */
    case 2:
        if ((M2C_FIELD(((void *)D_005BDA80), s32 *, 0x1300) == 0) && (func_00154018(((void *)D_005FC0B8)) == 0) && (func_00154018(((void *)D_005FC0D8)) == 0)) {
            func_00153F78(((void *)D_005FC0D8), ((void *)D_005FC090));
            func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x6E), &func_001418F8, (*(s32 *)D_005B3744));
            return;
        }
        func_00136FD8(1, 8);
        return;
    case 3:
    case 1:
        func_00136FD8(1, 0xD);
        return;
    }
}
