/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    s32 id;
    u8 reserved04[4];
    s32 selection;
    u8 reserved0c[10];
    u8 flags;
    u8 reserved17[13];
} Editor;
extern void *func_001C48E8(void *, s32, u32);
extern int func_00BA3A00(void);
extern void func_00BC26F0(Editor *), func_00BC2520(Editor *), func_00B91490(s32),
    func_001B7ED0(const s32 (*)[2], s32);
extern const s32 D_00CB6DE0[][2];
void func_00BC1DD0(Editor *editor, s32 id) {
    s32 count;
    func_001C48E8(editor, 0, sizeof(*editor));
    editor->selection = 0;
    editor->id = id;
    editor->flags |= 1;
    editor->flags |= 2;
    editor->flags |= 8;
    editor->flags |= 16;
    if (func_00BA3A00())
        editor->flags |= 128;
    func_00BC26F0(editor);
    func_00BC2520(editor);
    func_00B91490(19);
    if (func_00BA3A00())
        count = 2;
    else
        count = 3;
    func_001B7ED0(D_00CB6DE0, count);
}
