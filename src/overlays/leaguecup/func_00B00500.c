/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x810];
    u8 field_810;
    u8 pad_811[0x87];
    s32 field_898;
} Fields;

s32 func_002C9CA0(u8);
s32 func_0095AAC0(s32, s32, s32);
s32 func_0095AC80(u8);
extern void func_00AFA090(void);
extern s32 func_00B00700(void);
extern void *D_003EAD54;

void func_00B00500(void) {
    s32 value;
    s32 value2;
    Fields *value3;

    value3 = D_003EAD54;
    if (value3 != 0) {
        value2 = func_0095AC80(value3->field_810) & 0xFF;
        value = func_002C9CA0(value3->field_810) & 0xFF;
        if (value3->field_898 != 0) {
            func_0095AAC0(value2, value, 1);
        } else {
            func_0095AAC0(value2, value, 0);
        }
        func_00B00700();
        func_00AFA090();
    }
}
