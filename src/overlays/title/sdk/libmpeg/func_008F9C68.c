/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_002536b8.c. See THIRD_PARTY.md. */
// SPDX-License-Identifier: GPL-3.0-or-later
typedef struct {
    int base;
    int size;
    int used;
    int start;
} WorkArea;

typedef struct {
    int ptr;
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    char pad14[0x54];
} FrameDesc;

typedef struct {
    char pad0[0x10C];
    int buffer[3];
    WorkArea workArea;
    char pad128[0xC];
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    char pad144[0x8];
    int field14C;
    int field150;
    int field154;
    char pad158[0x2C];
    int field184;
    char pad188[0x4];
    int field18C;
    char pad190[0x8];
    int field198;
    char pad19C[0x5C];
    FrameDesc frame[9];
    char pad5A0[0x2B8];
    int field858;
    char pad85C[0x20];
    int field87C;
} MpegContext;

typedef struct {
    int width;
    int height;
    char pad8[0x38];
    MpegContext *context;
} Mpeg;

void func_008FC130(WorkArea *);
int func_008FC140(MpegContext *, WorkArea *, int, int);

void func_008F9C68(Mpeg *mpeg)
{
    MpegContext *context = mpeg->context;
    int mode = context->field858;
    int width;
    int height;
    int mbHeight;
    FrameDesc *frame0, *frame1, *frame2, *frame3, *frame4, *frame5, *frame6, *frame7, *frame8;
    unsigned size;

    if (mode == 0) {
        context->field184 = 3;
        context->field18C = context->field198 = context->field150 = context->field14C = 1;
        context->field154 = 5;
    }
    context->mbWidth = (context->width + 15) >> 4;
    if (mode != 0 && context->field14C == 0) {
        mbHeight = ((context->height + 31) >> 5) * 2;
    } else {
        mbHeight = (context->height + 15) >> 4;
    }
    context->mbHeight = mbHeight;
    height = mbHeight * 16;
    width = context->mbWidth * 16;
    if (width != mpeg->width || height != mpeg->height) {
        mpeg->width = width;
        mpeg->height = height;
        size = (unsigned)(width * 384 * height) >> 8;
        func_008FC130(&context->workArea);
        context->buffer[0] = func_008FC140(context, &context->workArea, size, 64);
        context->buffer[1] = func_008FC140(context, &context->workArea, size, 64);
        context->buffer[2] = func_008FC140(context, &context->workArea, size, 64);
        if (context->field87C == 0) {
            int offset = mpeg->width * mpeg->height / 512 * 384;
            int buffer0 = (context->buffer[0] & 0x0FFFFFFF) | 0x20000000;
            int buffer1 = (context->buffer[1] & 0x0FFFFFFF) | 0x20000000;
            int buffer2 = (context->buffer[2] & 0x0FFFFFFF) | 0x20000000;
            context->frame[0].ptr = buffer0;
            context->frame[1].ptr = buffer1;
            context->frame[3].ptr = buffer0;
            context->frame[4].ptr = buffer1;
            context->frame[2].ptr = buffer2;
            context->frame[5].ptr = buffer2;
            context->frame[6].ptr = buffer0 + offset;
            context->frame[7].ptr = buffer1 + offset;
            context->frame[8].ptr = buffer2 + offset;
        } else if (context->field87C == 1) {
            int offset = mpeg->width * mpeg->height / 512 * 384;
            int buffer0 = context->buffer[0];
            int buffer1 = context->buffer[1];
            int buffer2 = context->buffer[2];
            context->frame[0].ptr = buffer0;
            context->frame[1].ptr = buffer1;
            context->frame[3].ptr = buffer0;
            context->frame[4].ptr = buffer1;
            context->frame[2].ptr = buffer2;
            context->frame[5].ptr = buffer2;
            context->frame[6].ptr = buffer0 + offset;
            context->frame[7].ptr = buffer1 + offset;
            context->frame[8].ptr = buffer2 + offset;
        }
        frame0 = &context->frame[0];
        frame1 = &context->frame[1];
        frame2 = &context->frame[2];
        frame3 = &context->frame[3];
        frame4 = &context->frame[4];
        frame5 = &context->frame[5];
        frame6 = &context->frame[6];
        frame7 = &context->frame[7];
        frame8 = &context->frame[8];
        frame0->width = width;
        frame0->height = height;
        frame0->mbWidth = width >> 4;
        frame0->mbHeight = height >> 4;
        frame1->width = width;
        frame1->height = height;
        frame1->mbWidth = width >> 4;
        frame1->mbHeight = height >> 4;
        frame2->width = width;
        frame2->height = height;
        frame2->mbWidth = width >> 4;
        frame2->mbHeight = height >> 4;
        frame3->width = width;
        frame3->height = height / 2;
        frame3->mbWidth = width >> 4;
        frame3->mbHeight = height / 2 >> 4;
        frame4->width = width;
        frame4->height = height / 2;
        frame4->mbWidth = width >> 4;
        frame4->mbHeight = height / 2 >> 4;
        frame5->width = width;
        frame5->height = height / 2;
        frame5->mbWidth = width >> 4;
        frame5->mbHeight = height / 2 >> 4;
        frame6->width = width;
        frame6->height = height / 2;
        frame6->mbWidth = width >> 4;
        frame6->mbHeight = height / 2 >> 4;
        frame7->width = width;
        frame7->height = height / 2;
        frame7->mbWidth = width >> 4;
        frame7->mbHeight = height / 2 >> 4;
        frame8->width = width;
        frame8->height = height / 2;
        frame8->mbWidth = width >> 4;
        frame8->mbHeight = height / 2 >> 4;
    }
}
