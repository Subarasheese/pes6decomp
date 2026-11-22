/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_0065D870[];

void func_0063E1B0(s32 arg0, s32 arg1) {
    if ((arg0 >= 0) && (arg0 < 0x24)) {
        *(((char *)D_0065D870) + arg0) = (s8) arg1;
    }
}
