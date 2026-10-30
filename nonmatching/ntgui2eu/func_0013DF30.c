/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_00135080(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_001514E8(s32, s32, s32);               /* extern */
extern char D_005B3744[];
extern char D_005BD258[];
extern char D_005BED84[];
extern char D_011DA030[];

s32 func_0013DF30(void *arg0) {
    s32 temp_a2;

    if ((*(s32 *)D_011DA030) != 0) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 8);
        (*(s32 *)D_005BD258) -= 1;
        if ((*(s32 *)D_005BD258) <= 0) {
            M2C_FIELD(((void *)D_005B3744), s32 *, 0) = (s32) (*(s32 *)D_011DA030);
            if ((temp_a2 == 0) && ((*(s32 *)D_005BED84) == 2)) {
                func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x70, (*(s32 *)D_011DA030), temp_a2), 0, M2C_FIELD(((void *)D_005B3744), s32 *, 0));
                return 1;
            }
            func_001514E8(M2C_FIELD(((void *)D_005B3744), s32 *, 0x3744), (*(s32 *)D_011DA030), temp_a2);
            return 1;
        }
    }
    return 0;
}
