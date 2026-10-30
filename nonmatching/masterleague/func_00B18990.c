/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00229280(s32);
extern void * func_00229DF0(void);
extern void * func_00223C10(void);
extern s32 func_00226710(void);
s32 func_00224D90(s32, s32);                        /* extern */
void *func_00994760();                              /* extern */
M2C_UNK func_00B22420(s32, s32);                    /* extern */

void func_00B18990(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_v0;
    u16 var_s5;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s3;
    void *temp_s4;
    void *temp_v0;

    temp_s6 = func_00225820() & 0xFF;
    temp_s4 = func_00994760();
    temp_s3 = func_00229DF0();
    if ((((func_00226710() & 0xFF) == 0x1C) || ((func_00226710() & 0xFF) == 0x20)) && (temp_s2 = arg0 & 0xFF, ((temp_s2 < 0x48) != 0)) && ((arg1 & 0xFF) < 0x20) && (temp_s3 != NULL) && (temp_s4 != NULL) && (temp_v0 = func_00223C10(), (temp_v0 != NULL)) && (func_00224D90(arg0, arg1) & 0xFFFF)) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0) & 0xF;
        if ((temp_a0 != 0xA) && (temp_a0 != 9) && (temp_a0 != 8)) {
            return;
        }
        var_s5 = M2C_FIELD(temp_v0, u16 *, 4);
        if (var_s5 != 0) {
            if (M2C_FIELD(temp_s3, u8 *, 7) != 0) {
                var_v0 = 4;
            } else {
                temp_v1 = M2C_FIELD(temp_s3, u8 *, 6);
                switch (temp_v1) {                  /* irregular */
                case 3:
                    var_v0 = 3 & 0xFF;
                    break;
                case 2:
                    var_v0 = 2 & 0xFF;
                    break;
                case 1:
                    var_v0 = 1 & 0xFF;
                    break;
                default:
                case 0:
                    var_v0 = 0;
                    break;
                }
            }
            temp_v0_2 = func_00229280(var_v0 & 0xFF);
            if (temp_v0_2 != 0) {
                temp_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 4);
                temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0);
                if (temp_v0_3 != temp_v1_2) {
                    temp_v0_4 = temp_v1_2 - temp_v0_3;
                    var_s5 = ((s32) var_s5 / temp_v0_4) + (((s32) var_s5 % temp_v0_4) > 0);
                }
                M2C_FIELD(temp_v0, u16 *, 4) = (u16) (M2C_FIELD(temp_v0, u16 *, 4) - (var_s5 & 0xFFFF));
                func_00B22420(arg0, -(s32) var_s5);
                if ((temp_s6 & 0xFF) == temp_s2) {
                    M2C_FIELD(temp_s4, s32 *, 0x61AC0) = (s32) (M2C_FIELD(temp_s4, s32 *, 0x61AC0) + var_s5);
                }
            }
        }
    }
}
