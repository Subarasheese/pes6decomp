/* compiler: ee-gcc-2.9 */
#include "types.h"

extern char D_011D6E00[];

s32 func_00134388(s32 arg0) {
    *(arg0 + ((char *)D_011D6E00)) = 0;
    return (s32) ((char *)D_011D6E00);
}
