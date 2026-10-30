/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern void func_00153FA0(void *);
M2C_UNK func_00910060();                            /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;

void func_00916910(s32 arg0) {
    func_0026B580(D_00923FCC + 0x3F4, 0x10, arg0);
    func_00910060();
    func_00C75330(D_00923FCC + 0x7C);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
