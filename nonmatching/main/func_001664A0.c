/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001614F0(void);
extern void func_0015B478(void *);
extern int func_00162A38(void *);
s32 func_00162BE0(void *);                          /* extern */
extern char D_003C8AD0[];

void func_001664A0(void *arg0, s32 arg1, s16 arg2) {
    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8AD0));
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 0xAD) == 1) {
        if (func_00162BE0(M2C_FIELD(arg0, void **, 4)) == -0x80) {

        }
    }
    if (*(s32 *)0x37AC98 == 0) {
        if (arg2 != -0x80) {

        } else if (func_00162A38(M2C_FIELD(arg0, void **, 4)) != 2) {

        }
    }
    M2C_FIELD(((arg1 * 2) + arg0), s16 *, 0x42) = arg2;
    if (arg1 < M2C_FIELD(arg0, s8 *, 3)) {
        func_001614F0();
        return;
    }
    func_0015B478((void *)0x3C8B00);
}
