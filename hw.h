#pragma once

#define SRAM_SIZE (1024 * 2)

#define FLASH_SIZE_IN_WORDS (1024 * 16)
#define FLASH_SIZE_IN_BYTES (FLASH_SIZE_IN_WORDS << 1)

#define FLASH_PAGE_SIZE_IN_WORDS 64
#define FLASH_PAGE_SIZE_IN_BYTES (FLASH_PAGE_SIZE_IN_WORDS << 1)
