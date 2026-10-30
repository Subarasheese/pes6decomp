/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00147ED0(s32);
extern void func_00153FA0(void *);
extern void func_001AC500(s32, s32);
void *func_001454C0(s64);                           /* extern */
M2C_UNK func_00145590(void *);                      /* extern */
M2C_UNK func_001A5A20(s32);                         /* extern */

void func_00BA18D0(void *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_v1, s8 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
    func_001A5A20(M2C_FIELD(temp_v1, s32 *, 0));
    func_001AC500(0x8D18, 1);
    func_00147ED0(0x8D19);
    temp_v0 = func_001454C0((s64) (0x8D19 << 0x20) >> 0x20);
    if (temp_v0 != NULL) {
        func_00145590(temp_v0);
        func_00153FA0(temp_v0);
    }
}
