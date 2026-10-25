/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    u64 value;
} Cur;

extern Cur *D_0052B234[];

u64 func_001F3B20(void) {
    if (D_0052B234[0] == NULL) {
        return 0;
    }
    return D_0052B234[0]->value;
}
