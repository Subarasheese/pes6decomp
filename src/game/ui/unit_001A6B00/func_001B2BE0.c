/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 field_0;
    void *field_4;
    u8 pad_8[0x3C];
    void *field_44;
} Fields_arg0;

extern void Pes6Heap_Free(void *);
void *func_001B06F0(void *);
s32 func_001B2CB0(void *, void *, s32);

void func_001B2BE0(Fields_arg0 *arg0) {
    void *entry;
    void *entry2;

    entry = arg0->field_4;
    entry2 = func_001B06F0(arg0->field_44);
    Pes6Heap_Free(arg0->field_44);
    func_001B2CB0(entry, entry2, arg0->field_0);
    Pes6Heap_Free(entry2);
    M2C_FIELD(entry, s8 *, 0x64) = 2;
}
