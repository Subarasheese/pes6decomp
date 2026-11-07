/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BBFD0(s32);                         /* extern */
M2C_UNK func_001BC040(s32);                         /* extern */
M2C_UNK func_00362AF0();                            /* extern */
M2C_UNK func_003637D0(M2C_UNK);                     /* extern */
extern s32 D_003EA030;
extern s32 D_003EA034;

void func_00363BD0(void) {
    s32 temp_v1;

    if (D_003EA030 != 0) {
        temp_v1 = D_003EA034 - 1;
        D_003EA034 = temp_v1;
        if (temp_v1 == 0) {
            func_003637D0(0);
            func_00362AF0();
            func_001BC040(D_003EA030);
            func_001BBFD0(D_003EA030);
            D_003EA030 = 0;
        }
    }
}
