/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct LayoutWidget LayoutWidget;
typedef struct {
    u8 reserved00[0x12c];
    void (*at12c)(LayoutWidget *), (*at130)(LayoutWidget *);
} LayoutMethods;
struct LayoutWidget {
    u8 reserved00[0x4c];
    const LayoutMethods *methods;
    u8 reserved50[0x550];
    s64 position;
    u8 reserved5a8[4];
    s32 width, height;
    u8 reserved5b4[0x86c - 0x5b4];
    s32 mode;
};
extern s32 (*D_005BFAA8)(LayoutWidget *, const LayoutWidget *, const LayoutWidget *);
extern void func_00169730(LayoutWidget *widget), func_00168DC8(LayoutWidget *widget);
s32 func_00168A30(LayoutWidget *dst, const LayoutWidget *current, const LayoutWidget *previous) {
    s32 changed = D_005BFAA8(dst, current, previous);
    if (current->position != previous->position || current->width != previous->width ||
        current->height != previous->height) {
        dst->methods->at130(dst);
        dst->methods->at12c(dst);
        func_00169730(dst);
        func_00168DC8(dst);
        changed = 1;
    }
    if (current->mode != previous->mode) {
        dst->mode = current->mode;
        changed = 1;
    }
    return changed;
}
