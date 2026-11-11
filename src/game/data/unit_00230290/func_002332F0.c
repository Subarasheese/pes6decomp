/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_00229460();                                /* extern */
s32 Pes6SaveData_IsUnavailable();                                /* extern */
void func_00233040(s32, u8 *, u8 *);           /* extern */
void func_00236FE0();                            /* extern */

void func_002332F0(void) {
    u8 *temp_s0;

    temp_s0 = func_00229460();
    if ((Pes6SaveData_IsUnavailable() != 1) && (temp_s0 != 0)) {
        func_00236FE0();
        func_00233040(0xFF, temp_s0 + 0x71, temp_s0 + 0x4BA6);
    }
}
