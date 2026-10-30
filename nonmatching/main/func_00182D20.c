/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019EDC0(void);
extern void func_00189AC0(void);
extern void func_001873C0(void);
extern void func_001864B0(s32);
extern void func_00147010(void *, int);
extern void func_0019E500(void);
extern void func_00189A20(void);
M2C_UNK func_00145750(void *);                      /* extern */
M2C_UNK func_00151550(s32);                         /* extern */
M2C_UNK func_001820F0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00182230();                            /* extern */
M2C_UNK func_001870F0(s32);                         /* extern */
M2C_UNK func_001884A0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00188A60(s32);                         /* extern */
M2C_UNK func_001894A0(s32);                         /* extern */
M2C_UNK func_00189610();                            /* extern */
M2C_UNK func_001896D0();                            /* extern */
M2C_UNK func_0018A210();                            /* extern */
M2C_UNK func_0018D7F0();                            /* extern */
M2C_UNK func_00199BD0();                            /* extern */
M2C_UNK func_0019E100();                            /* extern */
M2C_UNK func_0019E450();                            /* extern */
extern char D_0051FF64[];
extern char D_0051FF68[];
extern char D_0051FF6C[];
extern char D_0051FF70[];
extern void *D_0051FF74;
extern char D_0051FF80[];
extern char D_0051FF84[];
extern char D_0051FF88[];
extern void *D_0051FF90;
extern void *D_0051FF94;
extern void *D_0051FF98;
extern char D_0051FF9C[];
extern char D_0051FFA0[];
extern char D_0051FFA4[];

void func_00182D20(void) {
    void **temp_s0;

    func_00182230();
    func_00151550((*(s32 *)D_0051FF64));
    temp_s0 = D_0051FF74 + 4;
    func_001884A0(0, *M2C_FIELD(D_0051FF74, s32 **, 4));
    func_001884A0(2, M2C_FIELD(*temp_s0, s32 *, 4));
    func_001870F0(M2C_FIELD(*temp_s0, s32 *, 8));
    func_001894A0(M2C_FIELD(*temp_s0, s32 *, 0xC));
    func_00188A60(M2C_FIELD(*temp_s0, s32 *, 0x10));
    func_001820F0((*(s32 *)D_0051FF70), 0, 0, 0x1B);
    func_00151550((*(s32 *)D_0051FF6C));
    func_00151550((*(s32 *)D_0051FF68));
    func_0019E500();
    func_0019E450();
    func_001873C0();
    func_00147010(D_0051FF90, 0x27D8);
    func_00147010(D_0051FF94, 0x27DA);
    func_00147010(D_0051FF98, 0x27D9);
    func_00145750(D_0051FF90);
    func_00145750(D_0051FF94);
    func_00145750(D_0051FF98);
    func_001820F0((*(s32 *)D_0051FF80), 2, 3, 1);
    func_001820F0((*(s32 *)D_0051FF80), 1, 7, 1);
    func_001820F0((*(s32 *)D_0051FF80), 0, 0x15, 1);
    func_001884A0(1, (*(s32 *)D_0051FF84));
    func_00151550((*(s32 *)D_0051FF88));
    func_001896D0();
    func_001820F0((*(s32 *)D_0051FF9C), 0, 0xF, 3);
    func_001820F0((*(s32 *)D_0051FFA0), 0, 0xE, 1);
    func_00151550((*(s32 *)D_0051FFA4));
    func_0019E100();
    func_0018A210();
    func_0019EDC0();
    func_00189610();
    func_00189A20();
    func_00189AC0();
    func_0018D7F0();
    func_00199BD0();
    func_001864B0(0x1FFFF);
}
