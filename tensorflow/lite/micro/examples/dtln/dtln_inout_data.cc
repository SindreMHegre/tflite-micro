/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

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

#include "tflite/tensorflow/lite/c/common.h"

int8_t feature_data[] = {
    -127, -126, -115, -82,  -90,  -113, -15,  13,   -87,  -105, -77,  -106,
    -113, -81,  -90,  -123, -113, -112, -124, -120, -114, -123, -123, -112,
    -115, -125, -120, -120, -126, -126, -126, -127, -128, -127, -128, -128,
    -127, -127, -128, -126, -125, -126, -127, -127, -127, -128, -126, -127,
    -128, -127, -127, -128, -127, -126, -127, -128, -127, -127, -127, -124,
    -124, -127, -126, -126, -127, -126, -124, -125, -128, -126, -125, -127,
    -126, -126, -127, -127, -126, -126, -127, -126, -126, -127, -126, -125,
    -127, -126, -123, -124, -126, -126, -126, -128, -127, -127, -127, -128,
    -127, -127, -128, -128, -128, -128, -128, -127, -128, -128, -127, -128,
    -128, -127, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -127,
    -127, -127, -127, -128, -127, -127, -127, -127, -126, -127, -127, -127,
    -127, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -127, -128, -128, -127, -127, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128};

int8_t golden_ref[] = {
    119, 82,  72,  116, -5,  10,  -2,  0,   -2,  36,  116, 125, 123, 124, 126,
    124, 115, 116, 124, 126, 121, 124, 121, 104, 104, 113, 113, 110, 115, 101,
    96,  119, 120, 117, 118, 114, 104, 110, 118, 119, 111, 114, 119, 117, 114,
    110, 117, 112, 115, 120, 119, 118, 119, 116, 117, 120, 121, 121, 121, 119,
    117, 120, 121, 120, 118, 115, 114, 114, 117, 119, 113, 108, 108, 111, 112,
    114, 114, 116, 115, 112, 110, 113, 113, 110, 107, 98,  102, 101, 101, 103,
    92,  98,  101, 102, 102, 101, 104, 102, 101, 101, 100, 102, 98,  104, 100,
    99,  92,  96,  87,  97,  96,  96,  96,  95,  92,  98,  95,  90,  85,  82,
    87,  82,  82,  89,  90,  83,  86,  85,  80,  86,  87,  91,  89,  87,  87,
    85,  82,  74,  80,  80,  72,  79,  74,  79,  82,  83,  77,  85,  71,  76,
    72,  76,  76,  77,  56,  74,  74,  69,  69,  69,  65,  56,  60,  67,  71,
    69,  74,  67,  71,  65,  77,  76,  79,  67,  72,  61,  60,  67,  69,  71,
    77,  63,  63,  60,  63,  71,  80,  80,  74,  76,  67,  74,  63,  67,  69,
    72,  77,  71,  72,  82,  65,  49,  67,  58,  71,  65,  63,  69,  61,  77,
    63,  65,  65,  69,  69,  65,  72,  77,  80,  60,  79,  77,  71,  67,  79,
    69,  67,  65,  74,  69,  71,  67,  76,  77,  77,  77,  83,  67,  65,  79,
    77,  60,  71,  86,  86,  63,  74,  63,  63,  63,  69,  79,  63,  52,  85,
    87,  86};
