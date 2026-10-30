/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 atoi(void *);                          /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, s32);         /* extern */
s32 func_001F08B0(s32);                             /* extern */
void *func_002ED990(M2C_UNK);                       /* extern */
s32 func_002ED9B0();                                /* extern */
M2C_UNK func_008F9090();                            /* extern */
M2C_UNK func_008F93B0();                            /* extern */
M2C_UNK func_008F9410();                            /* extern */
M2C_UNK func_008F95B0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008F9610(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_008F9B68[];
extern char D_008F9B6C[];
extern char D_008F9B70[];
extern char D_008F9B78[];
extern char D_008F9B7C[];
extern char D_008F9B80[];
extern char D_008F9B84[];
extern char D_008F9B98[];
extern char D_008F9BA4[];
extern char D_008F9BA8[];
extern char D_008F9BB8[];
extern char D_008FA0C0[];

s32 func_008F76D0(void) {
    s32 temp_v0_2;
    s32 var_s2;
    void *temp_v0;

    if (func_002ED9B0() >= 3) {
        temp_v0 = func_002ED990(2);
        if (M2C_FIELD(temp_v0, s8 *, 0) != 0x46) {
            return 0;
        }
        if ((M2C_FIELD(temp_v0, s8 *, 1) == 0x45) && (M2C_FIELD(temp_v0, s8 *, 2) == 0x45) && (M2C_FIELD(temp_v0, s8 *, 3) == 0x47) && (M2C_FIELD(temp_v0, s8 *, 4) == 0x41)) {
            if (M2C_FIELD(temp_v0, s8 *, 5) == 0) {
                temp_v0_2 = atoi(func_002ED990(1));
                if (temp_v0_2 == 0) {
                    return 0;
                }
                func_008F9090();
                switch (temp_v0_2) {                /* irregular */
                case -9:
                case -8:
                case -7:
                case -6:
                case -5:
                case -4:
                case -3:
                    var_s2 = (*(s32 *)D_008F9B68);
                    break;
                case -10:
                    var_s2 = (*(s32 *)D_008F9B6C);
                    break;
                case -11:
                    var_s2 = (*(s32 *)D_008F9B70);
                    break;
                case -13:
                    var_s2 = (*(s32 *)D_008F9B78);
                    break;
                case -14:
                    var_s2 = (*(s32 *)D_008F9B7C);
                    break;
                case -15:
                    var_s2 = (*(s32 *)D_008F9B80);
                    break;
                case -16:
                    var_s2 = (*(s32 *)D_008F9B84);
                    break;
                case -21:
                    var_s2 = (*(s32 *)D_008F9B98);
                    break;
                case -52:
                    var_s2 = (*(s32 *)D_008F9BA4);
                    break;
                case -53:
                    var_s2 = (*(s32 *)D_008F9BA8);
                    break;
                default:
                    var_s2 = *(s32 *)0x8F9BB4;
                    break;
                }
                sprintf(((void *)D_008FA0C0), func_001F08B0((*(s32 *)D_008F9BB8)), temp_v0_2);
                func_008F95B0(var_s2, 0);
                func_008F9610(((void *)D_008FA0C0), 1);
                func_008F9410();
                func_008F93B0();
                return 1;
            }
            goto block_14;
        }
block_14:
        return 0;
    }
    return 0;
}
