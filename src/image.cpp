// -*-c++-*--------------------------------------------------------------------
// Copyright 2020 Bernd Pfrommer <bernd.pfrommer@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <flir_spinnaker_common/image.h>
namespace flir_spinnaker_common
{
Image::Image(
  uint64_t t, int16_t brightness, uint32_t et, uint32_t maxEt, float gain,
  uint64_t imgT, size_t imageSize, int status, const void * data, size_t w,
  size_t h, size_t stride, size_t bitsPerPixel, size_t numChan,
  uint64_t frameId, int64_t pixFmt)
: time_(t),
  brightness_(brightness),
  exposureTime_(et),
  maxExposureTime_(maxEt),
  gain_(gain),
  imageTime_(imgT),
  imageSize_(imageSize),
  imageStatus_(status),
  data_(data),
  width_(w),
  height_(h),
  stride_(stride),
  bitsPerPixel_(bitsPerPixel),
  numChan_(numChan),
  frameId_(frameId),
  pixelFormat_(pixFmt)
{
}
}  // namespace flir_spinnaker_common
