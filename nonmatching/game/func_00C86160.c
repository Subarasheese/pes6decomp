/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00C86220(void);
extern void func_00C8A3D0(void);
extern void func_00C8AA10(s32);
extern char *D_003EA884;

s32 func_00C86160(void) {
    char *obj;
    s32 idx;

    obj = D_003EA884;
    if (obj != NULL) {
        idx = *(s32 *)(obj + 0x24);
        if (idx >= 2) {
            if (*(s32 *)(obj + 0xC + idx * 4) == 0) {
                func_00C8A3D0();
                func_00C8AA10(0);
                *(s32 *)(obj + 0xC + *(s32 *)(obj + 0x24) * 4) += 1;
            }
            *(s32 *)(obj + 0x30) |= 1 << *(s32 *)(obj + 0x24);
            *(s32 *)(obj + 0xC + *(s32 *)(obj + 0x24) * 4) = 0;
            *(s32 *)(obj + 0x24) += 1;
            return 1;
        }
        func_00C86220();
        return 0;
    }
    return 1;
}
