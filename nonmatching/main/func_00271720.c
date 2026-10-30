/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00287800(void);
extern void func_00287640(void);
extern void func_00186260(void);
extern int func_002DCA30(void);
extern int func_00287620(void);
extern void func_00182B30(int);
extern int func_00188A50(void);
extern void func_001AA620(void *);
s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00270EE0(u8);                          /* extern */
M2C_UNK func_002B5470(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_002CA520();                            /* extern */
M2C_UNK func_00922060();                            /* extern */
M2C_UNK func_00956460();                            /* extern */
M2C_UNK func_0099FF00();                            /* extern */
M2C_UNK func_009A0DA0();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC69A0();                            /* extern */
extern char D_00591A90[];
extern char D_00591C09[];
extern char D_00591DB4[];
extern char D_00591DCC[];
extern char D_00591DCD[];
extern char D_00591DD1[];
extern char D_00591E00[];
extern char D_00591F11[];
extern char D_005922E8[];
extern char D_00592370[];
extern char D_005924C8[];
extern char D_005924C9[];
extern char Pes6MatchSquads[];
extern char D_005E2C30[];
extern char D_00CBBE00[];

void func_00271720(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a3;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    M2C_UNK *var_s3;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s4;
    s32 var_v1;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;

    if (func_00152130(1, 0x10) != 0) {
        func_00287640();
        func_00922060();
        func_00956460();
        func_001AA620(func_00188A50());
        (*(s8 *)D_00591DB4) = 0;
        (*(s8 *)D_00591F11) = 0;
        (*(s8 *)D_00592370) = 0;
        (*(s8 *)D_005922E8) = 0;
        (*(s8 *)D_00CBBE00) = 0xFF;
        (*(s8 *)D_005924C8) = 0xFF;
        var_s4 = 0;
        var_s3 = ((void *)D_00591E00);
        (*(s8 *)D_005924C9) = 0xFF;
        var_s2 = ((void *)D_00591A90);
        var_s1 = ((void *)Pes6MatchSquads);
        var_s0 = ((void *)D_005E2C30);
        do {
            M2C_FIELD(var_s3, s8 *, 0xF6) = 0;
            (*(s8 *)D_00591DD1) = 0;
            var_a2 = 0;
            M2C_FIELD(var_s3, s8 *, 0xF8) = 0;
            M2C_FIELD(var_s2, s8 *, 0x8A) = 0xB;
            var_a1 = var_s1;
loop_3:
            if ((*(u8 *)D_00591C09) != 5) {
                M2C_FIELD(var_a1, s8 *, 0xD5) = 0;
                M2C_FIELD(var_a1, s8 *, 0xD6) = 0;
            }
            var_a2 += 1;
            var_a1 += 0x348;
            if (var_a2 < 0x20) {
                goto loop_3;
            }
            func_002B5470(var_s4, var_s0, var_a2);
            var_s4 += 1;
            var_s3 += 1;
            var_s2 += 0x8B;
            var_s1 += 0x6900;
            var_s0 += 0x166;
        } while (var_s4 < 2);
        var_a2_2 = 0;
        var_a3 = ((void *)D_00591A90);
        do {
            var_a1_2 = 0;
loop_10:
            temp_a0 = var_a3 + var_a1_2;
            temp_v1 = M2C_FIELD(temp_a0, u8 *, 7);
            var_a1_2 += 5;
            M2C_FIELD(temp_a0, u8 *, 0x47) = temp_v1;
            M2C_FIELD(temp_a0, u8 *, 0x48) = (u8) M2C_FIELD(temp_a0, u8 *, 8);
            M2C_FIELD(temp_a0, u8 *, 0x49) = (u8) M2C_FIELD(temp_a0, u8 *, 9);
            M2C_FIELD(temp_a0, u8 *, 0x4A) = (u8) M2C_FIELD(temp_a0, u8 *, 0xA);
            M2C_FIELD(temp_a0, u8 *, 0x4B) = (u8) M2C_FIELD(temp_a0, u8 *, 0xB);
            if (var_a1_2 < 6) {
                goto loop_10;
            }
            temp_a0_2 = var_a3 + var_a1_2;
            var_a2_2 += 1;
            temp_v1_2 = M2C_FIELD(temp_a0_2, u8 *, 7);
            var_a3 += 0x8B;
            M2C_FIELD(temp_a0_2, u8 *, 0x47) = temp_v1_2;
        } while (var_a2_2 < 2);
        if ((*(u8 *)D_00591C09) != 0xA) {
            (*(u8 *)D_00591DCD) = 0;
            var_v1 = (s32) (*(u8 *)D_00591DCD) % 2;
        } else {
            (*(u8 *)D_00591DCD) = func_00287620();
            var_v1 = (s32) (*(u8 *)D_00591DCD) % 2;
        }
        (*(s8 *)D_00591DCC) = (s8) var_v1;
        func_00287800();
        func_002CA520();
        func_00BC69A0();
        func_0099FF00();
        func_00186260();
        if (func_002DCA30() != 0) {
            func_00182B30(1);
        }
        func_009A0DA0();
        if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 1) && ((*(u8 *)D_00591C09) != 2)) {
            func_00270EE0((*(u8 *)D_00591C09));
        }
        func_009E1D30(0, 2);
    }
}
