/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_text_box.h"

extern void func_00135018(void *ptr);
extern void func_0016E3A8(NetworkTextBox *box, s32 line, const char *text, s32 length);

s32 func_0016EB18(NetworkTextBox *box, const NetworkTextBox *current,
                  const NetworkTextBox *previous) {
    char *line, *cursor;
    s32 i;
    s32 changed = D_005C14A0(box, current, previous);
    if (current->pendingText != previous->pendingText && current->pendingText) {
        if (box->text)
            func_00135018(box->text);
        box->text = func_001896B8(current->pendingText);
        box->lineCount = 0;
        if (box->text) {
            line = box->text;
            cursor = line;
            if (*line) {
                do {
                    if (*cursor == '\n') {
                        func_0016E3A8(box, box->lineCount, line, cursor - line);
                        line = cursor + 1;
                        box->lineCount++;
                    }
                    ++cursor;
                } while (*cursor && box->lineCount < 40);
            }
            if (box->lineCount < 40 && cursor != line) {
                func_0016E3A8(box, box->lineCount, line, cursor - line);
                box->lineCount++;
            }
        }
        for (i = box->lineCount; i < 40; ++i) {
            func_0016E3A8(box, i, 0, 0);
        }
        box->header.redraw = 2;
        changed = 1;
    }
    if (current->pendingSecondary != previous->pendingSecondary && current->pendingSecondary) {
        if (box->secondary)
            func_00135018(box->secondary);
        box->secondary = func_001896B8(current->pendingSecondary);
        box->header.redraw = 2;
        changed = 1;
    }
    return changed;
}
