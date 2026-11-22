/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved0[4];
    void *teamRows[19];
    void *teamLabels[19];
    u8 reserved9C[592];
    void *caption;
    void *groupRows[8];
    u8 reserved310[4];
    void *groupLabels[7];
    u8 reserved330[4136];
    float offsets[2];
    u8 offsetCount;
} ScrollPage;
extern ScrollPage *func_00B2BF70(void);
extern void func_00973B80(void *, float, float);
void func_00B29B90(void) {
    ScrollPage *page;
    s16 offset = 0;
    u8 i;
    float y;
    page = func_00B2BF70();
    if (page) {
        for (i = 0; i < page->offsetCount; i++)
            offset = (s16)(page->offsets[i] * -1.0f + (float)offset + 0.0f);
        y = (float)offset;
        for (i = 0; i < 8; i++)
            func_00973B80(page->groupRows[i], 0.0f, y);
        for (i = 0; i < 7; i++)
            func_00973B80(page->groupLabels[i], 0.0f, y);
        for (i = 0; i < 19; i++) {
            func_00973B80(page->teamRows[i], 0.0f, y);
            func_00973B80(page->teamLabels[i], 0.0f, y);
        }
        func_00973B80(page->caption, 0.0f, y);
    }
}
