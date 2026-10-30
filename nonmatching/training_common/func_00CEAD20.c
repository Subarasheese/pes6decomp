/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00CEB400(void);
M2C_UNK func_002ED130(s32);                         /* extern */
M2C_UNK func_00CE3F00(s32);                         /* extern */
extern s32 D_003E7E1C;
extern char D_00CFFCFC[];

void func_00CEAD20(void) {
    if ((*(s32 *)D_00CFFCFC) != 0) {
        func_002ED130((*(s32 *)D_00CFFCFC));
        (*(s32 *)D_00CFFCFC) = 0;
    }
    func_00CEB400();
    func_00CE3F00(D_003E7E1C + 8);
}
