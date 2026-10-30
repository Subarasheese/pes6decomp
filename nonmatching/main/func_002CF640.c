/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(M2C_UNK);                         /* extern */
void *func_001EDC80(void *, M2C_UNK);               /* extern */
M2C_UNK func_001EE580(void *, s8 *);                /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF5B0(void *, s8 *);                /* extern */
M2C_UNK func_002D0640(M2C_UNK, M2C_UNK, M2C_UNK, u8, M2C_UNK); /* extern */
M2C_UNK func_002D0A00(M2C_UNK, void *, s32);        /* extern */
extern char D_003AF2D8[];
extern char D_003AF350[];
extern char D_003AF352[];
extern char D_003AF354[];
extern char D_003AF356[];

void func_002CF640(void *arg0, void *arg1, s32 arg2) {
    s8 sp50;
    s16 sp98;
    s16 sp9A;
    s16 sp9C;
    s16 sp9E;
    M2C_UNK var_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_v0_2;
    s8 *var_v1;
    void *var_v0;
    void *var_v0_3;
    void *var_v0_4;

    sp98 = (*(s16 *)D_003AF350);
    sp9A = (*(s16 *)D_003AF352);
    sp9C = (*(s16 *)D_003AF354);
    sp9E = (*(s16 *)D_003AF356);
    if (arg2 == 0) {
        var_s3 = 0x4FF0;
    } else {
        var_s3 = 0x4FF1;
    }
    func_002D0640(var_s3, 0x4FEC, 1, M2C_FIELD(arg1, u8 *, 0x2F), 5);
    var_s2 = 5;
    if (5 < 9) {
        do {
            func_002D0A00(var_s3, arg1 + (var_s2 * 2), var_s2);
            var_s2 += 1;
        } while (var_s2 < 9);
    }
    var_v0 = func_001EDC80(arg0, 0);
    if (var_v0 == NULL) {
        var_v0 = func_001EDD00(arg0);
    }
    temp_v0 = func_001E6E10(var_s3);
    if (temp_v0 != 0) {
        func_001EEAC0(var_v0, temp_v0);
        func_001EE630(var_v0, &sp98);
        func_001EF900(var_v0, 1);
    } else {
        func_001EF900(var_v0, 0);
    }
    func_001EDAE0(arg0, 1);
    var_v1 = &sp50;
    var_v0_2 = 0x40;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0_2 -= 1;
            var_v1 += 1;
        } while (var_v0_2 != 0);
    }
    var_v0_3 = func_001EDC80(arg0, 1);
    if (var_v0_3 == NULL) {
        var_v0_3 = func_001EDD00(arg0);
    }
    temp_v0_2 = func_001E6E10(0x4FEC);
    if (temp_v0_2 != 0) {
        func_001EEAC0(var_v0_3, temp_v0_2);
        func_001EE630(var_v0_3, ((void *)D_003AF2D8));
        func_001EF900(var_v0_3, 1);
    } else {
        func_001EF900(var_v0_3, 0);
    }
    var_v0_4 = func_001EDC80(arg0, 0);
    if (var_v0_4 == NULL) {
        var_v0_4 = func_001EDD00(arg0);
    }
    func_001EE580(var_v0_4, &sp50);
    func_001EF5B0(var_v0_3, &sp50);
}
