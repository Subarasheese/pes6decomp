/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00825510();                            /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009D1590();                            /* extern */
M2C_UNK func_009D6420();                            /* extern */
extern char D_00A7DE10[];
extern char D_00A7DE20[];

void func_009D5670(void) {
    if ((*(s32 *)D_00A7DE10) != 0) {
        if ((*(s32 *)D_00A7DE20) == 1) {
            func_00825510();
        }
        func_001C48E8(((void *)D_00A7DE20), 0, 0x6C);
        func_009D1590();
        func_009D6420();
        func_0099C7C0((*(s32 *)D_00A7DE10));
        (*(s32 *)D_00A7DE10) = 0;
    }
}
