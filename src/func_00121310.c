/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0013E2A0(s32);                         /* extern */
extern char D_00374908[];
extern char D_003FAE60[];
extern char D_003FAE65[];
extern char D_00591BCE[];
extern char D_00591BCF[];

void func_00121310(void) {
    s32 temp_a0;

    if ((*(u8 *)D_00591BCF) != 0) {
        temp_a0 = ((s32 *)D_00374908)[*(u8 *)D_00591BCE];
        (*(s32 *)D_003FAE60) = temp_a0;
        func_0013E2A0(temp_a0);
        (*(u8 *)D_00591BCF) = 0;
    }
    (*(s8 *)D_003FAE65) = 0;
}
