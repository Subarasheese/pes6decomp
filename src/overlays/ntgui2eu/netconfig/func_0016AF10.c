/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00163C30(void *, s32);
extern void func_00164160(void *);
extern void *func_00165B00(void *);
extern void func_0016A340(void *);

extern char D_005BFCA8[];

s32 func_0016AF10(s32 arg0) {
    s32 value;
    void *entry;
    void *entry2;

    entry2 = func_00165B00((void *)arg0);
    if (!((entry2 != NULL) && (func_00163C30(entry2, (*(s32 *)D_005BFCA8)) != 0))) {
        return 0;
    }
    value = 0;
    if ((entry2 + 0x9A8) == NULL) {
        return value;
    }
    entry = M2C_FIELD(entry2, void **, 0x9A8);
    if (entry == NULL) {
        return 0;
    }
    func_00164160(entry);
    func_0016A340(entry2 + 0x9D0);
    M2C_FIELD(entry2, void **, 0x9A8) = NULL;
    value = 1;

    return value;
}
