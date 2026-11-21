/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x10];
    u32 field_10;
} Fields;

extern void Pes6Heap_Free(void *);
extern s32 func_00BC4F70(u32, u32);
extern s32 func_00BE6B70(void *);

s32 func_00BE69E0(Fields *arg0) {
    if (func_00BC4F70(-1U, arg0->field_10) != 0) {
        M2C_FIELD(arg0, s32(**)(void *), 4) = func_00BE6B70;
        Pes6Heap_Free((void *)arg0->field_10);
    }
    return 0;
}
