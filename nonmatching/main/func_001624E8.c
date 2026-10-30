/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00159E88(void);
extern void func_00159EA0(void);
M2C_UNK func_00161A50(void *);                      /* extern */
M2C_UNK func_00162438(void *);                      /* extern */
M2C_UNK func_00162590(void *);                      /* extern */
M2C_UNK func_001626E0(void *);                      /* extern */

void func_001624E8(void *arg0) {
    s8 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xA0) > 0) {
        func_00159E88();
        func_00162590(arg0);
        func_00159EA0();
    }
    temp_v1 = M2C_FIELD(arg0, s8 *, 1);
    switch (temp_v1) {                              /* irregular */
    case 2:
        func_00162438(arg0);
        break;
    case 1:
        func_00161A50(arg0);
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA4) <= 0) {
        return;
    }
    func_00159E88();
    func_001626E0(arg0);
    func_00159EA0();
}
