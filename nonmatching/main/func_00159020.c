/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00157058(void *);
extern void func_001564C8(void *);
extern void func_001566C8(void *);
M2C_UNK func_00157AC0();                            /* extern */
M2C_UNK func_00158ED0();                            /* extern */
M2C_UNK func_00159108(void *);                      /* extern */
M2C_UNK func_001593E8();                            /* extern */
M2C_UNK func_00159DD0();                            /* extern */

void func_00159020(void *arg0) {
    s16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x98);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00158ED0();
        break;
    case 10:
        func_001566C8(arg0);
        break;
    case 2:
        func_001593E8();
        break;
    case 3:
        func_00157058(arg0);
        break;
    case 4:
        func_00157AC0();
        break;
    case 1:
        func_00159DD0();
        break;
    case 15:
        func_001564C8(arg0);
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0xFC) != 0) {
        func_00159108(arg0);
    }
}
