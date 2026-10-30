/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B21C0[];
extern char D_008B22BD[];

s32 func_00858BE0(s32 arg0, s16 arg1) {
    if ((*(s8 *)D_008B22BD) != 0) {
        return -1;
    }
    M2C_FIELD(((arg0 * 2) + ((void *)D_008B21C0)), s16 *, 0xF0) = arg1;
    return 0;
}
