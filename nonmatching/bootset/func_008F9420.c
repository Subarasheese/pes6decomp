/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_008F9D60[];
extern char D_008F9D64[];
extern char D_008F9D68[];
extern char D_008F9D6C[];
extern char D_008F9D70[];
extern char D_008F9D74[];
extern char D_008F9DCC[];
extern char D_008F9DD0[];
extern char D_008F9DD4[];
extern char D_008FAE50[];
extern char D_008FAF40[];
extern char D_008FAF44[];
extern char D_008FAF48[];
extern char D_008FB030[];
extern char D_008FB0CD[];

void func_008F9420(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s32 var_a3_2;
    s32 var_a4;

    (*(s32 *)D_008FAF40) = (*(s32 *)D_008F9D60);
    (*(s32 *)D_008FAF44) = (*(s32 *)D_008F9D64);
    var_a4 = 0;
    (*(s32 *)D_008FAF48) = (*(s32 *)D_008F9D68);
    (*(s8 *)D_008FB0CD) = 1;
    var_a3 = ((void *)D_008FAE50);
    do {
        if ((var_a4 >= 0) && (var_a4 < 8)) {
            M2C_FIELD(var_a3, f32 *, 0xFC) = (f32) (*(f32 *)D_008F9D6C);
            M2C_FIELD(((void *)D_008FB030), s8 *, 0x9D) = 1;
            M2C_FIELD(var_a3, f32 *, 0x100) = (f32) (*(f32 *)D_008F9D70);
            M2C_FIELD(var_a3, f32 *, 0x104) = (f32) (*(f32 *)D_008F9D74);
        }
        var_a4 += 1;
        var_a3 += 0xC;
    } while (var_a4 < 8);
    var_a3_2 = 0;
    var_a2 = ((void *)D_008FAE50);
    do {
        if ((var_a3_2 >= 0) && (var_a3_2 < 0xA)) {
            M2C_FIELD(var_a2, f32 *, 0x15C) = (f32) (*(f32 *)D_008F9DCC);
            M2C_FIELD(((void *)D_008FB030), s8 *, 0x9D) = 1;
            M2C_FIELD(var_a2, f32 *, 0x160) = (f32) (*(f32 *)D_008F9DD0);
            M2C_FIELD(var_a2, f32 *, 0x164) = (f32) (*(f32 *)D_008F9DD4);
        }
        var_a3_2 += 1;
        var_a2 += 0xC;
    } while (var_a3_2 < 0xA);
}
