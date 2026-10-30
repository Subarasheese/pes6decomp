/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF120(void *, s32, void *);
void *func_001EDC80(void *, s32);                   /* extern */
extern char D_003B3678[];
extern char D_003B367C[];
extern char D_003B3680[];
extern char D_003B3690[];
extern char D_003B3694[];
extern char D_003B3698[];
extern char D_003B369C[];
extern char D_003B36A0[];
extern char D_003B36A4[];
extern char D_003B36A8[];
extern char D_003B36AC[];
extern char D_003B36B0[];

void func_002E1580(void *arg0, s32 arg1) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    s32 sp90;
    f32 sp94;
    f32 sp98;
    s32 *var_s3_2;
    s32 *var_s4;
    s32 var_a2;
    s32 var_s3;
    s32 var_s4_2;
    u8 temp_a1;
    void *var_v0;
    void *var_v0_2;

    var_a2 = 9;
    temp_a1 = M2C_FIELD(arg0, u8 *, 0);
    sp90 = (*(s32 *)D_003B3678);
    sp94 = (*(f32 *)D_003B367C);
    sp60 = (*(s32 *)D_003B3690);
    sp98 = (*(f32 *)D_003B3680);
    sp64 = (*(f32 *)D_003B3694);
    sp68 = (*(f32 *)D_003B3698);
    sp6C = (*(f32 *)D_003B369C);
    sp70 = (*(f32 *)D_003B36A0);
    sp74 = (*(f32 *)D_003B36A4);
    sp78 = (*(f32 *)D_003B36A8);
    sp7C = (*(f32 *)D_003B36AC);
    sp80 = (*(f32 *)D_003B36B0);
    switch (temp_a1) {                              /* switch 1; irregular */
    case 15:                                        /* switch 1 */
        var_a2 = 1;
        break;
    case 3:                                         /* switch 1 */
    case 1:                                         /* switch 1 */
        var_a2 = 3;
        break;
    }
    switch (var_a2) {                               /* switch 2; irregular */
    case 9:                                         /* switch 2 */
        var_s3 = 0;
        var_s4 = &sp60;
        do {
            if (!((s32) M2C_FIELD(arg0, u8 *, 0) & 0x100)) {
                var_v0 = func_001EDC80(M2C_FIELD(arg0, void **, 0x1C), var_s3);
            } else {
                var_v0 = func_001EDC80(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x48), var_s3);
            }
            func_001EF120(var_v0, 0, arg1 + (*var_s4 * 4));
            func_001EF120(var_v0, 1, arg1 + ((*var_s4 + 1) * 4));
            func_001EF120(var_v0, 2, arg1 + ((*var_s4 + 4) * 4));
            func_001EF120(var_v0, 3, arg1 + ((*var_s4 + 5) * 4));
            var_s3 += 1;
            var_s4 += 4;
        } while (var_s3 < 9);
        return;
    case 3:                                         /* switch 2 */
        var_s4_2 = 0;
        var_s3_2 = &sp90;
        do {
            if (!((s32) M2C_FIELD(arg0, u8 *, 0) & 0x100)) {
                var_v0_2 = func_001EDC80(M2C_FIELD(arg0, void **, 0x1C), var_s4_2);
            } else {
                var_v0_2 = func_001EDC80(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x48), var_s4_2);
            }
            func_001EF120(var_v0_2, 0, arg1 + (*var_s3_2 * 4));
            func_001EF120(var_v0_2, 1, arg1 + ((*var_s3_2 + 1) * 4));
            func_001EF120(var_v0_2, 2, arg1 + ((*var_s3_2 + 2) * 4));
            func_001EF120(var_v0_2, 3, arg1 + ((*var_s3_2 + 3) * 4));
            var_s4_2 += 1;
            var_s3_2 += 4;
        } while (var_s4_2 < 3);
        return;
    }
}
