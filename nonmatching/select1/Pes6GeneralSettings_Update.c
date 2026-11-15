/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle();                                /* extern */
s32 func_001B68B0(M2C_UNK *);                       /* extern */
s32 func_001B6A30(s32);                             /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
M2C_UNK func_0023EA10(M2C_UNK);                     /* extern */
s32 func_0023F330(M2C_UNK);                         /* extern */
M2C_UNK Pes6MatchSelect_ReloadPlayerModels();                            /* extern */
M2C_UNK func_008B5EF0();                            /* extern */
M2C_UNK func_008B6530();                            /* extern */
s32 func_008B6C30(M2C_UNK *);                       /* extern */
M2C_UNK func_008B70A0();                            /* extern */
M2C_UNK func_008C0470(M2C_UNK *);                   /* extern */
M2C_UNK func_008C05B0(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_00934440(s32);                             /* extern */
M2C_UNK func_00934540(s32);                         /* extern */
extern s32 Pes6GeneralSettings_State;
extern char Pes6Scene_Menu_State[];
extern char D_0053C309[];
extern char D_00591C09[];
extern char D_008D2C50[];
extern char D_008DC310[];

s8 Pes6GeneralSettings_Update(void) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    switch (Pes6GeneralSettings_State) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_00934540(func_0021E000(0x156));
        if (func_00934440(func_0021E000(0x156)) == 1) {
            func_008B6530();
            func_008C05B0(((void *)D_008D2C50), ((void *)D_008DC310));
            func_0023EA10(1);
            func_008B70A0();
            Pes6GeneralSettings_State += 1;
        }
block_36:
    default:                                        /* switch 1 */
        return 0;
    case 1:                                         /* switch 1 */
        if (func_001B68B0(((void *)Pes6Scene_Menu_State)) == 1) {
            Pes6GeneralSettings_State += 1;
        }
        goto block_36;
    case 2:                                         /* switch 1 */
        temp_v0 = func_008B6C30(((void *)Pes6Scene_Menu_State));
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v0 = Pes6GeneralSettings_State + 1;
block_21:
            Pes6GeneralSettings_State = var_v0;
            break;
        case 2:                                     /* switch 2 */
            var_v0 = Pes6GeneralSettings_State + 1;
            goto block_21;
        }
        func_008B70A0();
        if (Pes6File_AllChannelsIdle() == 1) {
            Pes6MatchSelect_ReloadPlayerModels();
        }
        goto block_36;
    case 3:                                         /* switch 1 */
        if ((*(s8 *)D_0053C309) == 1) {
            if (func_001B6A30(func_0023F330(1)) == 0) {
                var_v0_2 = 0;
            } else {
                goto block_32;
            }
        } else if ((*(u8 *)D_00591C09) == 7) {
            if (func_001B6A30(1) == 0) {
                var_v0_2 = 0;
            } else {
                goto block_32;
            }
        } else if (func_001B6A30(1) == 0) {
            var_v0_2 = 0;
        } else {
block_32:
            func_008B5EF0();
            func_008C0470(((void *)D_008DC310));
            var_v0_2 = 1;
        }
        if (var_v0_2 != 0) {
            Pes6GeneralSettings_State += 1;
        }
        goto block_36;
    case 4:                                         /* switch 1 */
        Pes6GeneralSettings_State = 0;
        return M2C_FIELD(((void *)Pes6Scene_Menu_State), s8 *, 9);
    }
}
