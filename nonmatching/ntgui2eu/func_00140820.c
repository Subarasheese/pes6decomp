/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK, s32 *);                  /* extern */
M2C_UNK func_00140658(s32 *, s32 *);                /* extern */
extern char D_005B3744[];
extern char D_005BEDB4[];
extern char D_011DC410[];
extern M2C_UNK func_001405A8;

void func_00140820(void) {
    if ((*(s32 *)D_011DC410) < (*(s32 *)D_005BEDB4)) {
        func_00140658(((void *)D_011DC410), ((void *)D_005BEDB4));
        return;
    }
    func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x32, ((void *)D_005BEDB4)), &func_001405A8, (*(s32 *)D_005B3744));
}
