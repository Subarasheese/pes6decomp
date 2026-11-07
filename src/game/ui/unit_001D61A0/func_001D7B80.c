/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x48];
    s16 *value;
} Obj4C;

s16 func_001D7B80(Obj4C *obj) {
    if (obj == NULL) {
        return 0;
    }
    return *obj->value;
}
