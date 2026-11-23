/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s16 current, selected;
} ResultPage;
extern ResultPage *D_00923FC8;
extern void func_0091C500(s32 page);
extern void func_009160F0(void);
extern void func_009158E0(void);
extern void func_00913620(void);
extern void func_00916E50(void);
extern void func_00914AB0(void);
extern void func_00919CB0(void);
extern void func_00917740(void);
extern void func_0091AD90(void);
extern void func_009123F0(void);
void func_00911E80(s16 selected) {
    switch (selected) {
    case 0:
        func_0091C500(0);
        break;
    case 1:
        func_0091C500(1);
        break;
    case 2:
        func_009160F0();
        break;
    case 3:
        func_009158E0();
        break;
    case 4:
        func_00913620();
        break;
    case 5:
        func_00916E50();
        break;
    case 6:
        func_00914AB0();
        break;
    case 7:
        func_00919CB0();
        break;
    case 8:
        func_00917740();
        break;
    case 9:
        func_0091AD90();
        break;
    case 10:
        func_009123F0();
        break;
    }
    D_00923FC8->current = selected;
    D_00923FC8->selected = selected;
}
