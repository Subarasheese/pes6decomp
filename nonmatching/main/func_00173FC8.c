/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001736E8(int, int);
extern int func_00165968(int);
extern void func_0015B478(void *);
extern int func_00173E00(int, int, int);
extern int func_00173770(int);
extern void func_001606A8(void);
extern int func_00173828(int, int);
extern void func_00160690(void);
M2C_UNK func_00174100(void *);                      /* extern */
extern M2C_UNK *D_00377014;
extern M2C_UNK *D_00377018;
extern M2C_UNK *D_0038327C;
extern M2C_UNK *D_00384C78;
extern char D_003CBAD8[];
extern char D_003CBB18[];
extern M2C_UNK PL2LINK_DetachDolbyProLogicII;
extern M2C_UNK func_00174240;
extern M2C_UNK func_00174258;
extern M2C_UNK func_00174290;
extern M2C_UNK func_001742A8;

void func_00173FC8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_s1;

    if (M2C_FIELD(arg0, s8 *, 3) < 2) {
        func_0015B478(((void *)D_003CBAD8));
        return;
    }
    func_00165968((s32) arg0);
    func_00174100(arg0);
    func_001736E8((s32) &func_001742A8, 0);
    func_00173770(0);
    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4);
    func_00160690();
    temp_v0 = func_00173828(arg1, arg2);
    if (temp_v0 == 0) {
        func_0015B478(((void *)D_003CBB18));
        return;
    }
    func_00173E00(temp_v0, M2C_FIELD(temp_s1, s32 *, 0xEC), M2C_FIELD(temp_s1, s32 *, 0xF0));
    M2C_FIELD(temp_s1, s32 *, 0xE8) = temp_v0;
    D_00384C78 = &PL2LINK_DetachDolbyProLogicII;
    D_00377014 = &func_00174258;
    D_00377018 = &func_00174240;
    D_0038327C = &func_00174290;
    func_001606A8();
}
