/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 pad00[4];
    void *first, *second;
    u8 pad0c[0x9c];
    u32 tab;
    s32 values[7];
    u8 secondFrame[15];
    u8 firstFrame[7];
} SelectTabs;
extern SelectTabs *func_008CC830(void);
extern void func_001D7D80(void *, s16);
extern void func_008CD080(void), func_008CCEE0(void);
extern void func_008CD930(void);
extern void func_008CD7A0(void);
extern void func_008CD6B0(void);
extern void func_008CD570(void);
extern void func_008CD4B0(void);
extern void func_008CD3A0(void);
extern void func_008CD160(void);
void func_008CDAC0(void) {
    SelectTabs *p = func_008CC830();
    if (p) {
        switch (p->tab) {
        case 0:
            func_008CD930();
            break;
        case 1:
            func_008CD7A0();
            break;
        case 2:
            func_008CD6B0();
            break;
        case 3:
            func_008CD570();
            break;
        case 4:
            func_008CD4B0();
            break;
        case 5:
            func_008CD3A0();
            break;
        case 6:
            func_008CD160();
            break;
        }
        func_008CD080();
        func_001D7D80(p->first, p->firstFrame[p->tab]);
        func_001D7D80(p->second, p->secondFrame[p->tab]);
        func_008CCEE0();
    }
}
