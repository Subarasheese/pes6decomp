/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00188A50(void);
extern void func_00182AE0(s32);
extern void func_00182B20(int);
extern void func_00182B30(int);
extern void func_001AA620(void *);
M2C_UNK func_00272370(M2C_UNK);                     /* extern */

s32 func_00905F60(void) {
    func_001AA620(func_00188A50());
    func_00272370(1);
    func_00182B30(1);
    func_00182B20(1);
    func_00182AE0(1);
    return 0;
}
