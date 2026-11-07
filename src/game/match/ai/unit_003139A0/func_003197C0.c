/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 a;
    u8 b;
} Byte2;

s32 func_003197C0(u8 *obj, s32 index) {
    if (index == 0xFF) {
        return -1;
    }
    return ((Byte2 *)(obj + 0x38))[index].a;
}
