/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s16 current, selected;
} ResultPage;
extern ResultPage *D_00923FC8;
extern void func_0091CEF0(void);
extern void func_009160B0(void);
extern void func_009154C0(void);
extern void func_009132F0(void);
extern void func_00916910(void);
extern void func_00914A20(void);
extern void func_009199A0(void);
extern void func_00917490(void);
extern void func_0091AAB0(void);
extern void func_009123B0(void);
s16 func_00911D80(void) {
    s16 current = D_00923FC8->current;
    switch (current) {
    case 0:
        func_0091CEF0();
        break;
    case 1:
        func_0091CEF0();
        break;
    case 2:
        func_009160B0();
        break;
    case 6:
        func_00914A20();
        break;
    case 3:
        func_009154C0();
        break;
    case 4:
        func_009132F0();
        break;
    case 5:
        func_00916910();
        break;
    case 7:
        func_009199A0();
        break;
    case 8:
        func_00917490();
        break;
    case 9:
        func_0091AAB0();
        break;
    case 10:
        func_009123B0();
        break;
    }
    return current;
}
