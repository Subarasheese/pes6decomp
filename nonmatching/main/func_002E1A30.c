/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void func_001ED880(void *, f32);
extern void * func_001F2330(s32);
extern s32 func_001ED820(void *);
extern void func_002E18C0(void *);
extern f32 func_001ED860(void *);
extern void func_001EDA30(void *, s32);
extern void * func_001EDD00(void *);
extern void func_001ED840(void *, s8);
extern void func_001F2290(void *, s32);
extern s32 func_001F3D10(s32, u8);
extern s32 func_001F2410(void *);
extern void func_001F22B0(void *);
M2C_UNK func_001EDD90(void *);                      /* extern */
void *func_001EE0D0();                              /* extern */
M2C_UNK func_002E28F0(s32, s32, s32, s32);          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_002E1A30(void *arg0, s32 arg1) {
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    void *temp_v0;
    void *temp_v0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_a0 & 0xFF) && (arg1 > 0)) {
        if (arg1 >= 0x1C) {
            return;
        }
        if (temp_a0 & 0x100) {
            func_001F22B0(M2C_FIELD(arg0, void **, 0x1C));
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (arg1 | 0x100);
            temp_v0 = func_001F2330(M2C_FIELD(arg0, s32 *, 0x20));
            M2C_FIELD(arg0, void **, 0x1C) = temp_v0;
            func_001F2290(temp_v0, M2C_FIELD(arg0, s32 *, 0x18));
            func_001F3D10((s32) M2C_FIELD(arg0, void **, 0x1C), 1U);
            var_s0 = 9;
            switch (arg1) {                         /* switch 1; irregular */
            case 15:                                /* switch 1 */
                var_s0 = 1;
                break;
            case 3:                                 /* switch 1 */
            case 1:                                 /* switch 1 */
                var_s0 = 3;
                break;
            }
            M2C_FIELD(arg0, s32 *, 0x14) = var_s0;
            var_s1 = 0;
            if (var_s0 > 0) {
                do {
                    func_002E28F0(func_001F2410(M2C_FIELD(arg0, void **, 0x1C)), arg1, var_s0, var_s1);
                    var_s0 = M2C_FIELD(arg0, s32 *, 0x14);
                    var_s1 += 1;
                } while (var_s1 < var_s0);
            }
        } else {
            temp_s0 = func_001ED820(M2C_FIELD(arg0, void **, 0x1C)) & 0xFF;
            temp_f20 = func_001ED860(M2C_FIELD(arg0, void **, 0x1C));
            func_001EDD90(M2C_FIELD(arg0, void **, 0x1C));
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            temp_v0_2 = func_001EE0D0();
            M2C_FIELD(arg0, void **, 0x1C) = temp_v0_2;
            func_001EDA30(temp_v0_2, M2C_FIELD(arg0, s32 *, 0x18));
            func_001EDAE0(M2C_FIELD(arg0, void **, 0x1C), 1);
            var_s1_2 = 9;
            switch (arg1) {                         /* switch 2; irregular */
            case 15:                                /* switch 2 */
                var_s1_2 = 1;
                break;
            case 3:                                 /* switch 2 */
            case 1:                                 /* switch 2 */
                var_s1_2 = 3;
                break;
            }
            M2C_FIELD(arg0, s32 *, 0x14) = var_s1_2;
            var_s4 = 0;
            if (var_s1_2 > 0) {
                do {
                    func_002E28F0(func_001EDD00(M2C_FIELD(arg0, void **, 0x1C)), arg1, var_s1_2, var_s4);
                    var_s1_2 = M2C_FIELD(arg0, s32 *, 0x14);
                    var_s4 += 1;
                } while (var_s4 < var_s1_2);
            }
            func_001ED840(M2C_FIELD(arg0, void **, 0x1C), temp_s0 & 0xFF);
            func_001ED880(M2C_FIELD(arg0, void **, 0x1C), temp_f20);
        }
        func_002E18C0(arg0);
    }
}
