#ifndef PES6_PACKET_STREAM_H
#define PES6_PACKET_STREAM_H

/* Descriptive partial view, not an identified original C++ class.
 * Only the cursor at offset zero is established by these helpers. */
struct Pes6PacketStream { int *cursor; };

#ifdef __cplusplus
extern "C" {
#endif
/* These two recovered interfaces retain integer addresses. ReserveWords
 * returns the old cursor; AppendWord returns the cursor after writing. */
int Pes6PacketStream_ReserveWords(int streamAddress, int wordCount);
int Pes6PacketStream_AppendWord(int streamAddress, int value);
/* Emit one 16-byte GS GIF A+D record and advance the cursor. */
void Pes6PacketStream_AppendGsAD(struct Pes6PacketStream *, int registerAddress,
                              long long registerValue);
#ifdef __cplusplus
}
#endif

#endif
