/* compiler: ee-gcc-2.9-G0 */
/* lombyte-project/Lombyte, src/sdk/graph/sce_gs_set_def_disp_env.c (sceGsSetDefDispEnv). See
 * THIRD_PARTY.md. */

typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
struct sceGsDispEnv {
    u64 pmode;
    u64 smode2;
    u64 dispfb;
    u64 display;
    u64 bgcolor;
};
extern void *sceGsGetGParam(void);
extern int printf(const char *, ...);
extern s32 func_00100478(void);
typedef struct {
    s16 nSInterlace;
    u16 wMode;
    s16 nSFrame_mode;
    s16 pad06;
    s32 pad08[2];
} GsVideoModeState;
extern void func_00100518(s32 mode, s32 *horizontal, s32 *vertical, s32 *display_width,
                          s32 *display_height);
extern const char D_003C3490[];
void sceGsSetDefDispEnv(struct sceGsDispEnv *output, s16 pixel_storage_format, s16 width,
                        s16 height, s16 horizontal_offset, s16 vertical_offset) {
    enum { GS_FRAME_MODE_FIELD = 0 };
    GsVideoModeState *video_mode_state;
    s32 kernel_horizontal;
    s32 kernel_vertical;
    s32 kernel_width;
    s32 kernel_height;
    s32 display_mode;
    s32 scale;
    s64 scaled_horizontal;
    u64 display_width;
    u16 interlace;
    u64 display_vertical;
    u64 progressive_width;
    video_mode_state = sceGsGetGParam();
    if ((!(((u32)(video_mode_state->wMode - 2)) < 2)) && (func_00100478() != 0)) {
        func_00100518((s16)video_mode_state->wMode, &kernel_horizontal, &kernel_vertical,
                      &kernel_width, &kernel_height);
    } else {
        kernel_height = 0;
        kernel_width = 0;
        kernel_vertical = 0;
        kernel_horizontal = 0;
    }
    display_mode = video_mode_state->wMode;
    interlace = video_mode_state->nSInterlace;
    output->pmode = 0x66;
    if (video_mode_state->nSInterlace != 0) {
        if (video_mode_state->nSFrame_mode == GS_FRAME_MODE_FIELD)
            output->smode2 = 1;
        else
            output->smode2 = 3;
    } else {
        output->smode2 = 2;
    }
    output->dispfb =
        (((u64)(pixel_storage_format & 15)) << 15) | (((u64)(((width + 63) >> 6) & 63)) << 9);
    if (((s16)display_mode) == 2) {
        if (((s16)interlace) == 1) {
            s32 scale;
            u64 value;
            scaled_horizontal = (s64)kernel_horizontal;
            scale = (width + 0x9ff) / width;
            display_vertical = ((u64)(((vertical_offset + kernel_vertical) + 0x32) & 0xfff)) << 12;
            display_width = ((u64)((s64)((scale * width) - 1))) << 32;
            scaled_horizontal = scaled_horizontal + 0x27c;
            scaled_horizontal = (scaled_horizontal + (horizontal_offset * scale)) & 0xfff;
            value = ((u64)((s64)(scale - 1))) << 23;
            if (video_mode_state->nSFrame_mode != GS_FRAME_MODE_FIELD) {
                display_width =
                    (value | display_width) |
                    (((u64)scaled_horizontal) | (((u64)((s64)((height * 2) - 1))) << 44));
            } else {
                display_width = (value | display_width) |
                                (((u64)scaled_horizontal) | (((u64)((s64)(height - 1))) << 44));
            }
            output->display = display_width | display_vertical;
        } else {
            s64 horizontal;
            u64 value;
            scale = (width + 0x9ff) / width;
            progressive_width = ((u64)((s64)((((width + 0x9ff) / width) * width) - 1))) << 32;
            value = (((s64)(((width + 0x9ff) / width) - 1)) << 23) | progressive_width;
            horizontal = ((s64)kernel_horizontal) + 0x27c;
            output->display = (value | (((horizontal + (horizontal_offset * scale)) & 0xfff) |
                                        (((s64)(height - 1)) << 44))) |
                              (((s64)(((vertical_offset + kernel_vertical) + 0x19) & 0xfff)) << 12);
        }
    } else if (((s16)display_mode) == 3) {
        if (((s16)interlace) == 1) {
            s32 scale;
            u64 value;
            scaled_horizontal = (s64)kernel_horizontal;
            scale = (width + 0x9ff) / width;
            display_vertical = ((u64)(((vertical_offset + kernel_vertical) + 0x48) & 0xfff)) << 12;
            display_width = ((u64)((s64)((scale * width) - 1))) << 32;
            scaled_horizontal = scaled_horizontal + 0x290;
            scaled_horizontal = (scaled_horizontal + (horizontal_offset * scale)) & 0xfff;
            value = ((u64)((s64)(scale - 1))) << 23;
            if (video_mode_state->nSFrame_mode != GS_FRAME_MODE_FIELD) {
                display_width =
                    (value | display_width) |
                    (((u64)scaled_horizontal) | (((u64)((s64)((height * 2) - 1))) << 44));
            } else {
                display_width = (value | display_width) |
                                (((u64)scaled_horizontal) | (((u64)((s64)(height - 1))) << 44));
            }
            output->display = display_width | display_vertical;
        } else {
            s64 horizontal;
            u64 value;
            scale = (width + 0x9ff) / width;
            progressive_width = ((u64)((s64)((((width + 0x9ff) / width) * width) - 1))) << 32;
            value = (((s64)(((width + 0x9ff) / width) - 1)) << 23) | progressive_width;
            horizontal = ((s64)kernel_horizontal) + 0x290;
            output->display = (value | (((horizontal + (horizontal_offset * scale)) & 0xfff) |
                                        (((s64)(height - 1)) << 44))) |
                              (((s64)(((vertical_offset + kernel_vertical) + 0x24) & 0xfff)) << 12);
        }
    } else if (((s16)display_mode) == 0x50) {
        output->display =
            ((((((u64)((s64)(height - 1))) << 44) |
               (((u64)(((vertical_offset + kernel_vertical) + 0x23) & 0xfff)) << 12)) |
              0x800000ULL) |
             ((u64)((((s64)(((0x2d0 - width) / 2) * 2)) +
                     (((s64)kernel_horizontal) + (((s64)(horizontal_offset * 2)) + 0xe8))) &
                    0xfff))) |
            (((u64)((s64)((width * 2) - 1))) << 32);
    } else {
        printf(D_003C3490);
    }
    output->bgcolor = 0;
}
