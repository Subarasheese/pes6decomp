/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008ECB60[];
extern char D_008ECB70[];
extern char D_008ECB80[];
extern char D_008ECB81[];
extern char D_008ECB82[];
extern char D_008ECB83[];

void func_008BB3F0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    u8 var_v1;
    void *temp_a3;
    void *temp_a3_2;

    temp_v1 = arg1 & 0xFF;
    if (temp_v1 >= 5) {
        var_v1 = 0xFF;
        M2C_FIELD(arg0, u8 *, 0) = 0xFFU;
        M2C_FIELD(arg0, u8 *, 1) = 0xFFU;
        M2C_FIELD(arg0, u8 *, 2) = 0xFFU;
    } else if (arg3 == 0) {
        M2C_FIELD(arg0, u8 *, 0) = (u8) (*(u8 *)D_008ECB80);
        var_v1 = (*(u8 *)D_008ECB83);
        M2C_FIELD(arg0, u8 *, 1) = (u8) (*(u8 *)D_008ECB81);
        M2C_FIELD(arg0, u8 *, 2) = (u8) (*(u8 *)D_008ECB82);
    } else if (arg2 == 0) {
        temp_a3 = ((void *)D_008ECB60) + (temp_v1 * 4);
        M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(temp_a3, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(temp_a3, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(temp_a3, u8 *, 2);
        var_v1 = M2C_FIELD(temp_a3, u8 *, 3);
    } else {
        temp_a3_2 = ((void *)D_008ECB70) + (temp_v1 * 4);
        M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(temp_a3_2, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(temp_a3_2, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(temp_a3_2, u8 *, 2);
        var_v1 = M2C_FIELD(temp_a3_2, u8 *, 3);
    }
    M2C_FIELD(arg0, u8 *, 3) = var_v1;
}
