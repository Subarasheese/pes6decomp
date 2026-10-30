/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00165968(int);
extern void func_0015B478(void *);
extern int func_00167C18(int, int);
M2C_UNK func_001C7F58(s32, s32);                    /* extern */
extern char D_003C90A8[];

void func_00168520(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg0 == 0) || (arg1 == 0)) {
        func_0015B478(((void *)D_003C90A8));
        return;
    }
    func_00165968(arg0);
    func_001C7F58(M2C_FIELD(arg0, s32 *, 0xB0), arg1);
    M2C_FIELD(arg0, s32 *, 0xBC) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC0) = arg3;
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg0, s32 *, 0xB0);
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    func_00167C18(arg0, 0);
}
