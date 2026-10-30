/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_002BB820(int, int);
M2C_UNK func_001AAF50(void *, M2C_UNK);             /* extern */
M2C_UNK func_002BB870(u8, M2C_UNK);                 /* extern */
M2C_UNK func_002BBF20(M2C_UNK *);                   /* extern */
M2C_UNK func_002BC2B0(M2C_UNK);                     /* extern */
M2C_UNK func_00B24A80(M2C_UNK);                     /* extern */
M2C_UNK func_00B25220();                            /* extern */
M2C_UNK func_00B25C50(M2C_UNK);                     /* extern */
void *func_00B2A420(u8);                            /* extern */
extern char D_003B91B0[];
extern char D_00592740[];
extern char D_00CBBDF6[];
extern char D_00CBBDF7[];
extern char D_00CBBDFD[];
extern char D_00CBBE04[];

void func_00C985F0(void) {
    M2C_UNK var_a0;
    s32 var_s1;
    u16 temp_a0;
    void *temp_v0;

    var_s1 = 0;
    temp_v0 = func_00B2A420((*(u8 *)D_00CBBE04));
    temp_a0 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), u16 *, 0x18);
    if (((temp_a0 == 0xD) || (temp_a0 == 0xF) || (temp_a0 == 0x12) || (temp_a0 == 0x16)) && (M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), u8 *, 0x4C) != 0x26)) {
        if (((s32) (*(u8 *)D_00CBBDFD) % 2) == 0) {
            var_a0 = 2;
            if ((*(u8 *)D_00CBBDF6) == 2) {
                var_a0 = 1;
                (*(u8 *)D_00CBBDF6) = 0;
                var_s1 = 1;
                (*(u8 *)D_00CBBDF7) = 1;
            }
        } else {
            var_a0 = 2;
            if ((*(u8 *)D_00CBBDF7) == 2) {
                var_a0 = 1;
                (*(u8 *)D_00CBBDF7) = 0;
                var_s1 = 1;
                (*(u8 *)D_00CBBDF6) = 1;
            }
        }
        if (var_s1 != 0) {
            func_002BC2B0(var_a0);
            func_002BB870(M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), u8 *, 0), 0x64);
            func_002BB820((s32) M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), u8 *, 0), 0x1D);
            func_002BBF20(((void *)D_003B91B0));
            func_001AAF50(*M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), 0);
            func_001AAF40(*M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), void ***, 4), 1);
            func_00B25220();
            func_00B24A80(0);
            func_00B25C50(0);
            (*(s8 *)D_00592740) = 3;
        }
    }
}
