/**
 * @file    target.c
 * @brief   Target information for the stm32l486jg
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2017-2017, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "target_config.h"

// The file flash_blob.c must only be included in target.c
#include "flash_blob.c"

// target information
target_cfg_t target_device_stm32l475 = {
    .sector_size        = 0x800,
    .sector_cnt         = (0x100000 / 0x800),
    .flash_start        = 0x08000000,
    .flash_end          = 0x08100000,
    .ram_start          = 0x20000000, //SRAM1 start
    .ram_end            = 0x20000000 + 0x00018000, //SRAM1 end
    .flash_algo         = (program_target_t *) &flash,
    .extra_ram          = {{ 0x10000188, 0x10008000 },}, //SRAM2
};
