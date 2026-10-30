/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226D60();                                /* extern */
s32 func_00230410();                                /* extern */
s32 func_00230490();                                /* extern */
M2C_UNK func_00939610();                            /* extern */
M2C_UNK func_009396A0();                            /* extern */
M2C_UNK func_00939730();                            /* extern */
M2C_UNK func_009398F0();                            /* extern */
M2C_UNK func_00949590();                            /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
void *func_009614F0();                              /* extern */
M2C_UNK func_00975D30(u8);                          /* extern */
M2C_UNK func_009762D0();                            /* extern */
s32 func_0097EE50();                                /* extern */
s32 func_0099B300();                                /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;
extern u8 *D_003E7B0C;
extern char D_00591C09[];

s32 func_009698B0(void) {
    s32 temp_v1;
    s32 var_s1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    void *temp_v0;

    var_s1 = -1;
    temp_v0 = func_009614F0();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(D_003E77AC, s32 *, 4);
        if ((temp_v1 != 1) && (temp_v1 != 0)) {

        } else {
            if ((func_00230490() == 1) && ((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 2)) {
                func_00975D30((*(u8 *)D_00591C09));
                func_009762D0();
            }
            if ((func_00230410() == 1) && (func_00226D60() == 1)) {
                func_009398F0();
                func_00939730();
            }
            func_009396A0();
            func_00939610();
            if (*D_003E7B0C == 3) {
                temp_v1_2 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
                if (!(temp_v1_2 & 0x100)) {
                    if (!(temp_v1_2 & 2)) {
                        var_s1 = 0x1C;
                    } else {
                        goto block_22;
                    }
                } else {
block_22:
                    if (func_0099B300() != 1) {
                        var_s1 = 0x1C;
                    } else {
                        var_s1 = 0x19;
                    }
                }
            } else if ((temp_v0 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x3B) >> 0x3F) == 1)) {
                var_s1 = 0x2D;
            } else {
                temp_v1_3 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
                if (!(temp_v1_3 & 0x100)) {
                    if (!(temp_v1_3 & 0x800)) {
                        var_s1 = 0x1D;
                    } else {
                        var_s1 = 0x28;
                    }
                } else if (func_0097EE50() != 1) {
                    var_s1 = 0x1D;
                } else {
                    var_s1 = 0x19;
                }
            }
            if (((*(u8 *)D_00591C09) != 0xE) && (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x3A) >> 0x3F) == 0)) {
                func_00949590();
            }
        }
        if (var_s1 != -1) {
            func_0094C790(0);
        }
    }
    return var_s1;
}
