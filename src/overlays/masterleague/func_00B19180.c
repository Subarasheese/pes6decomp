/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 a:1, b:6, c:1; u8 d:3, e:4, f:1; u8 p[2]; u16 x; } B;
s32 func_00225820();                                /* extern */
s32 func_00938F10(s32);                             /* extern */
B *func_00994C60(s32, s32);                      /* extern */
s32 func_00B19310(s32, s32, s32);                   /* extern */
s32 func_00B1A030(s32, s32);                        /* extern */

void func_00B19180(s32 arg0) {
    u16 temp_s1;
    s32 temp_s0;
    s32 var_s4;
    s32 temp_s3;
    s32 temp_s2;
    B *temp_v0;
    B *temp_v0_2;
    B *temp_v0_3;

    temp_s0 = func_00225820() & 0xFF;
    temp_s3 = func_00938F10(arg0) & 0xFF;
    if ((temp_s3 != 0xFF) && (temp_s3 < 0x48)) {
        temp_s2 = func_00B1A030(temp_s3, arg0) & 0xFF;
        if (temp_s2 != 0xFF) {
            temp_v0 = func_00994C60(temp_s3, temp_s2);
            if ((temp_v0 != NULL) && ((temp_s1 = arg0 & 0xFFFF, (temp_v0->x != temp_s1)) || (temp_v0->b != 9))) {
                var_s4 = 0;
                while (1) {
                    temp_v0_2 = func_00994C60(temp_s3, var_s4);
                    if ((temp_s1 == temp_v0_2->x) && (temp_v0_2->b == 9)) {
                        break;
                    }
                    var_s4 += 1;
                    if (var_s4 >= 0x25) {
                        if (func_00B19310(temp_s3, temp_s2 & 0xFF, arg0) != 0) {
                            temp_v0_3 = func_00994C60(temp_s3, temp_s2);
                            if (temp_v0_3 != NULL) {
                                temp_v0_3->a = 1;
                                temp_v0_3->b = 9;
                                if ((temp_s0 & 0xFF) == temp_s3) {
                                    temp_v0_3->e = 3;
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
}
