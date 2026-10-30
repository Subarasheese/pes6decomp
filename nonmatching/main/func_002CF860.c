/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(s32, s32, s16, s16, s16);         /* extern */
void *func_001EDC80(M2C_UNK);                       /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
extern char D_003AF190[];
extern char D_003AF1B0[];
extern char D_003AF1E0[];
extern char D_003AF1E4[];
extern char D_003AF1E8[];
extern char D_003AF1EA[];
extern char D_003AF1EC[];
extern char D_003AF220[];
extern char D_003AF250[];

void func_002CF860(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp68;
    s16 sp6A;
    s16 sp6C;
    s16 sp6E;
    M2C_UNK *var_a3;
    s16 *var_a1_3;
    s16 temp_a3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    u32 var_v0_2;
    u8 *var_a0;
    u8 *var_a0_2;
    void *var_v0;

    var_v0 = func_001EDC80(0);
    if (var_v0 == NULL) {
        var_v0 = func_001EDD00(arg0);
    }
    switch (arg2) {                                 /* irregular */
    case 2:
        if (!(arg4 & 0xFF)) {
            var_a1 = 0;
            var_a0 = ((void *)D_003AF190);
loop_20:
            if ((arg3 & 0xFF) != *var_a0) {
                var_a1 += 1;
                var_a0 += 1;
                if (var_a1 >= 0x13) {
                    goto block_25;
                }
                goto loop_20;
            }
            var_v0_2 = var_a1 + 0xCC;
        } else {
block_25:
            var_v0_2 = (arg3 & 0xFF) + 0x30;
        }
        break;
    case 1:
        if (arg4 & 0xFF) {
            var_v0_2 = arg3 & 0xFF;
        } else {
            var_v0_2 = (arg3 & 0xFF) + 0x18;
        }
        break;
    default:
        var_v0_2 = 0x107 - (arg4 & 0xFF);
        break;
    case 4:
    case 3:
        if (!(arg4 & 0xFF)) {
            var_a1_2 = 0;
            var_a0_2 = ((void *)D_003AF1B0);
loop_29:
            if ((arg3 & 0xFF) != *var_a0_2) {
                var_a1_2 += 1;
                var_a0_2 += 1;
                if (var_a1_2 >= 0x27) {
                    goto block_35;
                }
                goto loop_29;
            }
            var_v0_2 = var_a1_2 + 0xDF;
        } else {
block_35:
            var_v0_2 = (arg3 & 0xFF) + 0x5A;
        }
        break;
    }
    if (arg1 == 0) {
        var_a3 = ((void *)D_003AF250);
    } else {
        var_a3 = ((void *)D_003AF220);
    }
    var_a1_3 = &sp68;
    var_v1 = 8;
    if (var_a1_3 != NULL) {
        do {
            *var_a1_3 = 0;
            var_v1 -= 1;
            var_a1_3 += 1;
        } while (var_v1 != 0);
    }
    sp6C = (*(s16 *)D_003AF1EA);
    sp6E = (*(s16 *)D_003AF1EC);
    temp_a3 = (*(s16 *)D_003AF1EA) * ((s32) var_v0_2 % (s32) (*(s32 *)D_003AF1E0));
    sp68 = temp_a3;
    sp6A = (*(s16 *)D_003AF1E8) + ((*(s16 *)D_003AF1EC) * ((s32) ((s32) var_v0_2 / (s32) (*(s32 *)D_003AF1E0)) % (s32) (*(s32 *)D_003AF1E4)));
    temp_v0 = func_001E6E10(*(var_a3 + (((var_v0_2 / 30) + (var_v0_2 >> 0x1F)) * 4)), (*(s32 *)D_003AF1E4), (*(s16 *)D_003AF1EC), temp_a3, (*(s16 *)D_003AF1EA));
    if (temp_v0 != 0) {
        func_001EEAC0(var_v0, temp_v0);
        func_001EE630(var_v0, &sp68);
        func_001EF900(var_v0, 1);
        return;
    }
    func_001EF900(var_v0, 0);
}
