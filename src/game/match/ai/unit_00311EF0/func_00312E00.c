/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x6C];
    s32 field_6C;
} Fields_temp_s1;

extern s32 func_00340C80(f32);
extern void Pes6Job_SetDone(int);
s32 func_00312E00(void *arg0) {
    s32 value;
    Fields_temp_s1 *value2;

    value2 = M2C_FIELD(arg0, void **, 0x3C);
    value = value2->field_6C + 1;
    value2->field_6C = value;
    if (!(func_00340C80(3.0f) >= value)) {
        value2->field_6C = 0xF0;
        Pes6Job_SetDone((s32)arg0);
        return 1;
    }
    return 0;
}
