/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0081DDE0(s32, s8 *);                   /* extern */
M2C_UNK func_00999C10(s32, M2C_UNK);                /* extern */
s32 func_0099A390(s32, M2C_UNK, s32, M2C_UNK);      /* extern */
s32 func_0099AE70(s32);                             /* extern */
s32 func_0099AF50(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0099B690(s32, M2C_UNK, s32);               /* extern */
s32 func_0099D2C0(M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern char D_00A027C0[];
extern char D_00A027C8[];

void func_009A4AB0(s32 arg0, void *arg1, s32 arg2) {
    s8 sp5C;
    s8 sp5D;
    s8 sp5E;
    s8 sp5F;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    void *var_s0;

    if ((arg0 != 0) && (arg1 != NULL)) {
        var_s1 = 0;
        if (arg2 > 0) {
            var_s0 = arg1;
            do {
                temp_v0 = func_0099AF50(arg0, 3, 0);
                M2C_FIELD(var_s0, s32 *, 0) = temp_v0;
                M2C_FIELD(var_s0, s32 *, 8) = func_0099B690(temp_v0, 1, 0);
                M2C_FIELD(var_s0, s32 *, 0xC) = func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 2, func_001F08B0(0x6C005F));
                sp5C = 0x1F;
                sp5D = 0x2E;
                sp5E = 0x99;
                sp5F = 0xFF;
                func_0081DDE0(M2C_FIELD(var_s0, s32 *, 0xC), &sp5C);
                func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 0, (s32) ((void *)D_00A027C0));
                M2C_FIELD(var_s0, s32 *, 0x10) = func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 3, func_0099AE70(var_s1 & 0xFFFF));
                temp_v0_2 = func_0099A390(M2C_FIELD(var_s0, s32 *, 0), 1, var_s1, 5);
                M2C_FIELD(var_s0, s32 *, 0x14) = temp_v0_2;
                func_00999C10(temp_v0_2, 0);
                M2C_FIELD(var_s0, s32 *, 0x18) = func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 6, var_s1);
                M2C_FIELD(var_s0, s32 *, 0x1C) = func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 4, func_0099AE70((var_s1 + 1) & 0xFFFF));
                temp_v0_3 = func_0099A390(M2C_FIELD(var_s0, s32 *, 0), 1, var_s1 + 1, 6);
                M2C_FIELD(var_s0, s32 *, 0x20) = temp_v0_3;
                func_00999C10(temp_v0_3, 0);
                M2C_FIELD(var_s0, s32 *, 0x24) = func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 7, var_s1 + 1);
                M2C_FIELD(var_s0, s32 *, 0x28) = func_0099B690(M2C_FIELD(var_s0, s32 *, 0), 5, (s32) ((void *)D_00A027C8));
                M2C_FIELD(var_s0, s32 *, 0x2C) = func_0099D2C0(0, 0, M2C_FIELD(var_s0, s32 *, 0), 7, 0);
                var_s1 += 1;
                M2C_FIELD(var_s0, s32 *, 0x30) = func_0099AF50(arg0, 2, 0);
                var_s0 += 0x34;
            } while (var_s1 < arg2);
        }
    }
}
