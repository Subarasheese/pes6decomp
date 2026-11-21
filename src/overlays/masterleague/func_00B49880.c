/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xC];
    s8 field_C;
    u8 pad_D[0x1];
    u8 field_E;
    u8 pad_F[0x1];
    s16 field_10;
    s8 field_12;
} Fields;

extern u8 func_00225820(void);
s32 func_001C48E8(void *, s32, s32);
s32 func_001D5F80(s32);
s16 func_00225680(u8);
extern s32 func_00225E10(void);
void *func_0096DB90(s32);
extern void *D_003EAE78;

void func_00B49880(void) {
    Fields *value;
    void *entry;

    if (D_003EAE78 == 0) {
        if (D_003EAE78 == 0) {
            entry = func_0096DB90(0x1C);
            D_003EAE78 = entry;
            func_001C48E8(entry, 0, 0x1C);
        }
        value = D_003EAE78;
        if (value != 0) {
            value->field_E = func_00225820();
            value->field_10 = func_00225680(value->field_E);
            value->field_12 = func_00225E10();
            value->field_C = 0;
        }
        func_001D5F80(0x10343);
    }
}
