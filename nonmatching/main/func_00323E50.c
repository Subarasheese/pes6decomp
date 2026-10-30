/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
s32 func_00292440(s32, s32);                        /* extern */
s32 func_00292660(s32, M2C_UNK);                    /* extern */
extern char D_003B72A0[];
extern char D_003B72A4[];
extern char D_003B72A8[];
extern char D_003B72AC[];
extern char D_003B72B0[];
extern char D_003B72B4[];
extern char D_003B72B8[];
extern char D_003B72BC[];
extern char D_003B72C0[];
extern char D_003B72C4[];
extern char D_003B72C8[];
extern char D_003B72CC[];
extern char D_00591C09[];

s32 func_00323E50(void *arg0) {
    s32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 *var_s0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    void *var_s1;

    var_s3 = 0;
    var_s1 = arg0;
    sp50 = (*(s32 *)D_003B72A0);
    sp54 = (*(f32 *)D_003B72A4);
    sp58 = (*(f32 *)D_003B72A8);
    sp5C = (*(f32 *)D_003B72AC);
    sp60 = (*(f32 *)D_003B72B0);
    sp64 = (*(f32 *)D_003B72B4);
    sp68 = (*(f32 *)D_003B72B8);
    sp6C = (*(f32 *)D_003B72BC);
    sp70 = (*(f32 *)D_003B72C0);
    sp74 = (*(f32 *)D_003B72C4);
    sp78 = (*(f32 *)D_003B72C8);
    sp7C = (*(f32 *)D_003B72CC);
    do {
        M2C_FIELD(var_s1, s32 *, 0x40) = 0xE;
        if ((func_00309420() == 0) && ((*(u8 *)D_00591C09) != 0)) {
            var_s2 = 0;
            var_s0 = &sp50;
            do {
                if (func_00292440(var_s3, M2C_FIELD(var_s0, s32 *, 0)) != 0) {
                    if ((*(u8 *)D_00591C09) == 0xE) {
                        temp_v1 = M2C_FIELD(var_s0, s32 *, 0);
                        switch (temp_v1) {          /* irregular */
                        case 2:
                            var_v0 = 0xC;
                            break;
                        case 1:
                            var_v0 = 0xD;
                            break;
                        case 4:
                            var_v0 = 6;
                            break;
                        default:
                            var_v0 = M2C_FIELD(var_s0, s32 *, 4);
                            break;
                        }
                    } else {
                        var_v0 = M2C_FIELD(var_s0, s32 *, 4);
                    }
                    M2C_FIELD(var_s1, s32 *, 0x40) = var_v0;
                }
                var_s2 += 1;
                var_s0 += 8;
            } while (var_s2 < 6);
            if (((func_00292660(var_s3, 4) & 0xFF) == 3) || ((func_00292660(var_s3, 0) & 0xFF) == 3)) {
                M2C_FIELD(var_s1, s32 *, 0x40) = 9;
            } else if (((func_00292660(var_s3, 1) & 0xFF) == 3) || ((func_00292660(var_s3, 2) & 0xFF) == 3)) {
                if ((*(u8 *)D_00591C09) == 0xE) {
                    M2C_FIELD(var_s1, s32 *, 0x40) = 0xA;
                }
            } else if ((func_00292660(var_s3, 4) & 0xFF) == 3) {
                M2C_FIELD(var_s1, s32 *, 0x40) = 0xA;
            } else if ((func_00292660(var_s3, 4) & 0xFF) == 1) {
                M2C_FIELD(var_s1, s32 *, 0x40) = 0xB;
            }
        }
        var_s3 += 1;
        var_s1 += 4;
    } while (var_s3 < 2);
    return 1;
}
