/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern s32 func_00338530(s32);
extern int func_003387D0(void *, int);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E17B0[];
extern M2C_UNK func_0032D340;
extern M2C_UNK func_0032DDF0;

s32 func_0032DE80(void *arg0) {
    s32 (**temp_s1)(void *);
    s32 (**var_s2)(void *);
    s32 (*temp_v0)(void *);
    s32 temp_a1;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_s0;

    var_s4 = 0;
    var_s3 = 0;
    temp_s1 = M2C_FIELD(arg0, s32 (***)(void *), 0x3C);
    temp_s0 = M2C_FIELD(arg0, void **, 0x40);
    var_s2 = temp_s1;
    do {
        temp_v0 = *var_s2;
        if (temp_v0 != NULL) {
            var_s4 |= temp_v0(arg0 + 0x3C);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 5);
    if (var_s4 != 0) {
        if (M2C_FIELD(temp_s0, u8 *, 8) != 0) {
            temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x74);
            switch (temp_a1) {                      /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                temp_v0_2 = M2C_FIELD(temp_s0, u8 *, 0x95);
                switch (temp_v0_2) {                /* switch 2; irregular */
                case 5:                             /* switch 2 */
                    var_v0 = 1;
                    break;
                case 1:                             /* switch 2 */
                    var_v0 = 1;
                    break;
                }
                break;
            case 5:                                 /* switch 1 */
            case 4:                                 /* switch 1 */
                if (M2C_FIELD(temp_s0, s32 *, 0xB4) == 1) {
                    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0xD5);
                    switch (temp_v1) {              /* switch 3; irregular */
                    case 5:                         /* switch 3 */
                        var_v0 = 1;
                        break;
                    case 1:                         /* switch 3 */
                        var_v0 = 1;
                        break;
                    }
                } else {
                default:                            /* switch 1 */
                    var_v0 = 0;
                }
                break;
            }
            if (var_v0 != 0) {
                if (M2C_FIELD(temp_s1, s32 *, 0x28) != 0) {
                    if (func_00338530(0x8000000B) == 0) {
                        func_00338A60(func_00338AD0(0x8000000B, &func_0032D340, 5, ((void *)D_003E17B0)), arg0);
                    }
                } else {
                    func_003387D0(arg0, (s32) &func_0032DDF0);
                }
            }
        }
    }
    return 0;
}
