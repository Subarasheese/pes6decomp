/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_001C7E10(s32, void *);
extern char D_0052B260[];

void *func_001F42F0(s32 arg0) {
    s32 i;
    char *p = D_0052B260;

    for (i = 0; i < 8; i++, p += 0x18) {
        if (*(u8 *)(p + 0x14) != 0) {
            if (func_001C7E10(arg0, p + 0x10) == 0) {
                return D_0052B260 + i * 0x18;
            }
        }
    }
    return 0;
}
