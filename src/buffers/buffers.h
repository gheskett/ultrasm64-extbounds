#ifndef BUFFERS_H
#define BUFFERS_H

#include <PR/ultratypes.h>
#include <hvqm2dec.h>

#include "game/save_file.h"
#include "game/game_init.h"
#include "game/main.h"
#include "config.h"
#include "audio/data.h"

// TODO: optimize these later!
#define COSTUME_HEAP_YAY0_SIZE   ALIGN16(0x40000) // NOTE: This is really the decompressed data size
#define COSTUME_HEAP_GEO_SIZE    ALIGN16( 0x8000)
#define COSTUME_POOL_BUFFER_SIZE ALIGN16( 0xC000)

extern u8 gAudioHeap[DOUBLE_SIZE_ON_64_BIT(AUDIO_HEAP_SIZE)];

extern u8 gCostumeYAY0Heap[2][COSTUME_HEAP_YAY0_SIZE]; // Double buffer this
extern u8 gCostumeGeoHeap[COSTUME_HEAP_GEO_SIZE];
extern u8 gCostumePoolBuffer[COSTUME_POOL_BUFFER_SIZE];
extern struct AllocOnlyPool gCostumeAllocPool;

extern u8 gIdleThreadStack[THREAD1_STACK];
extern u8 gThread3Stack[THREAD3_STACK];
extern u8 gThread4Stack[THREAD4_STACK];
extern u8 gThread5Stack[THREAD5_STACK];
#if ENABLE_RUMBLE
extern u8 gThread6Stack[THREAD6_STACK];
#endif

extern u8 gGfxSPTaskYieldBuffer[];

extern struct SaveBuffer gSaveBuffer;

extern u8 gGfxSPTaskStack[];

extern struct GfxPool gGfxPools[2];

extern u8 adpcmbuf[];		/* Buffer for audio records ADPCM) */

extern u64 hvq_yieldbuf[];	/* RSP task yield buffer */
extern HVQM2Info hvq_spfifo[];	/* Data area for HVQM2 microcode */
extern u16 hvqwork[];		/* Work buffer for HVQM2 decoder */
extern u8 hvqbuf[];		/* Buffer for video records (HVQM2) */

#endif // BUFFERS_H
