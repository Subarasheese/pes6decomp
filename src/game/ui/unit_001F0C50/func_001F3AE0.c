/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x8];
    s32 key;
    u8 padC[0x4];
    u64 value;
} Cur;

extern Cur *D_0052B234[];
u64 func_001E53C0(s32, s32);

void func_001F3AE0(s32 arg) {
    if (D_0052B234[0] != NULL) {
        D_0052B234[0]->value = func_001E53C0(arg, D_0052B234[0]->key);
    }
}
