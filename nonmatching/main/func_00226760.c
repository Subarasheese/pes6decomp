/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_0022F150(void);
void func_00226760(s8 arg0) {
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;

    temp_s0 = func_0022F150();
    if ((func_00231240() != 1) && (temp_s0 != NULL)) {
        temp_v1 = arg0 & 0xFF;
        M2C_FIELD(temp_s0, s8 *, 2) = arg0;
        switch (temp_v1) {                          /* irregular */
        case 15:
            temp_s0_2 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_2 != NULL)) {
                M2C_FIELD(temp_s0_2, s8 *, 3) = 1;
                return;
            }
            break;
        case 18:
            temp_s0_3 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_3 != NULL)) {
                M2C_FIELD(temp_s0_3, s8 *, 3) = 2;
                return;
            }
            break;
        case 20:
            temp_s0_4 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_4 != NULL)) {
                M2C_FIELD(temp_s0_4, s8 *, 3) = 3;
                return;
            }
            break;
        case 22:
            temp_s0_5 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_5 != NULL)) {
                M2C_FIELD(temp_s0_5, s8 *, 3) = 4;
                return;
            }
            break;
        case 24:
            temp_s0_6 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_6 != NULL)) {
                M2C_FIELD(temp_s0_6, s8 *, 3) = 5;
                return;
            }
            break;
        case 26:
            temp_s0_7 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_7 != NULL)) {
                M2C_FIELD(temp_s0_7, s8 *, 3) = 6;
                return;
            }
            break;
        default:
            temp_s0_8 = func_0022F150();
            if ((func_00231240() != 1) && (temp_s0_8 != NULL)) {
                M2C_FIELD(temp_s0_8, s8 *, 3) = 0;
            }
            break;
        }
    }
}
