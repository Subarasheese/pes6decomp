/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x1];
    s8 field_1;
    u8 pad_2[0xA];
    void *field_C;
} Fields_temp_s0;

extern void Pes6Heap_Free(void *);
void func_001B2970(void *arg0) {
    void *entry;
    Fields_temp_s0 *value;

    value = M2C_FIELD(arg0, void **, 0);
    entry = value->field_C;
    if (entry != NULL) {
        Pes6Heap_Free(entry);
    }
    value->field_C = (void *)M2C_FIELD(arg0, void **, 0x44);
    value->field_1 = 2;
}
