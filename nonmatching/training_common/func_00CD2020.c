/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D8EB0(void *);
extern void func_00264790(void *, u8);
extern void func_002D8FB0(void);
extern int func_002646D0(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00807E10(s32);                             /* extern */
s32 func_00819220(s32, s32);                        /* extern */
M2C_UNK func_0081BEC0(s32, s32);                    /* extern */
s32 func_00824040();                                /* extern */
s32 func_00824080();                                /* extern */
M2C_UNK func_00824090(s32);                         /* extern */
s32 func_00CDCCB0();                                /* extern */

void func_00CD2020(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_s0 = 1;
        break;
    case 0:                                         /* switch 1 */
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            var_s2 = 0;
            if (func_00CDCCB0() == 1) {
                var_s2 = 1;
            } else if (func_00807E10(arg0 + 0x9C) != 0) {
                var_s2 = 1;
            }
            if (var_s2 != 0) {
                func_002D8FB0();
                var_s3 = 0;
                var_s2_2 = arg0;
                do {
                    func_002D8EB0(var_s2_2 + 0x2B8);
                    var_s3 += 1;
                    var_s2_2 += 0x18;
                } while (var_s3 < 4);
                func_002646E0(arg0);
            }
        } else {
            func_002646E0(arg0);
        }
        break;
    case 1:                                         /* switch 1 */
        func_00824090(func_00824040());
        func_002646E0(arg0);
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_00824080();
        temp_v0_2 = func_00819220(arg0 + 0x9C, temp_v0);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 2:                                     /* switch 2 */
            func_0081BEC0(arg0 + 0x9C, temp_v0);
            M2C_FIELD(arg0, s32 *, 0xB0) = 1;
            func_002646E0(arg0);
            break;
        case 1:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0xB0) = 0;
            func_002646E0(arg0);
            break;
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        func_00264790((void *) arg0, 0x16U);
    }
}
