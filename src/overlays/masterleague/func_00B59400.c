/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x70];
    s32 active;
    u8 reserved74[0x18];
    u8 selection;
} Page;
typedef struct {
    u8 reserved00[0x2b];
    u8 selection;
} Previous;
extern Page *D_003EAEB4;
extern Previous *D_003E7B0C;
extern void func_00B598A0(void), func_00B5AC40(void);
void func_00B59400(void) {
    Page *page = D_003EAEB4;
    if (page) {
        page->active = 1;
        page->selection = D_003E7B0C->selection;
        if (page->selection >= 6)
            page->selection = 0;
        func_00B598A0();
        func_00B5AC40();
    }
}
