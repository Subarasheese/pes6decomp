/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern s32 func_0082C920(s32);
extern s32 func_0082C840(s32);
extern s32 func_0082C690(s32, s32);
extern s32 func_00862110(s32, s32);
extern void *memset(void *, int, unsigned int);
extern s8 *strncpy(s8 *, s8 *, u32);
extern s32 func_00980C50(s32, s32, s32, s32);
extern char D_00A69020[];

int func_00980830(int arg0, int arg1, int arg2) {
    int value;
    int value2;

    value = func_0082C2A0();
    if (value == 0) {
        func_0082C920(0x9d);
        func_0082C840(0xaa);
        func_0082C690(0xaa, 0);
        value = 2;
    } else {
        value2 = func_00862110(value, 3);
        if (value2 == 1) {
            value = 3;
        } else {
            value2 = func_00862110(value, 8);
            if (value2 == 1) {
                value = 8;
            } else {
                value2 = func_00862110(value, 4);
                if (value2 == 1) {
                    value = 4;
                } else {
                    value = func_00862110(value, 5);
                    if (value == 1) {
                        value = 5;
                    } else {
                        func_0082C920(0x9d);
                        func_0082C840(0xaa);
                        func_0082C690(0xaa, 0);
                        return 2;
                    }
                }
            }
        }
        if (arg1 == 0) {
            func_0082C920(0x9d);
            func_0082C840(0xaa);
            func_0082C690(0xaa, 0);
            value = 1;
        } else {
            memset((int *)D_00A69020, 0, 0x400);
            strncpy((s8 *)D_00A69020, (s8 *)arg1, 0x200);
            value = func_00980C50(value, arg0, (u32)D_00A69020, arg2);
        }
    }
    return value;
}
