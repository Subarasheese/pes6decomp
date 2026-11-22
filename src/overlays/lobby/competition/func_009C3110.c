/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved[0x11a3];
    s8 networkActive;
} NetworkPage;
extern NetworkPage *D_00A7DD50;
extern void func_009C3FF0(void);
extern s32 func_00835C40(void), func_008178F0(s64);
extern void func_0099C7C0(void *);
void func_009C3110(void) {
    if (D_00A7DD50) {
        func_009C3FF0();
        if (D_00A7DD50->networkActive) {
            D_00A7DD50->networkActive = 0;
            func_00835C40();
            func_008178F0(1);
        }
        func_0099C7C0(D_00A7DD50);
        D_00A7DD50 = 0;
    }
}
