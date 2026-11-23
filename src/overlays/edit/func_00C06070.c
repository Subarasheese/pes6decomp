/* compiler: mwcc-3.0.1b210 */
#include "pes6/kit.h"
typedef struct {
    Pes6KitColor colors[21];
    u8 unknown[26];
} EditorPalette;

extern EditorPalette D_00CF1FE0;
extern void *memset(void *, int, unsigned int);

void func_00C06070(void) {
    s32 i;
    memset(&D_00CF1FE0, 0, sizeof(EditorPalette));
    for (i = 0; i < 21; ++i) {
        D_00CF1FE0.colors[i].red = 31;
        D_00CF1FE0.colors[i].green = 31;
        D_00CF1FE0.colors[i].blue = 31;
        D_00CF1FE0.colors[i].alpha = 1;
    }
}
