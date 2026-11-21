/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x430];
    s16 field_430;
    u8 pad_432[0xE];
    s8 field_440;
    u8 pad_441[0x183];
    s32 field_5C4;
    u8 pad_5C8[0xD4];
    s8 field_69C;
} Fields;

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
s32 func_001C48E8(void *, s32, s32);
s32 func_001D5F80(s32);
void *func_0096DB90(s32);
extern void func_00AFCA20(void);
extern void *D_003EAED0;

void func_00B65220(void) {
    s32 value;
    Fields *value2;
    void *entry;

    if (D_003EAED0 == 0) {
        func_00AFCA20();
        if (D_003EAED0 == 0) {
            entry = func_0096DB90(0x6A0);
            D_003EAED0 = entry;
            func_001C48E8(entry, 0, 0x6A0);
        }
        value2 = D_003EAED0;
        if (value2 != 0) {
            value2->field_69C = 0;
            value = 0;
            value2->field_430 = 0;
            value2->field_440 = 0;
            value2->field_5C4 = 0;
            do {
                if (Pes6Team_GetPlayerId(0x127, value & 0xFF, 0) & 0xFFFF) {
                    value2->field_5C4 = (s32)(value2->field_5C4 + 1);
                }
                value += 1;
            } while (value < 0x20);
        }
        func_001D5F80(0x1031E);
    }
}
