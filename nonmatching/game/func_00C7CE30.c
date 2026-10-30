/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern s32 func_002F9370(void *);
extern void func_002D5980(void *, s16);
extern void func_001D7D60(void *, s8);
extern void func_002D5610(void *);
extern s32 D_003EA860;
extern void *D_00CCBFA0;
extern char D_00CCBFA4[];
extern char D_00CCBFBC[];
extern char D_00CCBFC8[];

void func_00C7CE30(s32 arg0) {
    if ((arg0 == 0) && (D_003EA860 != 0)) {
        func_002D5610(((void *)D_00CCBFBC));
        func_002D5980(((void *)D_00CCBFA4), 0);
        func_002D5960(((void *)D_00CCBFA4), 0);
        if ((*(u8 *)D_00CCBFC8) & 1) {
            func_001D7D60(func_002F9370(D_00CCBFA0), 0);
        }
    }
}
