/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x44];
    void *field_44;
} Fields_arg0;

extern void Pes6Heap_Free(void *);
s32 func_0014AAB0(void *, void *);
s32 func_0027C6F0(void *);
void *func_0027CD20(s32);

void func_0027C690(Fields_arg0 *arg0) {
    void *entry;

    entry = arg0->field_44;
    if (entry != NULL) {
        arg0->field_44 = func_0027CD20(M2C_FIELD(entry, s32 *, 8));
        func_0014AAB0(entry, arg0->field_44);
        func_0027C6F0(arg0);
        Pes6Heap_Free(entry);
    }
}
