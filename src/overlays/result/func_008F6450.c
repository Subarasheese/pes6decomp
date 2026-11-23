/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void func_008FAAD0(void);
extern void func_008F7F60(void);
extern void func_008F77F0(void);
extern void func_008F6980(void);
extern void func_008F84E0(void);
extern void func_00C22290(void);
extern void func_008FA2F0(void);
extern void func_008FB2D0(void);
extern void func_008FC920(void);
extern void func_008FCA80(void);
extern void func_008FF0D0(void);
extern void func_00C5A1C0(void);
extern void func_008FE910(void);
extern void func_002C2970(void);
typedef struct {
    s32 phase;
} ResultSequence;
extern ResultSequence D_00921300;
extern ResultSequence *D_00921308;
s32 func_008F6450(void) {
    s32 ready = 0;
    switch (D_00921300.phase) {
    case 0:
        D_00921308 = &D_00921300;
        func_008FAAD0();
        ++D_00921300.phase;
        break;
    case 1:
        func_008F7F60();
        func_008F77F0();
        ++D_00921300.phase;
        break;
    case 2:
        func_008F6980();
        func_008F84E0();
        ++D_00921300.phase;
        break;
    case 3:
        func_00C22290();
        func_008FA2F0();
        ++D_00921300.phase;
        break;
    case 4:
        func_008FB2D0();
        func_008FC920();
        ++D_00921300.phase;
        break;
    case 5:
        func_008FCA80();
        ++D_00921300.phase;
        break;
    case 6:
        func_008FF0D0();
        func_00C5A1C0();
        ++D_00921300.phase;
        break;
    case 7:
        func_008FE910();
        ++D_00921300.phase;
        break;
    default:
        func_002C2970();
        ready = 1;
        break;
    }
    return ready;
}
