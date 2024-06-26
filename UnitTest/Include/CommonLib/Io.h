/* Copyright (C) 2021 - 2024 Advanced Micro Devices, Inc. All rights reserved. */
/**
 * @file  Io.h
 * @brief
 *
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void
xUSLIoWrite8 (
  uint16_t Port,
  uint8_t Value
  );

void
xUSLIoWrite16 (
  uint16_t Port,
  uint16_t Value
  );

void
xUSLIoWrite32 (
  uint16_t Port,
  uint32_t Value
  );

uint8_t
xUSLIoRead8 (
  uint16_t Port
  );

uint16_t
xUSLIoRead16 (
  uint16_t Port
  );

uint32_t
xUSLIoRead32 (
  uint16_t Port
  );

void
xUSLIoReadModifyWrite8 (
  uint16_t Port,
  uint8_t  AndMask,
  uint8_t  OrMask
  );

void
xUSLIoReadModifyWrite16 (
  uint16_t Port,
  uint16_t AndMask,
  uint16_t OrMask
  );

void
xUSLIoReadModifyWrite32 (
  uint16_t Port,
  uint32_t AndMask,
  uint32_t OrMask
  );

void
MockxUSLIoWrite8Manytimes (
  uint8_t  ExpectedWriteValue,
  uint32_t Count
  );

void
MockxUSLIoWrite8Once (
  uint8_t  ExpectedWriteValue
  );

void
MockxUSLIoWrite16Manytimes (
  uint16_t ExpectedWriteValue,
  uint32_t Count
  );

void
MockxUSLIoWrite16Once (
  uint16_t ExpectedWriteValue
  );

void
MockxUSLIoWrite32Manytimes (
  uint32_t ExpectedWriteValue,
  uint32_t Count
  );

void
MockxUSLIoWrite32Once (
  uint32_t ExpectedWriteValue
  );

void
MockxUSLIoRead8Manytimes (
  uint8_t  ExpectedReadValue,
  uint32_t Count
  );

void
MockxUSLIoRead8Once (
  uint8_t  ExpectedReadValue
  );

void
MockxUSLIoRead16Manytimes (
  uint16_t ExpectedReadValue,
  uint32_t Count
  );

void
MockxUSLIoRead16Once (
  uint16_t ExpectedReadValue
  );

void
MockxUSLIoRead32Manytimes (
  uint32_t ExpectedReadValue,
  uint32_t Count
  );

void
MockxUSLIoRead32Once (
  uint32_t ExpectedReadValue
  );

void
MockxUSLIoReadModefyWrite8Manytimes (
  uint8_t  ExpectedReadValue,
  uint8_t  AndMask,
  uint8_t  OrMask,
  uint32_t Count
  );

void
MockxUSLIoReadModefyWrite8Once (
  uint8_t  ExpectedReadValue,
  uint8_t  AndMask,
  uint8_t  OrMask
  );

void
MockxUSLIoReadModefyWrite16Manytimes (
  uint16_t ExpectedReadValue,
  uint16_t AndMask,
  uint16_t OrMask,
  uint32_t Count
  );

void
MockxUSLIoReadModefyWrite16Once (
  uint16_t ExpectedReadValue,
  uint16_t AndMask,
  uint16_t OrMask
  );

void
MockxUSLIoReadModefyWrite32Manytimes (
  uint32_t ExpectedReadValue,
  uint32_t AndMask,
  uint32_t OrMask,
  uint32_t Count
  );

void
MockxUSLIoReadModefyWrite32Once (
  uint32_t ExpectedReadValue,
  uint32_t AndMask,
  uint32_t OrMask
  );

#ifdef __cplusplus
}
#endif
