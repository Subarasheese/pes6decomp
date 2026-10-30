/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B4B90(s32, M2C_UNK);                /* extern */
M2C_UNK func_001B4D20(s32);                         /* extern */
s32 func_001B4D80(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_001B77F0(M2C_UNK);                     /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_002D3560(M2C_UNK *);                   /* extern */
M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
s32 func_008375D0();                                /* extern */
M2C_UNK func_009024D0(s32 *, s32 *);                /* extern */
M2C_UNK func_009024E0(s32, s32);                    /* extern */
s32 func_00C75F80();                                /* extern */
M2C_UNK func_00C76360(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00D0C980();                            /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_0058D7AA[];
extern char D_00591DB6[];
extern char D_00814FB0[];
extern char D_00921230[];
extern char D_00921D44[];
extern char D_00921DBC[];
extern char D_00921DC0[];
extern char D_00921DCC[];
extern char D_00921DE0[];
extern char D_00921DE4[];
extern char D_00921F58[];

s32 func_00916370(void) {
    s32 sp18;
    s32 sp1C;
    s32 temp_v0;

    switch ((*(s32 *)D_00921D44)) {                           /* irregular */
    case 0:
        if ((*(s8 *)D_0058D7AA) != 0) {
            func_001B4D20((*(s32 *)D_00921F58));
            func_00D0C980();
        }
        func_002D3560(((void *)D_00921DBC));
        (*(s8 *)D_00921DCC) = 0;
        (*(s8 *)D_00591DB6) = (s8) (*(s32 *)D_00921DC0);
        func_00C76360((*(s32 *)D_00921DC0), 5, 0, -1);
        func_001D7D60((*(s32 *)D_00921DE0), 0);
        func_001D7D60((*(s32 *)D_00921DE4), 0);
        (*(s32 *)D_00921D44) += 1;
block_19:
    default:
        return 0;
    case 1:
        if (func_00C75F80() != 0) {
            (*(s32 *)D_00921D44) += 1;
        }
        if ((*(s8 *)D_0058D7AA) != 0) {
            func_009024D0(&sp1C, &sp18);
            func_009024E0(sp1C, sp18);
        }
        goto block_19;
    case 2:
        if ((*(s8 *)D_0058D7AA) != 0) {
            func_00815B70(0);
            if (func_008375D0() != 1) {
                func_00D10140(0x14);
            } else {
                func_00D10140(0xC);
            }
            func_00D0FBE0(1);
            func_00D0CB50();
            func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00921230));
            func_001B77F0(3);
            temp_v0 = func_001B4D80(0x45BB8000, 0);
            (*(s32 *)D_00921F58) = temp_v0;
            func_001B4B90(temp_v0, 0);
        }
        (*(s8 *)D_00921DCC) = 1;
        (*(s32 *)D_00921D44) = 0;
        return 1;
    }
}
