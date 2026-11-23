/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved[0x1c4];
    u8 mode;
} Owner;
typedef struct {
    Owner *owner;
    u8 reserved04[0x3b];
    u8 mode;
} Editor;
extern void func_00B97850(Editor *), func_00B97B10(Editor *), func_00B97400(Editor *),
    func_00B97660(Editor *), func_00B97CF0(Editor *);
void func_00B97360(Editor *editor) {
    switch (editor->mode) {
    case 0:
        func_00B97850(editor);
        break;
    case 1:
        func_00B97B10(editor);
        break;
    case 2:
        func_00B97400(editor);
        break;
    case 3:
        func_00B97660(editor);
        break;
    }
    editor->owner->mode = editor->mode;
    func_00B97CF0(editor);
}
