/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_001B0AA8(void *, void *);

extern char D_005FBBC8[];

void func_0013D090(s8 *arg0) {
    if (func_001B0AA8(arg0, ((void *)D_005FBBC8)) != 0) {
        *arg0 = 0;
    }
}
