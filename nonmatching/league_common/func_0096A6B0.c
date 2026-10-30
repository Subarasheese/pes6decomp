/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001BE4D0(M2C_UNK);                         /* extern */
s32 func_00226710();                                /* extern */
s32 func_00230380();                                /* extern */
s32 func_00230410();                                /* extern */
s32 func_002305D0();                                /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_00930490();                            /* extern */
M2C_UNK func_00939470();                            /* extern */
M2C_UNK func_0093BC70();                            /* extern */
M2C_UNK func_00948A20();                            /* extern */
M2C_UNK func_0094C710(s32);                         /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
void *func_009614F0();                              /* extern */
M2C_UNK func_0097D7D0();                            /* extern */
M2C_UNK func_0097D850();                            /* extern */
M2C_UNK func_0098C370();                            /* extern */
M2C_UNK func_009999E0();                            /* extern */
M2C_UNK func_00999AE0();                            /* extern */
M2C_UNK func_0099C4D0();                            /* extern */
extern void *D_003E77AC;
extern char D_00591C09[];

s32 func_0096A6B0(void) {
    s32 temp_v1;
    s32 var_s1;
    void *temp_v0;

    var_s1 = -1;
    temp_v0 = func_009614F0();
    if (temp_v0 != NULL) {
        if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {
            goto block_34;
        }
        if ((func_00230380() == 0) && (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x3A) >> 0x3F) == 1)) {
            if (func_001BE4D0(0) != 0) {
                M2C_FIELD(temp_v0, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0, u8 *, 1) & ~0x20) | ((0 & 1) << 5));
                goto block_13;
            }
        } else {
block_13:
            func_00930490();
            temp_v1 = func_002307F0() & 0xFF;
            switch (temp_v1) {                      /* irregular */
            case 0:
                func_0098C370();
                func_00948A20();
                if ((func_00230410() == 1) || ((*(u8 *)D_00591C09) == 0xE) || ((func_00226710() & 0xFF) == 0x10)) {
                    if ((func_002305D0() & 0xFF) != 2) {

                    } else {
                        func_0093BC70();
                    }
                }
                break;
            case 1:
                func_0099C4D0();
                break;
            }
            if (func_00230410() == 1) {
                func_00999AE0();
                func_009999E0();
                func_00939470();
                var_s1 = 0x20;
            } else {
                if (func_00230380() == 1) {
                    func_0097D850();
                    func_0097D7D0();
                    func_00939470();
                    goto block_30;
                }
                if ((*(u8 *)D_00591C09) == 0xE) {
                    func_0097D850();
                    func_0097D7D0();
                    var_s1 = 0x31;
                } else {
                    func_00939470();
block_30:
                    var_s1 = 4;
                }
            }
            if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u8 *, 0) & 3)) {
                func_0094C710(var_s1 & 0xFF);
                var_s1 = 0x25;
            }
block_34:
            if (var_s1 != -1) {
                func_0094C790(0);
            }
        }
    }
    return var_s1;
}
