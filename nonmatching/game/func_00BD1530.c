/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009A71F0(void);
extern void func_00BB60F0(void);
M2C_UNK func_009B6420(u16);                         /* extern */
extern char D_00CBAA02[];

s32 func_00BD1530(void) {
    func_00BB60F0();
    func_009B6420((*(u16 *)D_00CBAA02));
    func_009A71F0();
    return 0;
}
