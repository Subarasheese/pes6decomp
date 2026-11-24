/* compiler: mwcc-3.0.1b151 */
#include "pes6/image_layout_bank.h"

typedef struct {
    s32 reserved[3], id, heap;
} LayoutLoadOptions;
extern void func_001F7E10(LoadedLayout *);
extern s32 func_0017F9A0(s32 id, void (*handler)(LoadedLayout *), s32 *heap, s32 argumentBytes,
                         LayoutLoadOptions *options);

void func_001F7C90(s32 id, s32 *args) {
    LayoutLoadOptions options = {0};
    if (findLayoutBank(id))
        return;
    options.id = args[0];
    options.heap = args[1];
    func_0017F9A0(id, func_001F7E10, args + 1, 4, &options);
}
