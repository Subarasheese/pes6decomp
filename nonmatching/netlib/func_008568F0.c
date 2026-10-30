/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008472D0();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4D[];
extern char D_005926FF[];
extern char D_008B14CC[];
extern char D_008B14E0[];
extern char D_008B14EC[];
extern char D_008B14F0[];

s32 func_008568F0(s32 arg0, void *arg1) {
    s32 var_a0;
    s8 var_v1_2;
    u16 var_v1;

    func_008472D0();
    if (M2C_FIELD(arg1, u16 *, 0) != 0x13) {
        return 0;
    }
    if ((*(u8 *)D_008B14E0) == arg0) {
        if ((*(u8 *)D_00591E4D) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
        }
        if (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3E) >> 0x3F) != 0) {
            if (((*(u8 *)D_005926FF) != 1) && ((*(u8 *)D_005926FF) != 3) && ((*(u8 *)D_005926FF) != 4)) {

            } else {
                (*(s32 *)D_008B14EC) = M2C_FIELD(arg1, s32 *, 0xC);
                (*(u16 *)D_008B14F0) = M2C_FIELD(arg1, u16 *, 0x10);
                var_v1 = M2C_FIELD(arg1, u16 *, 0x10);
                if ((s32) var_v1 < 4) {
                    var_v1_2 = 4;
                    M2C_FIELD(arg1, u16 *, 0x10) = 4U;
                } else {
                    if ((s32) var_v1 >= 0x81) {
                        var_v1 = 0x80;
                        M2C_FIELD(arg1, u16 *, 0x10) = 0x80U;
                    }
                    var_v1_2 = var_v1 & 0xFFFF;
                }
                M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s8 *, 0x4D) = var_v1_2;
            }
        }
    }
    return 0;
}
