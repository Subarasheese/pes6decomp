/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA860;
extern char D_00CCBFC4[];
extern char D_00CCBFC9[];
extern char D_00CCBFCC[];

void func_00C7CD50(s32 arg0) {
    if (D_003EA860 != 0) {
        (*(s32 *)D_00CCBFCC) = arg0;
        (*(s32 *)D_00CCBFC4) = 0xB4;
        (*(u8 *)D_00CCBFC9) = ((*(u8 *)D_00CCBFC9) & ~1) | 1;
    }
}
