/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/adx_sjd.c (adxsjd_decode_prep). See
 * THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    s8 *data;
    s32 length;
} SjChunk;
typedef struct SjStream SjStream;
typedef struct {
    void *reserved[6];
    void (*get)(SjStream *, s32 id, s32 size, SjChunk *);
    void (*unget)(SjStream *, s32 id, SjChunk *);
    void (*put)(SjStream *, s32 id, SjChunk *);
} SjOps;
struct SjStream {
    SjOps *ops;
};
typedef struct {
    u8 pad00[0x14];
    s32 sampleRate;
    u8 pad18[0x82];
    s16 rawFormat;
    u8 pad9C[0x4C];
    s32 setFrequency;
} AdxDecoder;
typedef struct {
    u8 pad00;
    s8 state;
    u8 pad02;
    s8 emptyEnd;
    AdxDecoder *decoder;
    SjStream *input;
    u8 pad0C[0x4C];
    u8 spsdInfo[0x40];
    s32 headerLength;
} AdxStream;
extern void SJ_SplitChunk(SjChunk *input, s32 size, SjChunk *first, SjChunk *rest);
extern s32 func_00158400(AdxDecoder *, s8 *data, s32 size);
extern void func_00158360(AdxDecoder *);
extern s16 func_001585A0(AdxDecoder *);
extern s32 func_00157DF0(void);
extern void func_0015B4D0(const char *first, const char *second);
extern void *memcpy(void *, const void *, u32);
extern void (*D_0038327C)(AdxDecoder *, s32);
void func_00161A50(AdxStream *stream) {
    SjChunk chunk;
    SjChunk temp;
    s32 length;
    u32 format;
    s32 skip;
    SjStream *input = stream->input;
    AdxDecoder *decoder = stream->decoder;
    input->ops->get(input, 1, 0xC800, &chunk);
    for (skip = 0; skip < chunk.length; ++skip) {
        if (chunk.data[skip] != 0)
            break;
    }
    if (skip % 2 == 1) {
        input->ops->unget(input, 1, &chunk);
        if (func_00157DF0() == 0)
            func_0015B4D0("E04102501 adxsjd_decode_prep: ", "The data alignment is illegal.");
        stream->state = 4;
        return;
    }
    SJ_SplitChunk(&chunk, skip, &temp, &chunk);
    input->ops->put(input, 0, &temp);
    if (chunk.length < 16) {
        input->ops->unget(input, 1, &chunk);
        return;
    }
    length = func_00158400(decoder, chunk.data, chunk.length);
    if (length == 0 || chunk.length < length) {
        input->ops->unget(input, 1, &chunk);
        return;
    }
    if (length < 0) {
        if (decoder->rawFormat != 0) {
            func_00158360(decoder);
            length = 0;
        } else {
            input->ops->unget(input, 1, &chunk);
            if (func_00157DF0() == 0)
                func_0015B4D0("E03010901 ADXB_DecodeHeader: ", "Can not decode this file format.");
            stream->state = 4;
            return;
        }
    }
    stream->headerLength = length;
    if (func_001585A0(decoder) == 4)
        stream->emptyEnd = 1;
    if (func_001585A0(decoder) == 2)
        memcpy(stream->spsdInfo, chunk.data, chunk.length > 64 ? 64 : chunk.length);
    format = func_001585A0(decoder);
    if (format - 10 < 3 || format == 20 || format == 15)
        input->ops->unget(input, 1, &chunk);
    else {
        SJ_SplitChunk(&chunk, length, &chunk, &temp);
        input->ops->put(input, 0, &chunk);
        input->ops->unget(input, 1, &temp);
    }
    if (decoder->setFrequency && D_0038327C)
        D_0038327C(decoder, decoder->sampleRate);
    stream->state = 2;
}
