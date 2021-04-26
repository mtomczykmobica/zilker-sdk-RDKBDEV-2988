/*
 * Copyright 2021 Comcast Cable Communications Management, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

//
// Created by tlea on 2/19/19.
//

#ifndef ZILKER_COLORCONTROLCLUSTER_H
#define ZILKER_COLORCONTROLCLUSTER_H

#include <icBuildtime.h>

#ifdef CONFIG_SERVICE_DEVICE_ZIGBEE

#include "zigbeeCluster.h"

typedef struct
{
    void (*currentXChanged)(uint64_t eui64,
                            uint8_t endpointId,
                            uint16_t x,
                            const void *ctx);

    void (*currentYChanged)(uint64_t eui64,
                            uint8_t endpointId,
                            uint16_t y,
                            const void *ctx);
} ColorControlClusterCallbacks;


ZigbeeCluster *colorControlClusterCreate(const ColorControlClusterCallbacks *callbacks, void *callbackContext);

bool colorControlClusterGetX(uint64_t eui64, uint8_t endpointId, uint16_t *x);
bool colorControlClusterGetY(uint64_t eui64, uint8_t endpointId, uint16_t *y);
bool colorControlClusterMoveToColor(uint64_t eui64, uint8_t endpointId, uint16_t x, uint16_t y);

#endif //CONFIG_SERVICE_DEVICE_ZIGBEE

#endif //ZILKER_COLORCONTROLCLUSTER_H
