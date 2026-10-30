/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern s32 func_002F9370(void *);
extern void func_002D5980(void *, s16);
extern void func_001D7D60(void *, s8);
extern void func_002D5610(void *);
extern s32 D_003EA854;
extern void *D_00CCBF20;
extern char D_00CCBF24[];
extern char D_00CCBF3C[];
extern char D_00CCBF48[];

void func_00C7B9A0(s32 arg0) {
    if ((arg0 == 0) && (D_003EA854 != 0)) {
        func_002D5610(((void *)D_00CCBF3C));
        func_002D5980(((void *)D_00CCBF24), 0);
        func_002D5960(((void *)D_00CCBF24), 0);
        if ((*(u8 *)D_00CCBF48) & 1) {
            func_001D7D60(func_002F9370(D_00CCBF20), 0);
        }
    }
}
