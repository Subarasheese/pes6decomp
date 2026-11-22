/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 Pes6Random_Below(s32);
extern char D_009BF380[];

u8 func_00930080(void) {
    return *(((char *)D_009BF380) + (Pes6Random_Below(6) & 0xFFFF));
}
