/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00964140();                            /* extern */
s32 func_00964530(M2C_UNK *);                       /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern char D_009FE4A0[];
extern void *D_00A68CD8;

void func_00971470(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_00A68CD8;
    temp_v0 = func_00964530(((void *)D_009FE4A0));
    switch (temp_v0) {                              /* irregular */
    case 1:
    case 0:
        break;
    case 3:
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        func_009717C0(6);
        break;
    case 2:
        func_009717C0(3);
        func_0099D030(1);
        break;
    case 4:
        func_00964140();
        func_009717C0(5);
        break;
    }
    if (func_00969B90() != 0) {
        func_00964140();
        func_009717C0(5);
    }
}
