/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c). */
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef signed int Sint32;
typedef struct {
    char pad0[0x10];
} ADX_UNK;
typedef struct {
    union {
        Uint16 magic;
        struct {
            Uint8 magic_0;
            Uint8 magic_1;
        };
    };
    union {
        Sint16 copyright_offset;
        struct {
            Uint8 copyright_offset_0;
            Uint8 copyright_offset_1;
        };
    };
    Uint8 encoding_type;
    Uint8 block_size;
    Uint8 sample_bitdepth;
    Uint8 channel_count;
    Uint8 sample_rate_0;
    Uint8 sample_rate_1;
    Uint8 sample_rate_2;
    Uint8 sample_rate_3;
    Uint8 total_samples_0;
    Uint8 total_samples_1;
    Uint8 total_samples_2;
    Uint8 total_samples_3;
    union {
        Uint16 high_pass_frequency;
        struct {
            Uint8 high_pass_frequency_0;
            Uint8 high_pass_frequency_1;
        };
    };
    Uint8 version;
    Uint8 flags;
    char pad14[4];
    Uint16 unk18;
    Uint16 unk1A;
    Uint16 unk1C;
    Uint16 unk1E;
} ADXHeader;
Sint32 ADX_DecodeInfo(ADXHeader* hdr, Sint32 arg1, Sint16* audio_offset, Sint8* encoding_type, Sint8* sample_bitdepth,
                      Sint8* block_size, Sint8* channel_count, Sint32* sample_rate, Sint32* total_samples,
                      Sint32* samples_per_block);
Sint32 ADX_DecodeInfoExADPCM2(ADXHeader* hdr, Sint32 arg1, Sint16* high_pass_frequency);
Sint32 ADX_DecodeInfoExVer(ADXHeader* hdr, Sint32 arg1, Sint8* version, Sint8* flags);
Sint32 ADX_DecodeInfoExIdly(ADXHeader* hdr, Sint32 arg1, Sint16* arg2, Sint16* arg3);
Sint32 ADX_DecodeInfoExLoop(Uint8* hdr, Sint32 arg1, Sint32* arg2, Sint16* arg3, Sint16* arg4, Sint32* arg5,
                            Sint32* arg6, Sint32* arg7, Sint32* arg8);
Sint32 ADX_DecodeInfoAinf(Uint8* hdr, Sint32 arg1, Sint32* arg2, ADX_UNK* arg3, Sint16* arg4, Sint16* arg5);
void ADX_GetCoefficient(Sint32 highpass_frequency, Sint32 sample_rate, Sint16* coef1_ptr, Sint16* coef2_ptr);
Sint32 ADX_DecodeFooter(Uint8*, Sint32, Sint16*);
void ADX_GetCoefficient(Sint32 highpass_frequency, Sint32 sample_rate, Sint16* coef1_ptr, Sint16* coef2_ptr);
Sint32 ADX_DecodeInfo(ADXHeader* hdr, Sint32 arg1, Sint16* audio_offset, Sint8* encoding_type, Sint8* sample_bitdepth,
                      Sint8* block_size, Sint8* channel_count, Sint32* sample_rate, Sint32* total_samples,
                      Sint32* samples_per_block) {
    if (arg1 < 16) {
        return -1;
    }
    if ((hdr->magic_1 | (hdr->magic_0 << 8)) != 0x8000) {
        return -2;
    }
    *audio_offset = ((hdr->copyright_offset_0 << 8) | hdr->copyright_offset_1) + 4;
    *encoding_type = hdr->encoding_type;
    *block_size = hdr->block_size;
    *sample_bitdepth = hdr->sample_bitdepth;
    *channel_count = hdr->channel_count;
    *sample_rate =
        (hdr->sample_rate_0 << 24) | (hdr->sample_rate_1 << 16) | (hdr->sample_rate_2 << 8) | hdr->sample_rate_3;
    *total_samples = (hdr->total_samples_0 << 24) | (hdr->total_samples_1 << 16) | (hdr->total_samples_2 << 8) |
                     hdr->total_samples_3;
    if (*sample_bitdepth == 0) {
        *samples_per_block = 0;
    } else {
        *samples_per_block = (*block_size - 2) * 8 / *sample_bitdepth;
    }
    return 0;
}
Sint32 ADX_DecodeInfoExADPCM2(ADXHeader* hdr, Sint32 arg1, Sint16* high_pass_frequency);
Sint32 ADX_DecodeInfoExVer(ADXHeader* hdr, Sint32 arg1, Sint8* version, Sint8* flags);
Sint32 ADX_DecodeInfoExIdly(ADXHeader* hdr, Sint32 arg1, Sint16* arg2, Sint16* arg3);
Sint32 ADX_DecodeInfoExLoop(Uint8* hdr, Sint32 arg1, Sint32* arg2, Sint16* arg3, Sint16* arg4, Sint32* arg5,
                            Sint32* arg6, Sint32* arg7, Sint32* arg8);
Sint32 ADX_DecodeInfoAinf(Uint8* hdr, Sint32 arg1, Sint32* arg2, ADX_UNK* arg3, Sint16* arg4, Sint16* arg5);