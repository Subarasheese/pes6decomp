/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0020A540(s32);                         /* extern */
extern char D_0061ED60[];

void func_00366300(void) {
    if ((*(s32 *)D_0061ED60) != 0) {
        func_0020A540((*(s32 *)D_0061ED60));
        (*(s32 *)D_0061ED60) = 0;
        func_001C48E8(((void *)D_0061ED60), 0, 0x144);
    }
}
