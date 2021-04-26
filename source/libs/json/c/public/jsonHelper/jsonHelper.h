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
// Created by mkoch201 on 5/14/18.
//

#ifndef ZILKER_JSONHELPER_H
#define ZILKER_JSONHELPER_H

#include <cjson/cJSON.h>
#include <stdbool.h>

/**
 * Helper method to extract the string value from a json object
 *
 * @param json the json object
 * @param key the key for which value we want
 * @return the value string, which the caller must free, or NULL if not a string or the key is not present
 */
char *getCJSONString(const cJSON *json, const char *key);

/**
 * Helper method to extract the int value from a json object
 *
 * @param json the json object
 * @param key the key for which value we want
 * @param value output location for the int value
 * @return true if success, or false if key not present or not a number
 */
bool getCJSONInt(const cJSON *json, const char *key, int *value);

/**
 * Helper method to extract the double value from a json object
 *
 * @param json the json object
 * @param key the key for which value we want
 * @param value output location for the double value
 * @return true if success, or false if key not present or not a number
 */
bool getCJSONDouble(const cJSON *json, const char *key, double *value);

/**
 * Helper method to extract the bool value from a json object
 *
 * @param json the json object
 * @param key the key for which value we want
 * @param value output location for the bool value
 * @return true if success, or false if key not present or not a bool
 */
bool getCJSONBool(const cJSON *json, const char *key, bool *value);

/**
 * Helper method to set the bool value within a json object
 *
 * @param json the json object
 * @param value the new value to set the json object to.
 */
void setCJSONBool(cJSON *json, bool value);

inline void cJSON_Delete__auto(cJSON **json)
{
    cJSON_Delete(*json);
}

#endif //ZILKER_JSONHELPER_H
