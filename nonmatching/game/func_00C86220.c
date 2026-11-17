/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00C86770(void);
extern void func_002CB4D0(s32);
extern void func_0020CC80(void);
extern char *D_003EA884;

s32 func_00C86220(void) {
    char *obj;
    s32 idx;

    obj = D_003EA884;
    if (obj != NULL) {
        idx = *(s32 *)(obj + 0x24);
        if (idx > 0) {
            if (*(s32 *)(obj + 0xC + idx * 4) == 0) {
                func_002CB4D0(0x14);
                func_0020CC80();
                *(s32 *)(obj + 0xC + *(s32 *)(obj + 0x24) * 4) += 1;
            }
            *(s32 *)(obj + 0x30) |= 1 << *(s32 *)(obj + 0x24);
            *(s32 *)(obj + 0xC + *(s32 *)(obj + 0x24) * 4) = 0;
            *(s32 *)(obj + 0x24) += 1;
            return 1;
        }
        func_00C86770();
        return 0;
    }
    return 1;
}
