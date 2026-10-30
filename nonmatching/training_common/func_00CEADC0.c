/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7CE0(s32, s32 *);                  /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
s32 func_002EBEF0(s32);                             /* extern */
s32 func_002EBF80(s32);                             /* extern */
M2C_UNK func_002EC3C0(s32);                         /* extern */
s32 func_002ED370(s32);                             /* extern */
M2C_UNK func_00CE3AD0(s32);                         /* extern */
s32 func_00CE3CD0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00CE4BB0();                            /* extern */
s32 *func_00CE4EB0();                               /* extern */
M2C_UNK func_00CE70E0();                            /* extern */
extern s32 D_003E7E1C;
extern char D_00CFFCE8[];
extern char D_00CFFCEC[];
extern char D_00CFFCF0[];
extern char D_00CFFCFC[];
extern char D_00CFFD00[];
extern char D_00CFFD04[];

s32 func_00CEADC0(void) {
    s32 *temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_s0;

    if ((*(s32 *)D_00CFFCE8) == 0) {
        (*(s32 *)D_00CFFCEC) = 0;
    }
    if ((*(s32 *)D_00CFFCE8) != 0) {
        (*(s32 *)D_00CFFCEC) = 1;
        (*(s32 *)D_00CFFCE8) = 0;
    }
    if (((*(s32 *)D_00CFFCEC) == 0) && ((*(s32 *)D_00CFFCF0) == 0)) {
        (*(s32 *)D_00CFFD00) = func_002ED370((*(s32 *)D_00CFFCFC));
    }
    (*(s32 *)D_00CFFCF0) = 0;
    func_002EC3C0((*(s32 *)D_00CFFCFC));
    if (((*(s32 *)D_00CFFCFC) == 0) && ((*(u16 *)D_00CFFD04) == 0x126)) {
        var_v0 = 1;
    } else if (((*(s32 *)D_00CFFCFC) != 0) && ((func_002EBF80((*(s32 *)D_00CFFCFC)) & 0xFFFF) == 0x126)) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        (*(u16 *)D_00CFFD04) = 0x126;
    } else {
        if ((*(s32 *)D_00CFFCFC) == 0) {
            var_v0_2 = 0;
        } else if (func_002EBEF0((*(s32 *)D_00CFFCFC)) != 0) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 1;
        }
        if (var_v0_2 != 0) {
            (*(u16 *)D_00CFFD04) = 0xFFFF;
        } else {
            temp_s0 = func_002EBF80((*(s32 *)D_00CFFCFC)) & 0xFFFF;
            if ((*(u16 *)D_00CFFD04) != temp_s0) {
                (*(u16 *)D_00CFFD04) = temp_s0;
                temp_v0 = func_00CE4EB0();
                func_001D7CE0(*temp_v0, temp_v0);
                func_00CE70E0();
                func_00CE4BB0();
            }
            (*(u16 *)D_00CFFD04) = temp_s0;
        }
    }
    func_00CE3AD0(D_003E7E1C + 8);
    if ((*(s32 *)D_00CFFCFC) == 0) {
        var_v0_3 = 0;
    } else if (func_002EBEF0((*(s32 *)D_00CFFCFC)) != 0) {
        var_v0_3 = 0;
    } else {
        var_v0_3 = 1;
    }
    if (var_v0_3 == 0) {
        func_001D7D60(func_00CE3CD0(D_003E7E1C + 8, 0), 0);
        func_001D7D60(func_00CE3CD0(D_003E7E1C + 8, 1), 1);
    } else {
        func_001D7D60(func_00CE3CD0(D_003E7E1C + 8, 0), 1);
        func_001D7D60(func_00CE3CD0(D_003E7E1C + 8, 1), 0);
    }
    return (*(s32 *)D_00CFFD00);
}
