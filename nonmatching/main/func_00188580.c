/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FF45[];
extern void *D_00520080;

void func_00188580(void *arg0, void *arg1) {
    s8 var_v1;

    M2C_FIELD(arg0, s8 *, 3) = 0xFF;
    M2C_FIELD(arg1, s8 *, 3) = 0xFF;
    if (M2C_FIELD(D_00520080, u8 *, 5) != 0) {
        M2C_FIELD(arg0, s8 *, 0) = 0x99;
        M2C_FIELD(arg0, s8 *, 1) = 0x99;
        M2C_FIELD(arg0, s8 *, 2) = 0x99;
        M2C_FIELD(arg1, s8 *, 0) = 0xFF;
        M2C_FIELD(arg1, s8 *, 1) = 0xFF;
        M2C_FIELD(arg1, s8 *, 2) = 0xFF;
    } else {
        if ((*(u8 *)D_0051FF45) != 0) {
            M2C_FIELD(arg0, s8 *, 0) = 0x67;
            M2C_FIELD(arg0, s8 *, 1) = 0x66;
            M2C_FIELD(arg0, s8 *, 2) = 0x75;
            M2C_FIELD(arg1, s8 *, 0) = 0x58;
            var_v1 = 0x4A;
            M2C_FIELD(arg1, s8 *, 1) = 0x59;
        } else {
            M2C_FIELD(arg0, s8 *, 0) = 0x74;
            M2C_FIELD(arg0, s8 *, 1) = 0x73;
            M2C_FIELD(arg0, s8 *, 2) = 0x83;
            M2C_FIELD(arg1, s8 *, 0) = 0xFE;
            var_v1 = 0xF0;
            M2C_FIELD(arg1, s8 *, 1) = 0xFF;
        }
        M2C_FIELD(arg1, s8 *, 2) = var_v1;
    }
}
