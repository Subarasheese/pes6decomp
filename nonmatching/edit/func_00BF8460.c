/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF99A0(void);
extern s32 func_00BF9990(void);
extern void func_00BCC570(s32, s32);
extern s32 func_00BF99C0(void);
M2C_UNK func_002F7C60(s32, s32, s32, void *);       /* extern */
M2C_UNK func_002F7D30(s32, s32, s32, void *);       /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC8E00(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BFA1F0(M2C_UNK);                     /* extern */
s32 func_00C047E0(void *, M2C_UNK);                 /* extern */
extern char D_00CEB760[];
extern char D_00CEB770[];

s32 func_00BF8460(void) {
    s32 temp_s1;
    s32 temp_v0;

    switch ((*(s32 *)D_00CEB760)) {                           /* irregular */
    case 0:
        M2C_FIELD(((void *)D_00CEB770), s32 *, 0) = func_00BF99A0();
        M2C_FIELD(((void *)D_00CEB770), s32 *, 4) = func_00BF99C0();
        temp_v0 = func_00BF9990();
        M2C_FIELD(((void *)D_00CEB770), s32 *, 8) = temp_v0;
        func_002F7D30(M2C_FIELD(((void *)D_00CEB770), s32 *, 0), temp_v0, M2C_FIELD(((void *)D_00CEB770), s32 *, 4), ((void *)D_00CEB770) + 0xC);
        func_00B912F0(0x36, 1);
        (*(s32 *)D_00CEB760) = 1;
        /* fallthrough */
    case 1:
        temp_s1 = func_00C047E0(((void *)D_00CEB770) + 0xC, 1);
        func_002F7C60(M2C_FIELD(((void *)D_00CEB770), s32 *, 0), M2C_FIELD(((void *)D_00CEB770), s32 *, 8), M2C_FIELD(((void *)D_00CEB770), s32 *, 4), ((void *)D_00CEB770) + 0xC);
        func_00BCC570(M2C_FIELD(((void *)D_00CEB770), s32 *, 0), M2C_FIELD(((void *)D_00CEB770), s32 *, 4));
        func_00BFA1F0(1);
        if (func_00BCF3A0(0x20000) == 0) {
            if (func_00BCF3A0(0x100000) != 0) {
                func_00BC8E00(0);
            }
        } else {
            func_00BC8E00(1);
        }
        if (temp_s1 != 0) {
            (*(s32 *)D_00CEB760) = 2;
        }
    default:
        return 0;
    case 2:
        func_00B91440(0x28);
        func_00B912F0(0x36, 0);
        func_00BC3FB0(0x20000);
        (*(s32 *)D_00CEB760) = 0;
        return 1;
    }
}
