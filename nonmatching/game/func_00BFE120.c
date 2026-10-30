/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_002BE490(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00B29C50(M2C_UNK);                         /* extern */
M2C_UNK func_00BFA810(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C01090(s32);                             /* extern */
M2C_UNK func_00C01540(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591BBF[];
extern char D_00591C09[];
extern char D_00591DCD[];

void func_00BFE120(void) {
    s32 var_s3;
    s64 temp_s4;

    var_s3 = 0x2E;
    switch ((*(u8 *)D_00591DCD)) {                           /* irregular */
    case 1:
    case 0:
        break;
    case 3:
    case 2:
        if ((*(u8 *)D_00591BBF) == 1) {
            temp_s4 = (s64) (func_002BE490(0, 1) << 0x30) >> 0x30;
            if (temp_s4 != ((s64) (func_002BE490(1, 1) << 0x30) >> 0x30)) {
                var_s3 = 0x29;
            }
        }
        break;
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_9;
    }
    if (func_00B29C50(5) != 0) {
block_9:
        if (var_s3 < 0x2E) {
            func_00C01540(var_s3, 0x17, 0x17, 0xC, 6);
        }
    }
    if (var_s3 == 0x2E) {

    } else if (func_00C01090(var_s3) != 0) {
        func_00BFA810(1, 1);
        func_00BFA810(0xC, 1);
    }
}
