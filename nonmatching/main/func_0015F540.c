/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015F9E8(void);
extern void func_00160E60(void);
extern int func_0017A028(void);
extern int func_0015FEA0(void);
extern void func_001608B0(void);
M2C_UNK func_001051A0();                            /* extern */
M2C_UNK func_0015FA68(s32);                         /* extern */
extern char D_0037B978[];
extern char D_0037B9A0[];
extern char D_0037B9DC[];
extern char D_0037B9E0[];
extern char D_0037BA08[];
extern char D_0037BA58[];

void func_0015F540(void) {
    if ((*(s64 *)D_0037BA08) == 0) {
        do {
            (*(s64 *)D_0037B9A0) += 1;
            func_0015FA68((*(s32 *)D_0037B9DC));
            if ((*(s32 *)D_0037BA58) == 0) {
                func_00160E60();
            }
            (*(s32 *)D_0037BA58) = 0;
            if (func_0015FEA0() == 1) {
                func_0015FA68((*(s32 *)D_0037B9E0));
            }
            func_001608B0();
            (*(s32 *)D_0037B978) = 1;
            func_0017A028();
            (*(s32 *)D_0037B978) = 0;
            func_0015F9E8();
        } while ((*(s64 *)D_0037BA08) == 0);
    }
    *(s64 *)0x37BA10 = 1;
    func_001051A0();
}
