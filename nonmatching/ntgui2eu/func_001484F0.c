/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001484B0();                            /* extern */
M2C_UNK func_001560B8(M2C_UNK *);                   /* extern */
M2C_UNK func_00156250(M2C_UNK *);                   /* extern */
extern char D_005B3730[];
extern char D_005BDA80[];
extern char D_011DFBB4[];

void func_001484F0(void) {
    if ((*(s32 *)D_005B3730) != 1) {
        func_001560B8(((void *)D_005BDA80));
        func_001484B0();
        switch ((*(s32 *)D_011DFBB4)) {                       /* irregular */
        case 0:
            func_00156250(((void *)D_005BDA80));
            func_001566A8();
            func_00136FD8(0, 2);
            break;
        case 1:
        case 2:
            func_00136FD8(0, 0x14);
            break;
        case 3:
            func_00136FD8(0, 0x14);
            break;
        }
    }
}
