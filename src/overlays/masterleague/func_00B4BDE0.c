/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B4DFD0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */

typedef struct { char pad[0x34C]; s8 a; char p2[3]; s32 v; } S;

void func_00B4BDE0(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 old;
    S *temp_v0;
    temp_v0 = (S *)func_00B4DFD0();
    if (temp_v0 != 0) {
        temp_v1 = temp_v0->v;
        old = temp_v1 & 0xFF;
        if (arg0 > 0) {
            temp_v1_2 = temp_v1 + arg0;
            temp_v0->v = temp_v1_2;
            if (temp_v1_2 >= 8) {
                temp_v0->v = 8;
            }
        } else if (arg0 < 0) {
            temp_v1_3 = temp_v1 + arg0;
            temp_v0->v = temp_v1_3;
            if (temp_v1_3 <= 0) {
                temp_v0->v = 0;
            }
        }
        if ((old & 0xFF) != temp_v0->v) {
            func_00958000(0x51);
            temp_v0->a = 9;
        }
    }
}
