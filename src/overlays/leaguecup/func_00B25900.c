/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    float x, y, z, w;
} ScrollPoint;
typedef struct {
    u8 prefix[0x2a8];
    void *cursor;
    u8 beforeOffsets[0xac8];
    float offsets[2];
    u8 offsetCount;
    u8 beforeMode[0x1f];
    u8 mode;
} ScrollPage;
extern ScrollPage *func_00B279D0(void);
extern void func_009720E0(void *, s32);
extern void func_00972190(void *, ScrollPoint *);
extern void func_00972240(void *, ScrollPoint *);
extern void func_00972040(void *, u8, s32);
extern void func_009721F0(void *, ScrollPoint *);
void func_00B25900(s32 selection) {
    ScrollPage *page;
    s16 offset = 0;
    s32 i;
    ScrollPoint position;

    page = func_00B279D0();
    if (!page)
        return;
    func_009720E0(page->cursor, page->mode);
    func_00972040(page->cursor, selection, 0);
    for (i = 0; i < page->offsetCount; ++i)
        offset = (s16)(page->offsets[i] * -1.0f + (float)offset + 0.0f);
    position.x = 0.0f;
    position.y = (float)offset;
    func_009721F0(page->cursor, &position);
}
