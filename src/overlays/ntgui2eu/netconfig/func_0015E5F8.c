/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_001A1E58(u8 *, s32);
extern char D_005FCF00[];
extern s32 D_005BEE14[];

void func_0015E5F8(void) {
    u8 buffer[64];

    D_005BEE14[0] = func_001A1E58((u8 *)D_005FCF00, (int)buffer);
}
