/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC360(s32);                         /* extern */
s32 func_002631D0();                                /* extern */
M2C_UNK func_002F4E10(s32);                         /* extern */
M2C_UNK func_00363BD0();                            /* extern */
M2C_UNK func_00802E90();                            /* extern */
extern char D_00CFEF80[];
extern char D_00CFEF84[];
extern char D_00CFEF88[];
extern char D_00CFEF8C[];

void func_00CE2B80(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        func_002F4E10(temp_a0);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    func_001BC360((*(s32 *)D_00CFEF80));
    func_001BC360((*(s32 *)D_00CFEF84));
    func_001BC360((*(s32 *)D_00CFEF88));
    func_001BC360((*(s32 *)D_00CFEF8C));
    func_00363BD0();
    if (func_002631D0() != 8) {
        func_00802E90();
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x114);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_v0 = M2C_FIELD(arg0, s32 *, 0x110);
block_10:
        M2C_FIELD(arg0, s32 *, 0x118) = var_v0;
        break;
    case -1:                                        /* switch 1 */
        var_v0 = 2;
        goto block_10;
    }
    if (arg1 == 7) {
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x114);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x118) = (s32) M2C_FIELD(arg0, s32 *, 0x110);
            break;
        case -1:                                    /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x118) = 0;
            break;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    func_001BC2B0();
}
