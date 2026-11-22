/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x8];
    void *field_8;
    s32 field_C;
    u8 pad_10[0x34];
    s16 field_44;
} Fields_arg0;

extern void func_001E0110(void *);
extern void Pes6Heap_Free(void *);
void func_001E50C0(Fields_arg0 *arg0) {
    void *entry;
    void *entry2;

    entry2 = arg0->field_8;
    if (entry2 != NULL) {
        do {
            entry = M2C_FIELD(entry2, void **, 0);
            func_001E0110(M2C_FIELD(entry2, void **, 4));
            Pes6Heap_Free(entry2);
            entry2 = entry;
        } while (entry != NULL);
        arg0->field_8 = NULL;
        arg0->field_C = 0;
        arg0->field_44 = 0;
    }
}
