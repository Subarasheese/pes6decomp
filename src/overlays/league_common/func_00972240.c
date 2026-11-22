/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 field_0;
    f32 field_4;
} Fields_arg1;

extern void func_002DF640(void *, f32, f32);
void func_00972240(void *arg0, Fields_arg1 *arg1) {
    if (arg0 != NULL) {
        func_002DF640(M2C_FIELD(arg0, void **, 0), arg1->field_0, arg1->field_4);
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32)arg1->field_0;
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32)arg1->field_4;
    }
}
