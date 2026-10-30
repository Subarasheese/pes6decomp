/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9370(int);
M2C_UNK func_00220C50(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00624310(s32, M2C_UNK, void *);        /* extern */
s32 func_00627290(s32, s32);                        /* extern */
s32 func_00627300(s32, s32);                        /* extern */
extern void *D_0065EF88;

void func_006269F0(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    void *var_s2;
    void *var_s3;
    void *var_s4;

    var_s4 = NULL;
    var_s3 = NULL;
    var_s2 = NULL;
    switch (arg0) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s4 = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x140);
block_8:
        var_s1 = 0;
loop_9:
        temp_v0 = func_00627300(var_s1, arg0);
        if (func_00627290(temp_v0, arg0) != 0) {
            switch (arg0) {                         /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                if (M2C_FIELD(var_s4, u8 *, 0x52) != 0) {
                    func_00624310(temp_v0, 0, var_s4);
                    func_00220C50(temp_v0, 0, 1);
                    func_002E9370(0x01000000);
                }
                if (M2C_FIELD(var_s4, u8 *, 0x53) != 0) {
                    func_00624310(temp_v0, 1, var_s4 + 0x15);
                    func_00220C50(temp_v0, 1, 1);
                    func_002E9370(0x01000000);
                }
                goto block_30;
            case 2:                                 /* switch 2 */
                if (M2C_FIELD(var_s3, u8 *, 0x52) != 0) {
                    func_00624310(temp_v0, 0, var_s3);
                    func_00220C50(temp_v0, 0, 1);
                    func_002E9370(0x01000000);
                }
                if (M2C_FIELD(var_s3, u8 *, 0x53) != 0) {
                    func_00624310(temp_v0, 1, var_s3 + 0x15);
                    func_00220C50(temp_v0, 1, 1);
                    func_002E9370(0x01000000);
                }
                goto block_30;
            case 3:                                 /* switch 2 */
                if (M2C_FIELD(var_s2, u8 *, 0x52) != 0) {
                    func_00624310(temp_v0, 0, var_s2);
                    func_00220C50(temp_v0, 0, 1);
                    func_002E9370(0x01000000);
                }
                if (M2C_FIELD(var_s2, u8 *, 0x53) != 0) {
                    func_00624310(temp_v0, 1, var_s2 + 0x15);
                    func_00220C50(temp_v0, 1, 1);
                    func_002E9370(0x01000000);
                }
                goto block_30;
            }
        } else {
block_30:
            var_s1 += 1;
            var_s4 += 0x54;
            var_s3 += 0x54;
            var_s2 += 0x54;
            if (var_s1 >= 0x1C) {
                return;
            }
            goto loop_9;
        }
        break;
    case 2:                                         /* switch 1 */
        var_s3 = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x138);
        goto block_8;
    case 3:                                         /* switch 1 */
        var_s2 = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x140);
        goto block_8;
    }
}
