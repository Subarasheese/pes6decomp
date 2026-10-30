/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002F62E0(s32);                         /* extern */
M2C_UNK func_00815100(M2C_UNK *);                   /* extern */
s32 func_008153B0();                                /* extern */
s32 func_00815450();                                /* extern */
extern char D_009FE9E0[];
extern char D_009FE9E4[];
extern char D_009FE9EC[];
extern char D_009FE9F0[];
extern char D_009FE9F8[];
extern char D_009FE9FC[];
extern char D_009FEA04[];
extern char D_009FEA08[];
extern char D_009FEA10[];
extern char D_009FEA14[];
extern char D_009FEA1C[];
extern char D_009FEA20[];
extern char D_009FEA28[];
extern char D_009FEA2C[];
extern char D_009FEA34[];
extern char D_009FEA38[];
extern char D_009FEA64[];
extern char D_00A02580[];
extern char D_00A7DB30[];
extern char D_00A7DB40[];
extern char D_00A7DB48[];
extern char D_00A7DB50[];
extern char D_00A7DB54[];
extern char D_00A7DB58[];
extern char D_00A7DB5C[];
extern char D_00A7DB60[];
extern char D_00A7DB64[];
extern char D_00A7DB68[];
extern char D_00A7DB6C[];

s32 func_0099D840(s32 arg0) {
    func_002F62E0((*(s32 *)D_00A7DB48));
    (*(s32 *)D_00A7DB48) = 0;
    (*(s32 *)D_00A7DB50) = 0;
    (*(s32 *)D_009FE9E0) = 0;
    (*(s32 *)D_009FE9E4) = 0;
    (*(s32 *)D_00A7DB54) = 0;
    (*(s32 *)D_009FE9EC) = 0;
    (*(s32 *)D_009FE9F0) = 0;
    (*(s32 *)D_00A7DB58) = 0;
    (*(s32 *)D_009FE9F8) = 0;
    (*(s32 *)D_009FE9FC) = 0;
    (*(s32 *)D_00A7DB5C) = 0;
    (*(s32 *)D_009FEA04) = 0;
    (*(s32 *)D_009FEA08) = 0;
    (*(s32 *)D_00A7DB60) = 0;
    (*(s32 *)D_009FEA10) = 0;
    (*(s32 *)D_009FEA14) = 0;
    (*(s32 *)D_00A7DB64) = 0;
    (*(s32 *)D_009FEA1C) = 0;
    (*(s32 *)D_009FEA20) = 0;
    (*(s32 *)D_00A7DB68) = 0;
    (*(s32 *)D_009FEA28) = 0;
    (*(s32 *)D_009FEA2C) = 0;
    (*(s32 *)D_00A7DB6C) = 0;
    (*(s32 *)D_009FEA34) = 0;
    (*(s32 *)D_009FEA38) = 0;
    (*(s32 *)D_009FEA64) = 0;
    (*(s32 *)D_00A7DB30) = 0;
    if ((arg0 == 0) && ((*(s32 *)D_00A7DB40) == 1) && ((func_00815450() != 0) || (func_008153B0() != 0))) {
        func_00815100(((void *)D_00A02580));
    }
    (*(s32 *)D_00A7DB40) = 0;
    return 0;
}
