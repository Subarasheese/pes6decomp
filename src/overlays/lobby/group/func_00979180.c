/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0099C7E0(s32);
extern void func_009F1090(void);

extern char D_00A68D60[];

void func_00979180(s8 arg0) {
    s32 value;

    if ((*(s32 *)D_00A68D60) == 0) {
        value = func_0099C7E0(0xC);
        (*(s32 *)D_00A68D60) = value;
        if (value != 0) {
            M2C_FIELD(value, s8 *, 2) = 0;
            M2C_FIELD((*(s32 *)D_00A68D60), s8 *, 4) = arg0;
            M2C_FIELD((*(s32 *)D_00A68D60), s8 *, 3) = 2;
            func_009F1090();
        }
    }
}
