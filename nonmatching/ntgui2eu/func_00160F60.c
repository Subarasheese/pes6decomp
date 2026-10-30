/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00165AE0(s32);                         /* extern */
extern char D_005B58F0[];
extern char D_005B58F8[];
extern char D_011E6BC8[];
extern char D_011E6BCC[];
extern char D_011E6BF8[];

void func_00160F60(void) {
    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), 0, 0);
    }
    if ((*(s32 *)D_005B58F8) != 0) {
        func_001236B8((*(s32 *)D_005B58F8), 0, 0);
    }
    if ((*(s32 *)D_011E6BF8) != 0) {
        if ((*(s32 *)D_011E6BC8) != 0) {
            func_00165AE0((*(s32 *)D_011E6BC8));
        }
    }
    if (*(s32 *)0x5B3704 & 2) {
        if ((*(s32 *)D_011E6BCC) != 0) {
            func_00165AE0((*(s32 *)D_011E6BCC));
        }
    }
}
