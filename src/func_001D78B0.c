/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x57];
    u8 alpha;
} Obj58;

void func_001D78B0(Obj58 *obj, u8 alpha) {
    if (obj == NULL) {
        return;
    }
    obj->alpha = alpha == 0xFF ? 0x80 : alpha >> 1;
}
