/* compiler: ee-gcc-2.9-as210-G0 */
/* MPEG-2 picture coding extension adapted from LucasPicoli/god-hand-decomp, src/cod/003a0a10.c. See
 * THIRD_PARTY.md.
 */
#include "types.h"
#define IPU_CTRL (*(volatile u32 *)0x10002010)
extern u32 func_008F86F8(void *v, int n);
typedef struct {
    char _pad0[0xE8];
    int first_picture_structure;
    char _pad1[0x88];
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
} Mpeg;
int func_008FA660(Mpeg *v) {
    u32 t;
    u32 compositeDisplay;
    v->f_code[0][0] = func_008F86F8(v, 4);
    v->f_code[0][1] = func_008F86F8(v, 4);
    v->f_code[1][0] = func_008F86F8(v, 4);
    v->f_code[1][1] = func_008F86F8(v, 4);
    t = func_008F86F8(v, 2);
    IPU_CTRL = (IPU_CTRL & ~(3u << 16)) | (t << 16);
    t = func_008F86F8(v, 2);
    v->picture_structure = t;
    if (v->first_picture_structure == 0)
        v->first_picture_structure = t;
    v->top_field_first = func_008F86F8(v, 1);
    v->frame_pred_frame_dct = func_008F86F8(v, 1);
    v->concealment_motion_vectors = func_008F86F8(v, 1);
    t = func_008F86F8(v, 1);
    IPU_CTRL = (IPU_CTRL & ~(1u << 22)) | (t << 22);
    t = func_008F86F8(v, 1);
    IPU_CTRL = (IPU_CTRL & ~(1u << 21)) | (t << 21);
    t = func_008F86F8(v, 1);
    IPU_CTRL = (IPU_CTRL & ~(1u << 20)) | (t << 20);
    v->repeat_first_field = func_008F86F8(v, 1);
    func_008F86F8(v, 1);
    v->progressive_frame = func_008F86F8(v, 1);
    compositeDisplay = func_008F86F8(v, 1);
    if (compositeDisplay) {
        func_008F86F8(v, 1);
        func_008F86F8(v, 3);
        func_008F86F8(v, 1);
        func_008F86F8(v, 7);
        compositeDisplay = func_008F86F8(v, 8);
    }
    return compositeDisplay;
}
