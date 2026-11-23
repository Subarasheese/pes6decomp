/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x8];
    s32 firstRow;
    u8 reserved0C[0x18];
    void *widget;
    u8 reserved28[0x2a0];
    s32 rowHeight;
} ResultScrollList;
extern void SD_call(u32);
extern void func_00910040(s32 firstRow, s32 mode);
extern void func_00C74CC0(void *, float, float);
extern ResultScrollList *D_00923FCC;
s32 func_0091BBE0(void) {
    if (D_00923FCC->firstRow > 0) {
        SD_call(0x8400F802);
        D_00923FCC->firstRow = (s32)(D_00923FCC->firstRow - 1);
        func_00C74CC0(D_00923FCC->widget, 0.0f,
                      (f32)((-D_00923FCC->firstRow) * D_00923FCC->rowHeight));
        func_00910040(D_00923FCC->firstRow, 0);
    }
    return 0;
}
