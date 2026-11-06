/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00223C10(void);
s32 func_00224D90(s32, s32);                        /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */
M2C_UNK func_00B182F0(s32, s32);                    /* extern */
M2C_UNK func_00B1CC10(s32);                         /* extern */

typedef struct { u8 b0; u8 pad:2; u8 cnt:6; } S;

void func_00B18490(s32 arg0, s32 arg1) {
    S *temp_s0;
    s32 temp_a0;
    s32 temp_a1;

    temp_s0 = func_00223C10();
    if ((func_00224D90(arg0, arg1) & 0xFFFF) && (temp_s0 != NULL)) {
        temp_a0 = temp_s0->b0 & 0xF;
        switch (temp_a0) {
        case 5:
        case 6:
        case 7:
            break;
        default:
            return;
        }
        temp_a1 = (u8) (temp_s0->cnt + 0);
        if (temp_a1 > 0) {
            temp_s0->cnt = temp_a1 + 0xFF;
        }
        if (temp_s0->cnt == 0) {
            func_00B182F0(arg0, arg1);
            if ((arg0 & 0xFF) == (func_00225820() & 0xFF)) {
                func_00B1CC10(arg0);
                func_00AFF3C0();
            }
        }
    }
}
