/* compiler: ee-gcc-2.96-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
extern void ADXCRS_Lock(void);
void ADXF_Lock(void)
{
    ADXCRS_Lock();
}
