/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1];
    u8 field_1;
    u8 pad_2[0x1];
    u8 field_3;
    u8 field_4;
    u8 field_5;
} Fields;

extern int func_00295280(void);
s32 func_00295170(s32, void *, s32);

void func_00295650(Fields *arg0, s32 arg1) {
    if ((s32)arg0->field_1 >= 4) {
        arg0->field_1 = 3U;
    }
    if ((s32)arg0->field_3 >= 0xD) {
        arg0->field_3 = 0xCU;
    }
    if ((s32)arg0->field_3 <= 0) {
        arg0->field_3 = 1U;
    }
    if ((s32)arg0->field_4 >= 0x19) {
        arg0->field_4 = 0x18U;
    }
    if ((s32)arg0->field_4 <= 0) {
        arg0->field_4 = 1U;
    }
    if (arg0->field_5 == 0) {
        arg0->field_5 = 1U;
    }
    func_00295170(func_00295280(), arg0, arg1);
}
