/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
M2C_UNK func_001EE630(void *, s16 *, s16, s16);     /* extern */
M2C_UNK func_00C94090(void **, s32, f32 *, f32 *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CA8540[];
extern char D_00CA8542[];
extern char D_00CA8544[];
extern char D_00CA8546[];
extern char D_00CCBCE4[];
extern char D_00CCBD1E[];
extern char D_00CCCE30[];

void func_00C711D0(s32 arg0, s32 arg1) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s16 sp68;
    s16 sp6A;
    s16 sp6C;
    s16 sp6E;
    f32 sp70;
    f32 sp74;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    void **var_s1;
    void *temp_a0;

    var_s3 = arg1;
    if ((*(u8 *)D_00CCBD1E) != 0) {
        if (var_s3 >= 0x64) {
            var_s3 = 0x63;
        }
        temp_a0 = ((void *)D_00CCBCE4) + (arg0 * 0x10);
        var_s1 = ((void *)D_00CCCE30) + (((arg0 * 2) + 0x4B) * 4) + 0x1C;
        sp50 = M2C_FIELD(temp_a0, f32 *, 0);
        sp54 = M2C_FIELD(temp_a0, f32 *, 4);
        sp58 = M2C_FIELD(temp_a0, f32 *, 8);
        sp5C = M2C_FIELD(temp_a0, f32 *, 0xC);
        if (((var_s3 / 10) + ((u32) var_s3 >> 0x1F)) != 0) {
            var_s0 = 2;
        } else {
            var_s0 = 1;
        }
        sp70 = (f32) (*(s16 *)D_00CA8544);
        sp74 = (f32) (*(s16 *)D_00CA8546);
        func_00C94090(var_s1, var_s0, &sp50, &sp70, 5, 5);
        var_s2 = 0;
        if (var_s0 > 0) {
            do {
                sp6C = (*(s16 *)D_00CA8544);
                sp6E = (*(s16 *)D_00CA8546);
                sp6A = (*(s16 *)D_00CA8542);
                sp68 = (*(s16 *)D_00CA8540) + (((var_s3 % 10) & 0xFF) * (*(s16 *)D_00CA8544));
                func_001EE630(*var_s1, &sp68, (*(s16 *)D_00CA8540), (*(s16 *)D_00CA8544));
                func_001EF900(*var_s1, 1);
                var_s2 += 1;
                var_s1 += 4;
                var_s3 = (var_s3 / 10) + ((u32) var_s3 >> 0x1F);
            } while (var_s2 < var_s0);
        }
    }
}
