/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)
#include "pes6/image_layout_bank.h"

extern void *func_00153FD0(s32 heap, u32 count, u32 size);
extern void func_001F7880(LayoutFile *), func_001F7D30(LayoutBank *, s32);
static inline void registerLayoutBank(s32 heap, s32 id, LayoutFile *file) {
    LayoutBank *bank;
    if (!file || findLayoutBank(id))
        return;
    func_001F7880(file);
    bank = func_00153FD0(heap, 1, sizeof(LayoutBank));
    bank->id = id;
    bank->file = file;
    bank->layouts = file->layouts;
    func_001F7D30(bank, heap);
    if (D_003E9978) {
        D_003E997C->next = bank;
        bank->prev = D_003E997C;
    } else {
        D_003E9978 = bank;
        bank->prev = 0;
    }
    D_003E997C = bank;
    bank->next = 0;
}

void func_001F7E10(LoadedLayout *request) {
    s32 heap = request->heap;
    func_001F7880(request->file);
    registerLayoutBank(heap, request->id, request->file);
}
