// Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.
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

#pragma once

#include "paddle/fluid/operators/math/selected_rows_functor.h"
#include "paddle/phi/common/scalar.h"
#include "paddle/phi/core/dense_tensor.h"
#include "paddle/phi/core/device_context.h"
#include "paddle/phi/core/selected_rows.h"
#include "paddle/phi/kernels/impl/clip_kernel_impl.h"

namespace phi {
namespace sr {

template <typename T, typename Context>
void ClipSparseKernel(const Context& dev_ctx,
                      const SelectedRows& x,
                      const Scalar& min,
                      const Scalar& max,
                      SelectedRows* out);
}  // namespace sr
}  // namespace phi