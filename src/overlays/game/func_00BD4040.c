/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    void *field_0;
    void *field_4;
} Fields;

s32 func_001C48E8(void *, s32, s32);
s32 func_00BD3BE0(void *, s32);

void func_00BD4040(Fields *arg0, s32 arg1) {
    func_001C48E8(arg0->field_4, 0, 0x34);
    M2C_FIELD(arg0->field_0, s16 *, 0x3C) = 0;
    M2C_FIELD(arg0->field_4, s8 *, 0xC) = 7;
    func_00BD3BE0(arg0, arg1);
}
