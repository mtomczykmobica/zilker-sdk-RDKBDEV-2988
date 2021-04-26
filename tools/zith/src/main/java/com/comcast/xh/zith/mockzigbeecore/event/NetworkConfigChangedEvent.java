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


package com.comcast.xh.zith.mockzigbeecore.event;

//
// Created by tlea on 1/4/19.
//

public class NetworkConfigChangedEvent extends Event
{
    public NetworkConfigChangedEvent()
    {
        super("networkConfigChanged");
    }

    public String getNetworkConfigData()
    {
        //return some bogus base64 enccoding for now
        return "8AUAAMAAAABVP1SHTmJik3rHVrI2jY2qAAAAAAAAAAAAAAAAAAAAAAAA+zEDFAIBAADNYnzWk41S8GQQU5N+CgBvDQBaaWdCZWVBbGxpYW5jZTA5APj/BwAAAAA=";
    }
}
