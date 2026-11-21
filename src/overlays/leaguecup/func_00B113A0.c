/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x58];
    s32 field_58;
    s32 field_5C;
    s8 field_60;
    u8 pad_61[0x17];
    s32 field_78;
    u8 pad_7C[0x20];
    s8 field_9C;
} Fields_temp_s0;

s32 func_001C48E8(void *, s32, s32);
s32 func_001D5F80(s32);
extern void func_00949590(void);
void *func_0096DB90(s32);
extern u32 func_009A5FE0(void);
extern void func_00B109C0(void);
extern void *D_003E7B0C;
extern void *D_003EAD6C;

void func_00B113A0(void) {
    Fields_temp_s0 *value;
    void *entry;

    if (D_003EAD6C == NULL) {
        if (D_003EAD6C == NULL) {
            entry = func_0096DB90(0xD0);
            D_003EAD6C = entry;
            func_001C48E8(entry, 0, 0xD0);
        }
        value = D_003EAD6C;
        if (value != NULL) {
            value->field_78 = 0;
            value->field_58 = (s32)M2C_FIELD(D_003E7B0C, u8 *, 0x25);
            value->field_5C = (s32)M2C_FIELD(D_003E7B0C, u8 *, 0x25);
            value->field_60 = 0;
            value->field_9C = 0;
            if (func_009A5FE0() != 0) {
                value->field_78 = 1;
            }
        }
        func_001D5F80(0x10306);
        func_00B109C0();
        func_00949590();
    }
}
