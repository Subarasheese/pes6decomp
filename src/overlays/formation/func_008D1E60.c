/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 field_0;
    f32 field_4;
} Fields_arg1;

extern void func_008C1430(void *, float, float);
extern s32 func_008C5BF0(s32, s32, s32);

void func_008D1E60(s8 *arg0, Fields_arg1 *arg1) {
    func_008C5BF0((s32)(arg0 + 0x214), (s32)arg1->field_0, (s32)arg1->field_4);
    func_008C1430(M2C_FIELD(arg0, void **, 0x1EC), arg1->field_0, arg1->field_4);
}
