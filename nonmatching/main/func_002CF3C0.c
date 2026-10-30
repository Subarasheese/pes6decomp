/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern void func_001EE580(void *, void *);
extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
extern void * func_001EDC80(void *, s32);
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
M2C_UNK func_001EF5B0(void *, s8 *);                /* extern */
extern char D_003AF1F0[];
extern char D_003AF2D8[];

void func_002CF3C0(void *arg0, s32 arg1) {
    s8 sp40;
    s16 sp88;
    s16 sp8A;
    s16 sp8C;
    s16 sp8E;
    s16 *var_v1;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 *var_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v0;
    void *var_v0_4;
    void *var_v0_5;

    var_v0 = func_001EDC80(arg0, 0);
    if (var_v0 == NULL) {
        var_v0 = func_001EDD00(arg0);
    }
    var_v1 = &sp88;
    var_v0_2 = 8;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0_2 -= 1;
            var_v1 += 1;
        } while (var_v0_2 != 0);
    }
    temp_v1 = arg1 & 0xFF;
    sp8C = M2C_FIELD(((void *)D_003AF1F0), s16 *, 0xA);
    sp8E = M2C_FIELD(((void *)D_003AF1F0), s16 *, 0xC);
    sp88 = M2C_FIELD(((void *)D_003AF1F0), s16 *, 0xA) * (temp_v1 % (s32) M2C_FIELD(((void *)D_003AF1F0), s32 *, 0));
    sp8A = M2C_FIELD(((void *)D_003AF1F0), s16 *, 8) + (M2C_FIELD(((void *)D_003AF1F0), s16 *, 0xC) * ((s32) (temp_v1 / (s32) M2C_FIELD(((void *)D_003AF1F0), s32 *, 0)) % (s32) M2C_FIELD(((void *)D_003AF1F0), s32 *, 4)));
    temp_v0 = func_001E6E10(0x4FEC);
    if (temp_v0 != NULL) {
        func_001EEAC0(var_v0, temp_v0);
        func_001EE630(var_v0, &sp88);
        func_001EF900(var_v0, 1);
    } else {
        func_001EF900(var_v0, 0);
    }
    var_v1_2 = &sp40;
    var_v0_3 = 0x40;
    if (var_v1_2 != NULL) {
        do {
            *var_v1_2 = 0;
            var_v0_3 -= 1;
            var_v1_2 += 1;
        } while (var_v0_3 != 0);
    }
    var_v0_4 = func_001EDC80(arg0, 1);
    if (var_v0_4 == NULL) {
        var_v0_4 = func_001EDD00(arg0);
    }
    temp_v0_2 = func_001E6E10(0x4FEC);
    if (temp_v0_2 != NULL) {
        func_001EEAC0(var_v0_4, temp_v0_2);
        func_001EE630(var_v0_4, ((void *)D_003AF2D8));
        func_001EF900(var_v0_4, 1);
    } else {
        func_001EF900(var_v0_4, 0);
    }
    var_v0_5 = func_001EDC80(arg0, 0);
    if (var_v0_5 == NULL) {
        var_v0_5 = func_001EDD00(arg0);
    }
    func_001EE580(var_v0_5, &sp40);
    func_001EF5B0(var_v0_4, &sp40);
}
