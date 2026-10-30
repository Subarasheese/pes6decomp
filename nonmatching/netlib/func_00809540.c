/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002AE6C0(s32, s32, void *);
extern s32 func_008420F0(void);
extern s32 func_008420D0(void);
extern s32 func_008420B0(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_005924B8[];

s8 func_00809540(void *arg0) {
    void *sp5C;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a0;
    s64 temp_s1;
    s64 var_s0;
    u8 temp_a0;
    u8 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;

    M2C_FIELD(arg0, s8 *, 3) = 1;
    if ((func_009E1C90(1) & 0xFF) != 5) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 2);
        temp_v0 = temp_v1 & 0x40;
        var_s0 = temp_v0 != 0;
        temp_s3 = (temp_v1 & 0x80) != 0;
        if (temp_s3 != 0) {
            var_s0 = temp_v0 == 0;
        }
        func_008420F0();
        if (temp_s3 == 0) {
            sp5C = NULL;
            func_002AE6C0((s32) var_s0, temp_v1 & 0x1F, &sp5C);
            if (sp5C != NULL) {
                func_008420D0();
            }
            if (((s32) (*(u8 *)D_005924B8) > 0) && ((s32) (*(u8 *)D_005924B8) < 0x17)) {
                if ((*(u8 *)D_005924B8) == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = (s32) (*(u8 *)D_005924B8) % 23;
                }
                temp_v0_2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
                sp5C = temp_v0_2;
                if (temp_v0_2 != NULL) {
                    func_008420B0();
                }
            }
        } else {
            func_008420D0();
        }
    } else {
        temp_a0 = M2C_FIELD(arg0, u8 *, 2);
        temp_v0_3 = ((void *)Pes6MatchPlayers) + (((s32) (temp_a0 & 0x7F) % 23) * 0x240);
        sp5C = temp_v0_3;
        if (temp_a0 & 0x80) {
            temp_s1 = (s64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 0x12) << 0x38) >> 0x38;
            func_008420F0();
            func_008420D0();
        }
    }
    return M2C_FIELD(arg0, s8 *, 3);
}
