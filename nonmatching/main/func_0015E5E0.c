/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00159E28(void);
extern void func_001764A8(void);
extern void func_00177AC8(void);
extern void func_00161310(void);
extern void func_0017A188(void);
extern void func_00159EA0(void);
extern void func_0015B3E0(void);
extern int func_00162D80(void);
extern int func_00166AA0(int);
extern void func_00161340(void);
extern int func_00179A08(int, int, int, int);
extern void func_00161668(void);
extern void func_00159E88(void);
extern void func_00176EC0(void);
M2C_UNK func_0015B6F0();                            /* extern */
M2C_UNK func_001727F8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001728C0();                            /* extern */
M2C_UNK func_00179C20(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0037AC88[];
extern char D_0037AC90[];
extern char D_0037AC98[];
extern char D_0037AC9C[];
extern char D_0037ACA0[];
extern char D_0037ACA8[];
extern char D_003C8428[];
extern char D_003C8478[];
extern char D_003C8488[];
extern char D_003C8498[];
extern M2C_UNK *D_0050E308;
extern M2C_UNK func_0015E540;
extern M2C_UNK func_0015E580;
extern M2C_UNK func_0015E5A0;
extern M2C_UNK func_0015E5C0;

void func_0015E5E0(void) {
    s32 temp_a0;

    temp_a0 = (*(s32 *)D_0037AC88);
    D_0050E308 = ((void *)D_003C8428);
    if (temp_a0 == 0) {
        func_00159E28();
        func_00159E88();
        func_00177AC8();
        func_00176EC0();
        func_001764A8();
        func_0015B3E0();
        func_00162D80();
        func_00161668();
        func_0015B6F0();
        func_00161310();
        func_001728C0();
        func_0017A188();
        func_00161340();
        func_001727F8(&func_0015E540, 0);
        func_001C48E8(((void *)D_0037ACA8), 0, 0xC80);
        func_00179C20(2, 1, &func_0015E5A0, 0, ((void *)D_003C8478));
        (*(s32 *)D_0037AC9C) = func_00179A08(4, (s32) &func_0015E5C0, 0, (s32) ((void *)D_003C8488));
        (*(s32 *)D_0037AC90) = func_00179A08(5, (s32) &func_0015E580, 0, (s32) ((void *)D_003C8498));
        (*(s32 *)D_0037ACA0) = 0;
        (*(s32 *)D_0037AC98) = 0;
        func_00166AA0(0x3C);
        func_00159EA0();
    }
    (*(s32 *)D_0037AC88) = temp_a0 + 1;
}
