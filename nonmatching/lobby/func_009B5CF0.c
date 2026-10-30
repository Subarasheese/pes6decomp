/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
void *func_0099AF50(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_0099B690(void *, s32, M2C_UNK *);          /* extern */
M2C_UNK func_009B5270(void *, s32, s32);            /* extern */
M2C_UNK func_009B5430(void *, s32, s32);            /* extern */
extern char D_009FF660[];
extern char D_00A02B08[];

void func_009B5CF0(void *arg0) {
    M2C_UNK (*var_s6)(void *, s32, s32);
    s32 *var_s1;
    s32 var_s3;
    s32 var_s4;
    void *temp_v0;
    void *var_s0;
    void *var_s2;

    if ((M2C_FIELD(arg0, s32 *, 0x2F4) == 1) && (M2C_FIELD(arg0, s32 *, 0x2F8) != 0)) {
        var_s6 = func_009B5270;
    } else {
        var_s6 = func_009B5430;
    }
    var_s4 = 0;
    var_s2 = arg0;
    do {
        if (M2C_FIELD(var_s2, void **, 0x84) == NULL) {
            temp_v0 = func_0099AF50(M2C_FIELD(arg0, s32 *, 0x30), 8, 0);
            M2C_FIELD(var_s2, void **, 0x84) = temp_v0;
            func_001D7D80(temp_v0, 1);
            M2C_FIELD(var_s2, void **, 0x88) = func_0099AF50(M2C_FIELD(arg0, s32 *, 0x30), 2, 0);
            var_s3 = 0;
            var_s1 = ((void *)D_009FF660);
            var_s0 = var_s2;
            do {
                M2C_FIELD(var_s0, s32 *, 0x8C) = func_0099B690(M2C_FIELD(var_s2, void **, 0x84), *var_s1, ((void *)D_00A02B08));
                var_s3 += 1;
                var_s1 += 4;
                var_s0 += 4;
            } while (var_s3 < 9);
            if (var_s4 != 0) {
                var_s6(arg0, var_s4, var_s4 - 1);
            } else {
                var_s6(arg0, 0, 0);
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x2E4) >= var_s4) {
            if (var_s4 != 0) {
                var_s6(arg0, var_s4, var_s4 - 1);
            } else {
                var_s6(arg0, 0, 0);
            }
            func_001D7D80(M2C_FIELD(var_s2, void **, 0x84), M2C_FIELD(arg0, s16 *, 0x2F0));
        }
        var_s4 += 1;
        var_s2 += 0x2C;
    } while (var_s4 < 0xC);
}
