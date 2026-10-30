/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0081D100(s32, M2C_UNK);                /* extern */
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
s64 func_00858B60(s16 *, M2C_UNK);                  /* extern */
s32 func_0085E4C0(s16);                             /* extern */
s32 func_0087C840();                                /* extern */
s32 func_0087D150();                                /* extern */
s32 func_0087D2C0();                                /* extern */
s32 func_0087D3B0();                                /* extern */
extern char D_003AE992[];
extern void *D_003EA380;
extern char D_008B21C0[];

void func_0087CB10(void *arg0) {
    M2C_UNK32 var_a0;
    s16 *var_s1;
    s16 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;

    temp_v1 = M2C_FIELD(D_003EA380, s32 *, 0);
    var_s3 = 0;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_v0 = func_0087C840();
block_9:
        var_s3 = var_v0;
        break;
    case 2:
        var_v0 = func_0087D2C0();
        goto block_9;
    case 3:
        var_v0 = func_0087D3B0();
        goto block_9;
    case 4:
        var_v0 = func_0087D150();
        goto block_9;
    }
    if ((*(u8 *)D_003AE992) != 0) {
        func_0081D240(0);
        func_0081D200(0);
    } else {
        var_s2 = 1;
        var_s1 = ((void *)D_008B21C0);
        if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 2) {
            do {
                temp_a0 = *var_s1;
                temp_s0 = temp_a0 - 1;
                if (func_0085E4C0(temp_a0) != 3) {
                    func_0081D100(temp_s0, 0);
                } else {
                    func_0081D100(temp_s0, 1);
                }
                var_s2 += 1;
                var_s1 += 0x1C;
            } while (var_s2 < (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1));
        }
    }
    if (var_s3 == 0) {
        var_a0 = 0;
    } else {
        var_a0 = 3;
    }
    M2C_FIELD(D_003EA380, M2C_UNK32 *, 0xC) = var_a0;
    M2C_FIELD(D_003EA380, M2C_UNK32 *, 0x10) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(D_003EA380, M2C_UNK32 *, 0xC);
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(D_003EA380, M2C_UNK32 *, 0x10);
}
