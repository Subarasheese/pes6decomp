/* Append one 16-byte graphics A+D record: the full 64-bit value, register
 * address, then zero. The stream's cursor advances by one record. */
#include "pes6/packet_stream.h"
void Pes6PacketStream_AppendGsAD(struct Pes6PacketStream *stream, int registerAddress, long long registerValue) {
    int *outputWords = stream->cursor;
    *outputWords++ = (int)registerValue;
    outputWords[0] = (int)(registerValue >> 32);
    outputWords[1] = registerAddress;
    outputWords[2] = 0;
    stream->cursor = outputWords + 3;
}
