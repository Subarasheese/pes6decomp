/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E1CA0(void *);
extern void func_001F23E0(void *, void *);
extern void func_002F1970(void *, void *);
M2C_UNK func_002DF960(s32);                         /* extern */

void func_002F2D80(void *arg0, void *arg1) {
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    void *var_s2;
    void *var_s3_2;
    void *var_s3_3;
    void *var_s3_4;

    var_s3 = 0;
    var_s2 = arg0;
    do {
        func_002F1970(var_s2, arg1);
        var_s3 += 1;
        var_s2 += 0x24;
    } while (var_s3 < 2);
    var_s2_2 = 0;
    var_s3_2 = arg0;
    do {
        func_002F1970(var_s3_2 + 0x48, arg1);
        var_s2_2 += 1;
        var_s3_2 += 0x24;
    } while (var_s2_2 < 8);
    var_s2_3 = 0;
    var_s3_3 = arg0;
    do {
        func_002F1970(var_s3_3 + 0x168, NULL);
        func_002E1CA0(var_s3_3 + 0x18C);
        var_s2_3 += 1;
        var_s3_3 += 0x4C;
    } while (var_s2_3 < 0xA);
    func_002E1CA0(arg0 + 0x46C);
    var_s2_4 = 0;
    var_s3_4 = arg0;
    do {
        func_001F23E0(arg1, M2C_FIELD(var_s3_4, void **, 0x464));
        var_s2_4 += 1;
        M2C_FIELD(var_s3_4, void **, 0x464) = NULL;
        var_s3_4 += 4;
    } while (var_s2_4 < 2);
    M2C_FIELD(arg0, s8 *, 0x493) = 0;
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x494));
    M2C_FIELD(arg0, s32 *, 0x494) = 0;
    M2C_FIELD(arg0, s8 *, 0x492) = 0;
    M2C_FIELD(arg0, s8 *, 0x491) = 0;
    M2C_FIELD(arg0, s8 *, 0x490) = 0;
}
