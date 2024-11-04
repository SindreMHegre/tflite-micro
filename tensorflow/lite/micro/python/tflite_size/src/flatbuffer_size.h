/* Copyright 2022 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_MICRO_PYTHON_TFLITE_SIZE_SRC_FLATBUFFERS_SIZE_H_
#define TENSORFLOW_LITE_MICRO_PYTHON_TFLITE_SIZE_SRC_FLATBUFFERS_SIZE_H_

#include <string>

#include "flatbuffers/include/flatbuffers/flatbuffers.h"
#include "flatbuffers/include/flatbuffers/util.h"

namespace tflite {

std::string FlatBufferSizeToJsonString(
    const uint8_t* buffer, const flatbuffers::TypeTable* type_table);

}  // namespace tflite

#endif  // TENSORFLOW_LITE_MICRO_PYTHON_TFLITE_SIZE_SRC_FLATBUFFERS_SIZE_H_
