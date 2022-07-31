//
// Created by mustafa58 on 31.07.2022.
//

#ifndef BOOLEAN_TYPES_H
#define BOOLEAN_TYPES_H

#define int8  char
#define int16 short
#define int32 int
#define int64 long long

#define uint8  unsigned char
#define uint16 unsigned short
#define uint32 unsigned int
#define uint64 unsigned long long

#define uint8_max  ( (uint8) (-1) )
#define uint16_max ( (uint16)(-1) )
#define uint32_max ( (uint32)(-1) )
#define uint64_max ( (uint64)(-1) )

#define int8_max  ((uint8) (-1) >> 1)
#define int16_max ((uint16)(-1) >> 1)
#define int32_max ((uint32)(-1) >> 1)
#define int64_max ((uint64)(-1) >> 1)

#define int8_min  ((int8) (1 << 7))
#define int16_min ((int16)(1 << 15))
#define int32_min ((int32)(1 << 31))
#define int64_min ((int64)(1ll << 63))

#define __arch__ ((sizeof(long)==sizeof(int64)) ? 64 : 32)

#endif //BOOLEAN_TYPES_H
