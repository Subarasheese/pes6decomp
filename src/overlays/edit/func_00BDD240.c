/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x44];
    void *field_44;
} Fields_arg0;

extern void Pes6Heap_Free(void *);
extern s32 func_00153FD0(s32, s32, s32);
extern void *func_001C4730(void *, void *, u32);

extern char D_00CE57F0[];

void func_00BDD240(Fields_arg0 *arg0) {
    s32 value;
    s32 value2;
    s8 *entry;

    entry = arg0->field_44;
    value = M2C_FIELD(entry, s32 *, 4);
    value2 = func_00153FD0(0xB, 1, value);
    (*(s32 *)D_00CE57F0) = value2;
    func_001C4730((s8 *)value2, entry + 0x20, (u32)value);
    Pes6Heap_Free(arg0->field_44);
}
