/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern void *func_002F9370(void *);
extern void func_002D5980(void *, s16);
extern void func_001D7D60(void *, s8);
extern void func_002D5610(void *);
extern s32 D_003EA854;
extern s32 D_00CCBF20[];
extern char D_00CCBF24[];
extern char D_00CCBF3C[];
extern u8 D_00CCBF48[];

void func_00C7B920(void) {
    if (D_003EA854 != 0) {
        func_002D5610(D_00CCBF3C);
        func_002D5980(D_00CCBF24, 0);
        func_002D5960(D_00CCBF24, 0);
        if (D_00CCBF48[0] & 1) {
            func_001D7D60(func_002F9370((void *)D_00CCBF20[0]), 0);
        }
    }
}
