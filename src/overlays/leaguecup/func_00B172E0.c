/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x2C];
    u8 field_2C;
} Fields;

extern void *func_0022F190(void);
s32 func_00B16E50(u8);
s32 func_00B17090(u8);
extern void *D_003EAD78;

void func_00B172E0(void) {
    Fields *value;
    void *entry;

    entry = func_0022F190();
    value = D_003EAD78;
    if ((value != 0) && (entry != 0)) {
        func_00B17090(value->field_2C);
        func_00B16E50(value->field_2C);
    }
}
